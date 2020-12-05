
// RedrawDemoView.cpp : CRedrawDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "RedrawDemo.h"

#include "RedrawDemoDoc.h"
#include "RedrawDemoView.h"

#include "BufferDC.h"

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
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
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

void CRedrawDemoView::OnPaint()
{
//	CPaintDC dc(this); // device context for painting
	CBufferDC dc(this);

	CRect Rect;
	GetClientRect(&Rect);
	dc.FillSolidRect(&Rect, RGB(192, 0, 0));

	Rect -= CRect(7, 7, 7, 7);
	dc.SelectStockObject(NULL_PEN);
	dc.RoundRect(&Rect, CPoint(21, 21));

	dc.SetBkMode(TRANSPARENT);
	dc.TextOut(30, 30, _T("Test string!"));

}

BOOL CRedrawDemoView::OnEraseBkgnd(CDC* pDC)
{
	return TRUE;
//	return CView::OnEraseBkgnd(pDC);
}
