
// MainFrm.cpp : CMainFrame 클래스의 구현
//

#include "stdafx.h"
#include "StaticSplitDemo.h"

#include "MainFrm.h"

#include "LeftListView.h"
#include "TopHtmlView.h"
#include "BottomEditView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // 상태 줄 표시기
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame 생성/소멸

CMainFrame::CMainFrame()
{
	// TODO: 여기에 멤버 초기화 코드를 추가합니다.
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("도구 모음을 만들지 못했습니다.\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("상태 표시줄을 만들지 못했습니다.\n");
		return -1;      // 만들지 못했습니다.
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO: 도구 모음을 도킹할 수 없게 하려면 이 세 줄을 삭제하십시오.
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return TRUE;
}

// CMainFrame 진단

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame 메시지 처리기

BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	//1. 우선 첫번째로 1행 2열로 윈도우를 정적분할 한다.
	if(!m_wndSplitHor.CreateStatic(this,1, 2))
		return FALSE;

	//2. 첫번째열(0,0)에 해당하는 뷰클래스를 붙인다.
	if(!m_wndSplitHor.CreateView(0, 0,
		RUNTIME_CLASS(CLeftListView), CSize(200, 200), pContext))
		return FALSE;

	//3. 두번째 뷰를 다시 2행 1열로 정적분할 한다.
	if(!m_wndSplitVer.CreateStatic(&m_wndSplitHor, 2, 1,
		WS_CHILD | WS_VISIBLE,
		m_wndSplitHor.IdFromRowCol(0, 1)))
		return FALSE;

	//4. 두번째로 정적 분할된 윈도우에 첫번째 뷰를 붙인다.
	if(!m_wndSplitVer.CreateView(0, 0,
		RUNTIME_CLASS(CTopHtmlView), CSize(100, 300), pContext))
		return FALSE;

	//5. 두번째로 정적 분할된 윈도우에 두번째 뷰를 붙인다.
	if(!m_wndSplitVer.CreateView(1, 0,
		RUNTIME_CLASS(CBottomEditView), CSize(200, 100), pContext))
		return FALSE;

	//6. 왼쪽의 뷰에 포커스를 준다.
	SetActiveView((CView*)m_wndSplitHor.GetPane(0,0));

	return TRUE;
//	return CFrameWnd::OnCreateClient(lpcs, pContext);
}
