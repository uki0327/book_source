
// GdiPlusDemoView.cpp : CGdiPlusDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiPlusDemo.h"

#include "GdiPlusDemoDoc.h"
#include "GdiPlusDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiPlusDemoView

IMPLEMENT_DYNCREATE(CGdiPlusDemoView, CView)

BEGIN_MESSAGE_MAP(CGdiPlusDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CGdiPlusDemoView ����/�Ҹ�

CGdiPlusDemoView::CGdiPlusDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiPlusDemoView::~CGdiPlusDemoView()
{
}

BOOL CGdiPlusDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiPlusDemoView �׸���

void CGdiPlusDemoView::OnDraw(CDC* /*pDC*/)
{
	CGdiPlusDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiPlusDemoView �μ�

BOOL CGdiPlusDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiPlusDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiPlusDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiPlusDemoView ����

#ifdef _DEBUG
void CGdiPlusDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiPlusDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiPlusDemoDoc* CGdiPlusDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiPlusDemoDoc)));
	return (CGdiPlusDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiPlusDemoView �޽��� ó����
