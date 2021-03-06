
// ImageScrollDemoView.cpp : CImageScrollDemoView 클래스의 구현
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CScrollView::OnFilePrintPreview)
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

// CImageScrollDemoView 생성/소멸

CImageScrollDemoView::CImageScrollDemoView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CImageScrollDemoView::~CImageScrollDemoView()
{
}

BOOL CImageScrollDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CScrollView::PreCreateWindow(cs);
}

// CImageScrollDemoView 그리기

void CImageScrollDemoView::OnDraw(CDC* /*pDC*/)
{
	CImageScrollDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}

void CImageScrollDemoView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	sizeTotal.cx = 1600;
	sizeTotal.cy = 1200;

	SetScrollSizes(MM_TEXT, sizeTotal);
}


// CImageScrollDemoView 인쇄

BOOL CImageScrollDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CImageScrollDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CImageScrollDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CImageScrollDemoView 진단

#ifdef _DEBUG
void CImageScrollDemoView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CImageScrollDemoView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CImageScrollDemoDoc* CImageScrollDemoView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageScrollDemoDoc)));
	return (CImageScrollDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CImageScrollDemoView 메시지 처리기

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
