
// SdiSeqView.cpp : CSdiSeqView Ŭ������ ����
//

#include "stdafx.h"
#include "SdiSeq.h"

#include "SdiSeqDoc.h"
#include "SdiSeqView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSdiSeqView

IMPLEMENT_DYNCREATE(CSdiSeqView, CView)

BEGIN_MESSAGE_MAP(CSdiSeqView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_CLOSE()
	ON_WM_DESTROY()
	ON_WM_SHOWWINDOW()
END_MESSAGE_MAP()

// CSdiSeqView ����/�Ҹ�

CSdiSeqView::CSdiSeqView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSdiSeqView::~CSdiSeqView()
{
}

BOOL CSdiSeqView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSdiSeqView �׸���

void CSdiSeqView::OnDraw(CDC* /*pDC*/)
{
	CSdiSeqDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CSdiSeqView �μ�

BOOL CSdiSeqView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSdiSeqView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSdiSeqView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSdiSeqView ����

#ifdef _DEBUG
void CSdiSeqView::AssertValid() const
{
	CView::AssertValid();
}

void CSdiSeqView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSdiSeqDoc* CSdiSeqView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSdiSeqDoc)));
	return (CSdiSeqDoc*)m_pDocument;
}
#endif //_DEBUG


// CSdiSeqView �޽��� ó����

BOOL CSdiSeqView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class

	return CView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

BOOL CSdiSeqView::DestroyWindow()
{
	// TODO: Add your specialized code here and/or call the base class

	return CView::DestroyWindow();
}

void CSdiSeqView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	// TODO: Add your specialized code here and/or call the base class
}

void CSdiSeqView::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class

	CView::PostNcDestroy();
}

int CSdiSeqView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here

	return 0;
}

void CSdiSeqView::OnClose()
{
	// TODO: Add your message handler code here and/or call default

	CView::OnClose();
}

void CSdiSeqView::OnDestroy()
{
	CView::OnDestroy();

	// TODO: Add your message handler code here
}

void CSdiSeqView::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CView::OnShowWindow(bShow, nStatus);

	// TODO: Add your message handler code here
}
