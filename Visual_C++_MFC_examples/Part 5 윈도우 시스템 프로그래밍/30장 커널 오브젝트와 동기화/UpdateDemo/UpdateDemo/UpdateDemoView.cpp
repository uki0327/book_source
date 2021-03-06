
// UpdateDemoView.cpp : CUpdateDemoView 클래스의 구현
//

#include "stdafx.h"
#include "UpdateDemo.h"

#include "UpdateDemoDoc.h"
#include "UpdateDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUpdateDemoView

IMPLEMENT_DYNCREATE(CUpdateDemoView, CView)

BEGIN_MESSAGE_MAP(CUpdateDemoView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CUpdateDemoView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CUpdateDemoView 생성/소멸

CUpdateDemoView::CUpdateDemoView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CUpdateDemoView::~CUpdateDemoView()
{
}

BOOL CUpdateDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CUpdateDemoView 그리기

void CUpdateDemoView::OnDraw(CDC* /*pDC*/)
{
	CUpdateDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CUpdateDemoView 인쇄


void CUpdateDemoView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CUpdateDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CUpdateDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CUpdateDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CUpdateDemoView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CUpdateDemoView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CUpdateDemoView 진단

#ifdef _DEBUG
void CUpdateDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CUpdateDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUpdateDemoDoc* CUpdateDemoView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUpdateDemoDoc)));
	return (CUpdateDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CUpdateDemoView 메시지 처리기
