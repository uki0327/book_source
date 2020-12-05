
// MapModeDemoView.cpp : CMapModeDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "MapModeDemo.h"

#include "MapModeDemoDoc.h"
#include "MapModeDemoView.h"
#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMapModeDemoView

IMPLEMENT_DYNCREATE(CMapModeDemoView, CView)

BEGIN_MESSAGE_MAP(CMapModeDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
	ON_WM_MOUSEWHEEL()
END_MESSAGE_MAP()

// CMapModeDemoView ����/�Ҹ�

CMapModeDemoView::CMapModeDemoView()
{
	m_nZoomRate = 100;
}

CMapModeDemoView::~CMapModeDemoView()
{
}

BOOL CMapModeDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMapModeDemoView �׸���

void CMapModeDemoView::OnDraw(CDC* /*pDC*/)
{
	CMapModeDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMapModeDemoView �μ�

BOOL CMapModeDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMapModeDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMapModeDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMapModeDemoView ����

#ifdef _DEBUG
void CMapModeDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CMapModeDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMapModeDemoDoc* CMapModeDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMapModeDemoDoc)));
	return (CMapModeDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CMapModeDemoView �޽��� ó����

void CMapModeDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	dc.SetMapMode(MM_ISOTROPIC);
	//������ ȭ��DC�� ũ�⸦ 100*100���� �����Ѵ�.
	dc.SetWindowExt(100, 100);
	//����Ʈ�� ũ�⸦ �����Ѵ�.
	dc.SetViewportExt(m_nZoomRate, m_nZoomRate);
	//�ȼ����� ��ǥ�� 300, 300�� ���� ��ǥ0, 0�� �ǵ��� �Ѵ�.
	dc.SetViewportOrg(300, 300);

	//xy���� �����ϴ� ���� �׸���.
	CPen NewPen(PS_SOLID, 15, RGB(192, 0 , 0));
	CPen* pOldPen  = dc.SelectObject(&NewPen);
	dc.MoveTo(-100, 100);
	dc.LineTo(100, -100);
	dc.SelectObject(pOldPen);

	//x, y�࿡ ���� ���� �׸���.
	dc.MoveTo(-1024, 0);
	dc.LineTo(1024, 0);
	dc.MoveTo(0, -1024);
	dc.LineTo(0, 1024);

	//��Ʈ���� 20, 20 ��ǥ�� ����Ѵ�.
	CImage Image;
	Image.LoadFromResource(AfxGetInstanceHandle(), IDB_Sample);
	Image.BitBlt(dc.m_hDC, 20, 20);

	//0, 0�� �������� �� �и鿡 ���ڿ��� ����Ѵ�.
	dc.TextOut(20, 30, _T("Test1"));
	dc.TextOut(-50, 30, _T("Test2"));
	dc.TextOut(-50, -30, _T("Test3"));
	dc.TextOut(20, -30, _T("Test4"));
}

BOOL CMapModeDemoView::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	if((nFlags & MK_CONTROL) != MK_CONTROL)
		return CView::OnMouseWheel(nFlags, zDelta, pt);

	if(zDelta < 0)
	{
		m_nZoomRate += 10;
		if(m_nZoomRate > 300)	m_nZoomRate = 300;
	}
	else
	{
		m_nZoomRate -= 10;
		if(m_nZoomRate < 10)		m_nZoomRate = 10;
	}

	RedrawWindow();

	return CView::OnMouseWheel(nFlags, zDelta, pt);
}
