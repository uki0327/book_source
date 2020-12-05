
// MdiDemoView.cpp : CMdiDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "MdiDemo.h"

#include "MdiDemoDoc.h"
#include "MdiDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMdiDemoView

IMPLEMENT_DYNCREATE(CMdiDemoView, CView)

BEGIN_MESSAGE_MAP(CMdiDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CMdiDemoView ����/�Ҹ�

CMdiDemoView::CMdiDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CMdiDemoView::~CMdiDemoView()
{
}

BOOL CMdiDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMdiDemoView �׸���

void CMdiDemoView::OnDraw(CDC* /*pDC*/)
{
	CMdiDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMdiDemoView �μ�

BOOL CMdiDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMdiDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMdiDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMdiDemoView ����

#ifdef _DEBUG
void CMdiDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CMdiDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMdiDemoDoc* CMdiDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMdiDemoDoc)));
	return (CMdiDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CMdiDemoView �޽��� ó����

int CMdiDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	CFrameWnd* pFrame = GetParentFrame();

	return 0;
}
