
// MainFrm.cpp : CMainFrame Ŭ������ ����
//

#include "stdafx.h"
#include "SwitchViewDemo.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_Menu_HtmlView, &CMainFrame::OnMenuHtmlview)
	ON_COMMAND(ID_Menu_EditView, &CMainFrame::OnMenuEditview)
	ON_COMMAND(ID_Menu_ListView, &CMainFrame::OnMenuListview)
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

BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	m_pwndHtmlView	= new CMyHtmlView;
	m_pwndEditView	= new CMyEditView;
	m_pwndListView	= new CMyListView;

	m_pwndHtmlView->Create(NULL, NULL, WS_CHILD, CFrameWnd::rectDefault,
												this, VIEWID_HTML, pContext);
	m_pwndEditView->Create(NULL, NULL, WS_CHILD, CFrameWnd::rectDefault,
												this, VIEWID_EDIT, pContext);
	m_pwndListView->Create(NULL, NULL, WS_CHILD, CFrameWnd::rectDefault,
												this, VIEWID_LIST, pContext);

	return CFrameWnd::OnCreateClient(lpcs, pContext);
}

void CMainFrame::SwitchView(int nID)
{
	CView* pOldView = GetActiveView();
	CView* pNewView = NULL;

	switch (nID)
	{
	case VIEWID_HTML:
		pNewView = (CView*)m_pwndHtmlView;
		break;

	case VIEWID_EDIT:
		pNewView = (CView*)m_pwndEditView;
		break;

	case VIEWID_LIST:
		pNewView = (CView*)m_pwndListView;
		break;
	}

	if(pNewView)
	{
		if(pOldView == pNewView)			return;

		pOldView->ShowWindow(SW_HIDE);
		pOldView->SetDlgCtrlID(nID);

		pNewView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		pNewView->ShowWindow(SW_SHOW);
		SetActiveView(pNewView);
		RecalcLayout();
	}
}

void CMainFrame::OnMenuHtmlview()
{
	SwitchView(VIEWID_HTML);
}

void CMainFrame::OnMenuEditview()
{
	SwitchView(VIEWID_EDIT);
}

void CMainFrame::OnMenuListview()
{
	SwitchView(VIEWID_LIST);
}
