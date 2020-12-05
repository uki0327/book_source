
// StaticSplitDemoView.cpp : CStaticSplitDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "StaticSplitDemo.h"

#include "StaticSplitDemoDoc.h"
#include "StaticSplitDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CStaticSplitDemoView

IMPLEMENT_DYNCREATE(CStaticSplitDemoView, CView)

BEGIN_MESSAGE_MAP(CStaticSplitDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CStaticSplitDemoView ����/�Ҹ�

CStaticSplitDemoView::CStaticSplitDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CStaticSplitDemoView::~CStaticSplitDemoView()
{
}

BOOL CStaticSplitDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CStaticSplitDemoView �׸���

void CStaticSplitDemoView::OnDraw(CDC* /*pDC*/)
{
	CStaticSplitDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CStaticSplitDemoView �μ�

BOOL CStaticSplitDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CStaticSplitDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CStaticSplitDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CStaticSplitDemoView ����

#ifdef _DEBUG
void CStaticSplitDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CStaticSplitDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CStaticSplitDemoDoc* CStaticSplitDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStaticSplitDemoDoc)));
	return (CStaticSplitDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CStaticSplitDemoView �޽��� ó����
