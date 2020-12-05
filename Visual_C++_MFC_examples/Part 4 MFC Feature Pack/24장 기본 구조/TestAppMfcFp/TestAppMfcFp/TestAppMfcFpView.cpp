
// TestAppMfcFpView.cpp : CTestAppMfcFpView Ŭ������ ����
//

#include "stdafx.h"
#include "TestAppMfcFp.h"

#include "TestAppMfcFpDoc.h"
#include "TestAppMfcFpView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestAppMfcFpView

IMPLEMENT_DYNCREATE(CTestAppMfcFpView, CView)

BEGIN_MESSAGE_MAP(CTestAppMfcFpView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CTestAppMfcFpView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTestAppMfcFpView ����/�Ҹ�

CTestAppMfcFpView::CTestAppMfcFpView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTestAppMfcFpView::~CTestAppMfcFpView()
{
}

BOOL CTestAppMfcFpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTestAppMfcFpView �׸���

void CTestAppMfcFpView::OnDraw(CDC* /*pDC*/)
{
	CTestAppMfcFpDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTestAppMfcFpView �μ�


void CTestAppMfcFpView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CTestAppMfcFpView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTestAppMfcFpView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTestAppMfcFpView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CTestAppMfcFpView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTestAppMfcFpView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CTestAppMfcFpView ����

#ifdef _DEBUG
void CTestAppMfcFpView::AssertValid() const
{
	CView::AssertValid();
}

void CTestAppMfcFpView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestAppMfcFpDoc* CTestAppMfcFpView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestAppMfcFpDoc)));
	return (CTestAppMfcFpDoc*)m_pDocument;
}
#endif //_DEBUG


// CTestAppMfcFpView �޽��� ó����
