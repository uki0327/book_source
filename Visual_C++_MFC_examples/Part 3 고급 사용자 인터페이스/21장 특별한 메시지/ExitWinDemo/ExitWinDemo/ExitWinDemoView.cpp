
// ExitWinDemoView.cpp : CExitWinDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "ExitWinDemo.h"

#include "ExitWinDemoDoc.h"
#include "ExitWinDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExitWinDemoView

IMPLEMENT_DYNCREATE(CExitWinDemoView, CView)

BEGIN_MESSAGE_MAP(CExitWinDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CExitWinDemoView ����/�Ҹ�

CExitWinDemoView::CExitWinDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CExitWinDemoView::~CExitWinDemoView()
{
}

BOOL CExitWinDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CExitWinDemoView �׸���

void CExitWinDemoView::OnDraw(CDC* /*pDC*/)
{
	CExitWinDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CExitWinDemoView �μ�

BOOL CExitWinDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CExitWinDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CExitWinDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CExitWinDemoView ����

#ifdef _DEBUG
void CExitWinDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CExitWinDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExitWinDemoDoc* CExitWinDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExitWinDemoDoc)));
	return (CExitWinDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CExitWinDemoView �޽��� ó����

