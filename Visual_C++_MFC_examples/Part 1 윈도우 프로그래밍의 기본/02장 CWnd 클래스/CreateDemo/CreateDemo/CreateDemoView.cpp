
// CreateDemoView.cpp : CCreateDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "CreateDemo.h"

#include "CreateDemoDoc.h"
#include "CreateDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCreateDemoView

IMPLEMENT_DYNCREATE(CCreateDemoView, CView)

BEGIN_MESSAGE_MAP(CCreateDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CCreateDemoView ����/�Ҹ�

CCreateDemoView::CCreateDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CCreateDemoView::~CCreateDemoView()
{
}

BOOL CCreateDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CCreateDemoView �׸���

void CCreateDemoView::OnDraw(CDC* /*pDC*/)
{
	CCreateDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CCreateDemoView �μ�

BOOL CCreateDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CCreateDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CCreateDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CCreateDemoView ����

#ifdef _DEBUG
void CCreateDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CCreateDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCreateDemoDoc* CCreateDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCreateDemoDoc)));
	return (CCreateDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CCreateDemoView �޽��� ó����

int CCreateDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_wndChild.Create(TEXT("STATIC"), TEXT("DEMO"),
					WS_CHILD | WS_VISIBLE | WS_BORDER,
					CRect(30, 30, 180, 180), this, 1234);

	return 0;
}
