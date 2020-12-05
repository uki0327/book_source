
// StaticDemoView.cpp : CStaticDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "StaticDemo.h"

#include "StaticDemoDoc.h"
#include "StaticDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CStaticDemoView

IMPLEMENT_DYNCREATE(CStaticDemoView, CView)

BEGIN_MESSAGE_MAP(CStaticDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CStaticDemoView ����/�Ҹ�

CStaticDemoView::CStaticDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CStaticDemoView::~CStaticDemoView()
{
}

BOOL CStaticDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CStaticDemoView �׸���

void CStaticDemoView::OnDraw(CDC* /*pDC*/)
{
	CStaticDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CStaticDemoView �μ�

BOOL CStaticDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CStaticDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CStaticDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CStaticDemoView ����

#ifdef _DEBUG
void CStaticDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CStaticDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CStaticDemoDoc* CStaticDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStaticDemoDoc)));
	return (CStaticDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CStaticDemoView �޽��� ó����

int CStaticDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_wndStatic.Create(_T("CStatic"),
						WS_CHILD | WS_VISIBLE | SS_ICON | SS_CENTERIMAGE,
						CRect(20, 20, 120, 120), this, 1234);

	CWinApp* pApp = AfxGetApp();
	m_wndStatic.SetIcon(pApp->LoadIcon(IDR_MAINFRAME));

	return 0;
}
