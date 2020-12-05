
// MainFrm.cpp : CMainFrame Ŭ������ ����
//

#include "stdafx.h"
#include "CommandDemo.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_Menu_Start, &CMainFrame::OnMenuStart)
	ON_COMMAND(ID_Menu_Stop, &CMainFrame::OnMenuStop)
	ON_UPDATE_COMMAND_UI(ID_Menu_Start, &CMainFrame::OnUpdateMenuStart)
	ON_UPDATE_COMMAND_UI(ID_Menu_Stop, &CMainFrame::OnUpdateMenuStop)
	ON_COMMAND(ID_Menu_Pause, &CMainFrame::OnMenuPause)
	ON_UPDATE_COMMAND_UI(ID_Menu_Pause, &CMainFrame::OnUpdateMenuPause)
	ON_COMMAND(ID_Menu_Sub1, &CMainFrame::OnMenuSub1)
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
	m_bRunning = FALSE;
	m_bPause = FALSE;
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

void CMainFrame::OnMenuStart()
{
	//���������� �ǹ��ϴ� �÷��׸� TRUE ��Ʈ��.
	m_bRunning = TRUE;
	AfxMessageBox(_T("���� �޴��� �����Ͽ����ϴ�. - CMainFrame"));
}

void CMainFrame::OnMenuStop()
{
	//������ ����Ǿ��ٴ� �ǹ̷� �÷��׸� FALSE�� ��Ʈ��.
	m_bRunning = FALSE;
	AfxMessageBox(_T("���� �޴��� �����Ͽ����ϴ�. - CMainFrame"));
}

void CMainFrame::OnUpdateMenuStart(CCmdUI *pCmdUI)
{
	//�̹� ������(TRUE)�̸� !�������� FALSE�� �ǹǷ� "����"�޴��� Disable��.
	pCmdUI->Enable(!m_bRunning);
}

void CMainFrame::OnUpdateMenuStop(CCmdUI *pCmdUI)
{
	//�̹� �������̹Ƿ� "����"�޴��� ������ �� �ֵ��� Ȱ��ȭ��.
	pCmdUI->Enable(m_bRunning);
}

void CMainFrame::OnMenuPause()
{
	if(m_bPause)	AfxMessageBox(_T("�ٽ� �����մϴ�."));
	else			AfxMessageBox(_T("�Ͻ� �����մϴ�."));

	m_bPause = !m_bPause;
}

void CMainFrame::OnUpdateMenuPause(CCmdUI *pCmdUI)
{
//	if(m_bPause)	pCmdUI->SetText(_T("�ٽ� ����"));
//	else			pCmdUI->SetText(_T("�Ͻ� ����"));
	if(m_bPause)	pCmdUI->SetCheck(TRUE);
	else			pCmdUI->SetCheck(FALSE);
}

void CMainFrame::OnMenuSub1()
{
	AfxMessageBox(_T("���� �޴��� �����Ͽ����ϴ�."));
}
