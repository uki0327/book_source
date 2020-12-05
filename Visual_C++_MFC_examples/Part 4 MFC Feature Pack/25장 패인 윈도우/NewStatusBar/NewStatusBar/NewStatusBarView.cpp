
// NewStatusBarView.cpp : CNewStatusBarView Ŭ������ ����
//

#include "stdafx.h"
#include "NewStatusBar.h"

#include "NewStatusBarDoc.h"
#include "NewStatusBarView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNewStatusBarView

IMPLEMENT_DYNCREATE(CNewStatusBarView, CView)

BEGIN_MESSAGE_MAP(CNewStatusBarView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CNewStatusBarView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CNewStatusBarView ����/�Ҹ�

CNewStatusBarView::CNewStatusBarView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CNewStatusBarView::~CNewStatusBarView()
{
}

BOOL CNewStatusBarView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CNewStatusBarView �׸���

void CNewStatusBarView::OnDraw(CDC* /*pDC*/)
{
	CNewStatusBarDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CNewStatusBarView �μ�


void CNewStatusBarView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CNewStatusBarView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CNewStatusBarView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CNewStatusBarView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CNewStatusBarView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CNewStatusBarView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CNewStatusBarView ����

#ifdef _DEBUG
void CNewStatusBarView::AssertValid() const
{
	CView::AssertValid();
}

void CNewStatusBarView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNewStatusBarDoc* CNewStatusBarView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNewStatusBarDoc)));
	return (CNewStatusBarDoc*)m_pDocument;
}
#endif //_DEBUG


// CNewStatusBarView �޽��� ó����
