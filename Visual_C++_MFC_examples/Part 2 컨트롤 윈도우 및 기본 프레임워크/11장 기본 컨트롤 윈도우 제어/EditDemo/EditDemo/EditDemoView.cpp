
// EditDemoView.cpp : CEditDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "EditDemo.h"

#include "EditDemoDoc.h"
#include "EditDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEditDemoView

IMPLEMENT_DYNCREATE(CEditDemoView, CView)

BEGIN_MESSAGE_MAP(CEditDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CEditDemoView ����/�Ҹ�

CEditDemoView::CEditDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CEditDemoView::~CEditDemoView()
{
}

BOOL CEditDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CEditDemoView �׸���

void CEditDemoView::OnDraw(CDC* /*pDC*/)
{
	CEditDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CEditDemoView �μ�

BOOL CEditDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CEditDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CEditDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CEditDemoView ����

#ifdef _DEBUG
void CEditDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CEditDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEditDemoDoc* CEditDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEditDemoDoc)));
	return (CEditDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CEditDemoView �޽��� ó����

int CEditDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_wndEdit.Create(WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_BORDER |
					ES_AUTOHSCROLL,
					CRect(20, 20, 220, 36), this, 1234);

	return 0;
}
