
// SwitchViewDemoView.cpp : CSwitchViewDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "SwitchViewDemo.h"

#include "SwitchViewDemoDoc.h"
#include "SwitchViewDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSwitchViewDemoView

IMPLEMENT_DYNCREATE(CSwitchViewDemoView, CView)

BEGIN_MESSAGE_MAP(CSwitchViewDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CSwitchViewDemoView ����/�Ҹ�

CSwitchViewDemoView::CSwitchViewDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSwitchViewDemoView::~CSwitchViewDemoView()
{
}

BOOL CSwitchViewDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSwitchViewDemoView �׸���

void CSwitchViewDemoView::OnDraw(CDC* /*pDC*/)
{
	CSwitchViewDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CSwitchViewDemoView �μ�

BOOL CSwitchViewDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSwitchViewDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSwitchViewDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSwitchViewDemoView ����

#ifdef _DEBUG
void CSwitchViewDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CSwitchViewDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSwitchViewDemoDoc* CSwitchViewDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSwitchViewDemoDoc)));
	return (CSwitchViewDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CSwitchViewDemoView �޽��� ó����
