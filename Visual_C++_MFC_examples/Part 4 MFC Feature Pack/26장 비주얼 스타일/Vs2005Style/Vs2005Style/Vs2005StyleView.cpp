
// Vs2005StyleView.cpp : CVs2005StyleView Ŭ������ ����
//

#include "stdafx.h"
#include "Vs2005Style.h"

#include "Vs2005StyleDoc.h"
#include "Vs2005StyleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVs2005StyleView

IMPLEMENT_DYNCREATE(CVs2005StyleView, CView)

BEGIN_MESSAGE_MAP(CVs2005StyleView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CVs2005StyleView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CVs2005StyleView ����/�Ҹ�

CVs2005StyleView::CVs2005StyleView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CVs2005StyleView::~CVs2005StyleView()
{
}

BOOL CVs2005StyleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CVs2005StyleView �׸���

void CVs2005StyleView::OnDraw(CDC* /*pDC*/)
{
	CVs2005StyleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CVs2005StyleView �μ�


void CVs2005StyleView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CVs2005StyleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CVs2005StyleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CVs2005StyleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CVs2005StyleView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CVs2005StyleView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CVs2005StyleView ����

#ifdef _DEBUG
void CVs2005StyleView::AssertValid() const
{
	CView::AssertValid();
}

void CVs2005StyleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVs2005StyleDoc* CVs2005StyleView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVs2005StyleDoc)));
	return (CVs2005StyleDoc*)m_pDocument;
}
#endif //_DEBUG


// CVs2005StyleView �޽��� ó����
