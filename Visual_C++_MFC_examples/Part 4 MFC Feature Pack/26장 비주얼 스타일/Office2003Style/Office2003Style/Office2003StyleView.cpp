
// Office2003StyleView.cpp : COffice2003StyleView Ŭ������ ����
//

#include "stdafx.h"
#include "Office2003Style.h"

#include "Office2003StyleDoc.h"
#include "Office2003StyleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COffice2003StyleView

IMPLEMENT_DYNCREATE(COffice2003StyleView, CView)

BEGIN_MESSAGE_MAP(COffice2003StyleView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COffice2003StyleView::OnFilePrintPreview)
END_MESSAGE_MAP()

// COffice2003StyleView ����/�Ҹ�

COffice2003StyleView::COffice2003StyleView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

COffice2003StyleView::~COffice2003StyleView()
{
}

BOOL COffice2003StyleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// COffice2003StyleView �׸���

void COffice2003StyleView::OnDraw(CDC* /*pDC*/)
{
	COffice2003StyleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// COffice2003StyleView �μ�


void COffice2003StyleView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL COffice2003StyleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void COffice2003StyleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void COffice2003StyleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void COffice2003StyleView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COffice2003StyleView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// COffice2003StyleView ����

#ifdef _DEBUG
void COffice2003StyleView::AssertValid() const
{
	CView::AssertValid();
}

void COffice2003StyleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COffice2003StyleDoc* COffice2003StyleView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COffice2003StyleDoc)));
	return (COffice2003StyleDoc*)m_pDocument;
}
#endif //_DEBUG


// COffice2003StyleView �޽��� ó����
