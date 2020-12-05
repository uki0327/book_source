
// RedrawDemoView.cpp : CRedrawDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "RedrawDemo.h"

#include "RedrawDemoDoc.h"
#include "RedrawDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRedrawDemoView

IMPLEMENT_DYNCREATE(CRedrawDemoView, CView)

BEGIN_MESSAGE_MAP(CRedrawDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CRedrawDemoView ����/�Ҹ�

CRedrawDemoView::CRedrawDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CRedrawDemoView::~CRedrawDemoView()
{
}

BOOL CRedrawDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CRedrawDemoView �׸���

void CRedrawDemoView::OnDraw(CDC* /*pDC*/)
{
	CRedrawDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CRedrawDemoView �μ�

BOOL CRedrawDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CRedrawDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CRedrawDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CRedrawDemoView ����

#ifdef _DEBUG
void CRedrawDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CRedrawDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRedrawDemoDoc* CRedrawDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRedrawDemoDoc)));
	return (CRedrawDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CRedrawDemoView �޽��� ó����

void CRedrawDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	//DC�� ��´�.
	CDC* pDC = GetDC();
	//�־��� ��ǥ�� �׸� �׸���.
	pDC->Rectangle(10, 10, 110, 110);
	//DC�� ��ȯ�Ѵ�.
	ReleaseDC(pDC);

	CView::OnLButtonDown(nFlags, point);
}

void CRedrawDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	//�β��� 3�ȼ��� ���� �� ���� �����Ѵ�.
	CPen NewPen(PS_SOLID, 3, RGB(192, 0, 0));
	//������ ���� DC�� ���� ������ �����ϰ� ���� �� ��ü�� ����
	//�����͸� ������ �����صд�.
	CPen* pOldPen = dc.SelectObject(&NewPen);

	//���ο� �귯�ø� �����Ͽ� �����Ѵ�.
	CBrush NewBrush(RGB(192, 192, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	//�׸��� �۾��� �����Ѵ�.
	dc.Rectangle(120, 10, 220, 110);

	//���� ���� ���� ������ �ٲ۴�.
	dc.SelectObject(pOldPen);
	//���� �귯�÷� ���� �귯�ø� �ٲ۴�.
	dc.SelectObject(pOldBrush);
}
