
// ImageScrollDemoView.cpp : CImageScrollDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "ImageScrollDemo.h"

#include "ImageScrollDemoDoc.h"
#include "ImageScrollDemoView.h"

#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageScrollDemoView

IMPLEMENT_DYNCREATE(CImageScrollDemoView, CScrollView)

BEGIN_MESSAGE_MAP(CImageScrollDemoView, CScrollView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CScrollView::OnFilePrintPreview)
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

// CImageScrollDemoView ����/�Ҹ�

CImageScrollDemoView::CImageScrollDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CImageScrollDemoView::~CImageScrollDemoView()
{
}

BOOL CImageScrollDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CScrollView::PreCreateWindow(cs);
}

// CImageScrollDemoView �׸���

void CImageScrollDemoView::OnDraw(CDC* /*pDC*/)
{
	CImageScrollDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}

void CImageScrollDemoView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	sizeTotal.cx = 1600;
	sizeTotal.cy = 1200;

	SetScrollSizes(MM_TEXT, sizeTotal);
}


// CImageScrollDemoView �μ�

BOOL CImageScrollDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CImageScrollDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CImageScrollDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CImageScrollDemoView ����

#ifdef _DEBUG
void CImageScrollDemoView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CImageScrollDemoView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CImageScrollDemoDoc* CImageScrollDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageScrollDemoDoc)));
	return (CImageScrollDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CImageScrollDemoView �޽��� ó����

void CImageScrollDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	int nVertScroll = GetScrollPos(SB_VERT);
	int nHorzScroll = GetScrollPos(SB_HORZ);

	CImage Image;
	Image.LoadFromResource(AfxGetInstanceHandle(), IDB_Image);
	Image.BitBlt(dc.m_hDC, -nHorzScroll, -nVertScroll);
}

BOOL CImageScrollDemoView::OnEraseBkgnd(CDC* pDC)
{
	return TRUE;
//	return CScrollView::OnEraseBkgnd(pDC);
}
