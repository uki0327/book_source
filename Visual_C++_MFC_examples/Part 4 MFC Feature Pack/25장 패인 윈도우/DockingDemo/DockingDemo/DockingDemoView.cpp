
// DockingDemoView.cpp : CDockingDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "DockingDemo.h"

#include "DockingDemoDoc.h"
#include "DockingDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDockingDemoView

IMPLEMENT_DYNCREATE(CDockingDemoView, CView)

BEGIN_MESSAGE_MAP(CDockingDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDockingDemoView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDockingDemoView ����/�Ҹ�

CDockingDemoView::CDockingDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CDockingDemoView::~CDockingDemoView()
{
}

BOOL CDockingDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CDockingDemoView �׸���

void CDockingDemoView::OnDraw(CDC* /*pDC*/)
{
	CDockingDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CDockingDemoView �μ�


void CDockingDemoView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CDockingDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CDockingDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CDockingDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CDockingDemoView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDockingDemoView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CDockingDemoView ����

#ifdef _DEBUG
void CDockingDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CDockingDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDockingDemoDoc* CDockingDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDockingDemoDoc)));
	return (CDockingDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CDockingDemoView �޽��� ó����
