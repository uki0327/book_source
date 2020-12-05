
// FrameRgnView.cpp : CFrameRgnView Ŭ������ ����
//

#include "stdafx.h"
#include "FrameRgn.h"

#include "FrameRgnDoc.h"
#include "FrameRgnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFrameRgnView

IMPLEMENT_DYNCREATE(CFrameRgnView, CView)

BEGIN_MESSAGE_MAP(CFrameRgnView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CFrameRgnView ����/�Ҹ�

CFrameRgnView::CFrameRgnView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CFrameRgnView::~CFrameRgnView()
{
}

BOOL CFrameRgnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CFrameRgnView �׸���

void CFrameRgnView::OnDraw(CDC* /*pDC*/)
{
	CFrameRgnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CFrameRgnView �μ�

BOOL CFrameRgnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CFrameRgnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CFrameRgnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CFrameRgnView ����

#ifdef _DEBUG
void CFrameRgnView::AssertValid() const
{
	CView::AssertValid();
}

void CFrameRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFrameRgnDoc* CFrameRgnView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFrameRgnDoc)));
	return (CFrameRgnDoc*)m_pDocument;
}
#endif //_DEBUG


// CFrameRgnView �޽��� ó����
