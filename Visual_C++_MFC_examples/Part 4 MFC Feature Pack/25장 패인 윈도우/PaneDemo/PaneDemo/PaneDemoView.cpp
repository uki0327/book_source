
// PaneDemoView.cpp : CPaneDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "PaneDemo.h"

#include "PaneDemoDoc.h"
#include "PaneDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPaneDemoView

IMPLEMENT_DYNCREATE(CPaneDemoView, CView)

BEGIN_MESSAGE_MAP(CPaneDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CPaneDemoView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPaneDemoView ����/�Ҹ�

CPaneDemoView::CPaneDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPaneDemoView::~CPaneDemoView()
{
}

BOOL CPaneDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPaneDemoView �׸���

void CPaneDemoView::OnDraw(CDC* /*pDC*/)
{
	CPaneDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CPaneDemoView �μ�


void CPaneDemoView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CPaneDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CPaneDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPaneDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CPaneDemoView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CPaneDemoView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CPaneDemoView ����

#ifdef _DEBUG
void CPaneDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CPaneDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPaneDemoDoc* CPaneDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPaneDemoDoc)));
	return (CPaneDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CPaneDemoView �޽��� ó����
