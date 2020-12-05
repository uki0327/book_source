
// MainFrm.cpp : CMainFrame Ŭ������ ����
//

#include "stdafx.h"
#include "SdiSeq.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_WM_CLOSE()
	ON_WM_ACTIVATE()
	ON_WM_ACTIVATEAPP()
	ON_WM_DESTROY()
	ON_WM_NCDESTROY()
	ON_WM_SHOWWINDOW()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ���� �� ǥ�ñ�
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/�Ҹ�

CMainFrame::CMainFrame()
{
	// TODO: ���⿡ ��� �ʱ�ȭ �ڵ带 �߰��մϴ�.
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
		TRACE0("���� ������ ������ ���߽��ϴ�.\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("���� ǥ������ ������ ���߽��ϴ�.\n");
		return -1;      // ������ ���߽��ϴ�.
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO: ���� ������ ��ŷ�� �� ���� �Ϸ��� �� �� ���� �����Ͻʽÿ�.
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	TRACE(TEXT("CMainFrame::OnCreate() - Return\n"));
	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return TRUE;
}

// CMainFrame ����

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


// CMainFrame �޽��� ó����

void CMainFrame::OnClose()
{
	// TODO: Add your message handler code here and/or call default

	CFrameWnd::OnClose();
	TRACE(TEXT("CMainFrame::OnClose() - Return\n"));
}

BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class
	BOOL bResult = CFrameWnd::OnCreateClient(lpcs, pContext);
	TRACE(TEXT("CMainFrame::OnCreateClient() - Return\n"));
	return bResult;
}

BOOL CMainFrame::LoadFrame(UINT nIDResource, DWORD dwDefaultStyle , CWnd* pParentWnd , CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class

	return CFrameWnd::LoadFrame(nIDResource, dwDefaultStyle, pParentWnd, pContext);
}

BOOL CMainFrame::DestroyWindow()
{
	// TODO: Add your specialized code here and/or call the base class

	return CFrameWnd::DestroyWindow();
}

void CMainFrame::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class

	CFrameWnd::PostNcDestroy();
}

void CMainFrame::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CFrameWnd::OnActivate(nState, pWndOther, bMinimized);

	// TODO: Add your message handler code here
}

void CMainFrame::OnActivateApp(BOOL bActive, DWORD dwThreadID)
{
	CFrameWnd::OnActivateApp(bActive, dwThreadID);

	// TODO: Add your message handler code here
}

void CMainFrame::OnDestroy()
{
	CFrameWnd::OnDestroy();

	// TODO: Add your message handler code here
	
}

void CMainFrame::OnNcDestroy()
{
	CFrameWnd::OnNcDestroy();

	// TODO: Add your message handler code here
	TRACE(TEXT("CMainFrame::OnNcDestroy() - Return\n"));
}

void CMainFrame::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CFrameWnd::OnShowWindow(bShow, nStatus);

	// TODO: Add your message handler code here
}


