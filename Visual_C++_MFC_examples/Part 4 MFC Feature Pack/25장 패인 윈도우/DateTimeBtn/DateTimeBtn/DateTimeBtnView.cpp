
// DateTimeBtnView.cpp : CDateTimeBtnView Ŭ������ ����
//

#include "stdafx.h"
#include "DateTimeBtn.h"

#include "DateTimeBtnDoc.h"
#include "DateTimeBtnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDateTimeBtnView

IMPLEMENT_DYNCREATE(CDateTimeBtnView, CView)

BEGIN_MESSAGE_MAP(CDateTimeBtnView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDateTimeBtnView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDateTimeBtnView ����/�Ҹ�

CDateTimeBtnView::CDateTimeBtnView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CDateTimeBtnView::~CDateTimeBtnView()
{
}

BOOL CDateTimeBtnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CDateTimeBtnView �׸���

void CDateTimeBtnView::OnDraw(CDC* /*pDC*/)
{
	CDateTimeBtnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CDateTimeBtnView �μ�


void CDateTimeBtnView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CDateTimeBtnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CDateTimeBtnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CDateTimeBtnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CDateTimeBtnView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDateTimeBtnView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CDateTimeBtnView ����

#ifdef _DEBUG
void CDateTimeBtnView::AssertValid() const
{
	CView::AssertValid();
}

void CDateTimeBtnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDateTimeBtnDoc* CDateTimeBtnView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDateTimeBtnDoc)));
	return (CDateTimeBtnDoc*)m_pDocument;
}
#endif //_DEBUG


// CDateTimeBtnView �޽��� ó����
