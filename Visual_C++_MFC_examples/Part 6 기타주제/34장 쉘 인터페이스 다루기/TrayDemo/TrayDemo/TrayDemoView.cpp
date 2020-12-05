
// TrayDemoView.cpp : CTrayDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "TrayDemo.h"

#include "TrayDemoDoc.h"
#include "TrayDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTrayDemoView

IMPLEMENT_DYNCREATE(CTrayDemoView, CView)

BEGIN_MESSAGE_MAP(CTrayDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTrayDemoView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTrayDemoView ����/�Ҹ�

CTrayDemoView::CTrayDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTrayDemoView::~CTrayDemoView()
{
}

BOOL CTrayDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTrayDemoView �׸���

void CTrayDemoView::OnDraw(CDC* /*pDC*/)
{
	CTrayDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTrayDemoView �μ�


void CTrayDemoView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CTrayDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTrayDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTrayDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CTrayDemoView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTrayDemoView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CTrayDemoView ����

#ifdef _DEBUG
void CTrayDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CTrayDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTrayDemoDoc* CTrayDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTrayDemoDoc)));
	return (CTrayDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CTrayDemoView �޽��� ó����

void CTrayDemoView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: Add your specialized code here and/or call the base class
}
