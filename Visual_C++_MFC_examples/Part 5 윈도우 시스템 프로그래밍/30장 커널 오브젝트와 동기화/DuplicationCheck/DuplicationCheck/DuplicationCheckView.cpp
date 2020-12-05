
// DuplicationCheckView.cpp : CDuplicationCheckView Ŭ������ ����
//

#include "stdafx.h"
#include "DuplicationCheck.h"

#include "DuplicationCheckDoc.h"
#include "DuplicationCheckView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDuplicationCheckView

IMPLEMENT_DYNCREATE(CDuplicationCheckView, CView)

BEGIN_MESSAGE_MAP(CDuplicationCheckView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDuplicationCheckView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDuplicationCheckView ����/�Ҹ�

CDuplicationCheckView::CDuplicationCheckView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CDuplicationCheckView::~CDuplicationCheckView()
{
}

BOOL CDuplicationCheckView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CDuplicationCheckView �׸���

void CDuplicationCheckView::OnDraw(CDC* /*pDC*/)
{
	CDuplicationCheckDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CDuplicationCheckView �μ�


void CDuplicationCheckView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CDuplicationCheckView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CDuplicationCheckView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CDuplicationCheckView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CDuplicationCheckView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDuplicationCheckView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CDuplicationCheckView ����

#ifdef _DEBUG
void CDuplicationCheckView::AssertValid() const
{
	CView::AssertValid();
}

void CDuplicationCheckView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDuplicationCheckDoc* CDuplicationCheckView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDuplicationCheckDoc)));
	return (CDuplicationCheckDoc*)m_pDocument;
}
#endif //_DEBUG


// CDuplicationCheckView �޽��� ó����
