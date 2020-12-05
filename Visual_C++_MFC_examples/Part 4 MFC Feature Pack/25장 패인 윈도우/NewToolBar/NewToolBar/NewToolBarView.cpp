
// NewToolBarView.cpp : CNewToolBarView Ŭ������ ����
//

#include "stdafx.h"
#include "NewToolBar.h"

#include "NewToolBarDoc.h"
#include "NewToolBarView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNewToolBarView

IMPLEMENT_DYNCREATE(CNewToolBarView, CView)

BEGIN_MESSAGE_MAP(CNewToolBarView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CNewToolBarView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CNewToolBarView ����/�Ҹ�

CNewToolBarView::CNewToolBarView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CNewToolBarView::~CNewToolBarView()
{
}

BOOL CNewToolBarView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CNewToolBarView �׸���

void CNewToolBarView::OnDraw(CDC* /*pDC*/)
{
	CNewToolBarDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CNewToolBarView �μ�


void CNewToolBarView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CNewToolBarView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CNewToolBarView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CNewToolBarView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CNewToolBarView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CNewToolBarView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CNewToolBarView ����

#ifdef _DEBUG
void CNewToolBarView::AssertValid() const
{
	CView::AssertValid();
}

void CNewToolBarView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNewToolBarDoc* CNewToolBarView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNewToolBarDoc)));
	return (CNewToolBarDoc*)m_pDocument;
}
#endif //_DEBUG


// CNewToolBarView �޽��� ó����
