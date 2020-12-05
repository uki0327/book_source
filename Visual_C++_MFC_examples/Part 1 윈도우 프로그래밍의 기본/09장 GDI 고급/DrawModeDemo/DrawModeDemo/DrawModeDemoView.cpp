
// DrawModeDemoView.cpp : CDrawModeDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "DrawModeDemo.h"

#include "DrawModeDemoDoc.h"
#include "DrawModeDemoView.h"

#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawModeDemoView

IMPLEMENT_DYNCREATE(CDrawModeDemoView, CView)

BEGIN_MESSAGE_MAP(CDrawModeDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_PAINT()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CDrawModeDemoView ����/�Ҹ�

CDrawModeDemoView::CDrawModeDemoView()
{
	m_ptBegin	= CPoint(0, 0);
	m_ptEnd		= CPoint(0, 0);

	m_ptDragBegin	= CPoint(0, 0);
	m_ptDragEnd		= CPoint(0, 0);
}

CDrawModeDemoView::~CDrawModeDemoView()
{
}

BOOL CDrawModeDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CDrawModeDemoView �׸���

void CDrawModeDemoView::OnDraw(CDC* /*pDC*/)
{
	CDrawModeDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CDrawModeDemoView �μ�

BOOL CDrawModeDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CDrawModeDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CDrawModeDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CDrawModeDemoView ����

#ifdef _DEBUG
void CDrawModeDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawModeDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawModeDemoDoc* CDrawModeDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawModeDemoDoc)));
	return (CDrawModeDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawModeDemoView �޽��� ó����

void CDrawModeDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	//���콺�� ĸ���ϰ� �巡�װ� ���۵�.
	SetCapture();
	//���� �巡�� ���۽ÿ��� ����/�� ��ǥ�� ���� ������ ����
	m_ptDragBegin	= point;
	m_ptDragEnd		= point;

	CView::OnLButtonDown(nFlags, point);
}

void CDrawModeDemoView::OnLButtonUp(UINT nFlags, CPoint point)
{
	//�巡�װ� �������Ƿ� ���� �Ǽ��� ����/�� ��ǥ�� �����ϰ�
	//�����츦 �ٽ� �׸���.
	if(GetCapture() == this)
	{
		m_ptBegin	= m_ptDragBegin;
		m_ptEnd		= m_ptDragEnd;
		RedrawWindow();
	}


	ReleaseCapture();

	CView::OnLButtonUp(nFlags, point);
}

void CDrawModeDemoView::OnMouseMove(UINT nFlags, CPoint point)
{
	//���콺�� ���ĵ� ����(�巡��)�� ������ �Ǽ��� �׸���.
	if(GetCapture() == this)
	{
		DrawInvertLine(point);
	}

	CView::OnMouseMove(nFlags, point);
}

void CDrawModeDemoView::DrawInvertLine(CPoint point)
{
	CClientDC dc(this);
	//�β��� 40�� ���� �����Ѵ�.
	CPen NewPen(PS_SOLID, 40, RGB(0, 128, 0));
	CPen* pOldPen = (CPen*)dc.SelectObject(&NewPen);
	//�׸��� ��带 �������� �����Ѵ�.
	dc.SetROP2(R2_NOT);

	//������ ������ ���� �׷��� ��ǥ�� �ѹ� �� ������ ���� �׸���.
	//���� ������ �̹����� ������� �����ȴ�.
	dc.MoveTo(m_ptDragBegin);
	dc.LineTo(m_ptDragEnd);

	m_ptDragEnd = point;

	//�� ��ǥ�� ������ ���� �׷��� �̹����� ������Ų��.
	dc.MoveTo(m_ptDragBegin);
	dc.LineTo(m_ptDragEnd);

	dc.SelectObject(pOldPen);
}

void CDrawModeDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	//��� �̹����� �ε��Ͽ� ����Ѵ�.
	CImage Image;
	Image.LoadFromResource(AfxGetInstanceHandle(), IDB_Background);
	Image.BitBlt(dc.m_hDC, 0, 0);

	//�׷��� �� �Ǽ��� ����/�� ��ǥ�� ������ �׸��� �ʴ´�.
	if(m_ptBegin == m_ptEnd)	return;

	CPen NewPen(PS_SOLID, 40, RGB(192, 0, 0));
	CPen* pOldPen = (CPen*)dc.SelectObject(&NewPen);

	dc.MoveTo(m_ptBegin);
	dc.LineTo(m_ptEnd);

	dc.SelectObject(pOldPen);
}

void CDrawModeDemoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	//����ȭ�� �����쿡 ���� �����͸� ��´�.
	CWnd* pWnd = GetDesktopWindow();
	CWindowDC dc(pWnd);
	CPen NewPen(PS_SOLID, 10, RGB(0, 0, 0));
	CPen* pOldPen = (CPen*)dc.SelectObject(&NewPen);

	int nPrevMode = dc.SetROP2(R2_NOTXORPEN);

	//����ȭ�� �����쿡 �׸��⸦ �����Ѵ�.
	for(int i = 0; i < 300; i += 3)
	{
		dc.Rectangle(20, 10, 210 + i, 210 + i);
		::Sleep(5);
		dc.Rectangle(20, 10, 210 + i, 210 + i);
	}

	dc.SelectObject(pOldPen);
	dc.SetROP2(nPrevMode);
	pWnd->RedrawWindow();

	CView::OnRButtonDown(nFlags, point);
}
