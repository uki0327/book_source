
// PopupButtonView.cpp : CPopupButtonView Ŭ������ ����
//

#include "stdafx.h"
#include "PopupButton.h"

#include "PopupButtonDoc.h"
#include "PopupButtonView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPopupButtonView

IMPLEMENT_DYNCREATE(CPopupButtonView, CView)

BEGIN_MESSAGE_MAP(CPopupButtonView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CPopupButtonView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPopupButtonView ����/�Ҹ�

CPopupButtonView::CPopupButtonView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPopupButtonView::~CPopupButtonView()
{
}

BOOL CPopupButtonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPopupButtonView �׸���

void CPopupButtonView::OnDraw(CDC* /*pDC*/)
{
	CPopupButtonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CPopupButtonView �μ�


void CPopupButtonView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CPopupButtonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CPopupButtonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPopupButtonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CPopupButtonView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CPopupButtonView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CPopupButtonView ����

#ifdef _DEBUG
void CPopupButtonView::AssertValid() const
{
	CView::AssertValid();
}

void CPopupButtonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPopupButtonDoc* CPopupButtonView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPopupButtonDoc)));
	return (CPopupButtonDoc*)m_pDocument;
}
#endif //_DEBUG


// CPopupButtonView �޽��� ó����
