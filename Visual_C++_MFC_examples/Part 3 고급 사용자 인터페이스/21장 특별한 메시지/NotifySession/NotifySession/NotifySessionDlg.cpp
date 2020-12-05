
// NotifySessionDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "NotifySession.h"
#include "NotifySessionDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CNotifySessionDlg ��ȭ ����




CNotifySessionDlg::CNotifySessionDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNotifySessionDlg::IDD, pParent)
	, m_dwSessionID(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CNotifySessionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST, m_List);
	DDX_Text(pDX, IDC_Edit_SessionID, m_dwSessionID);
}

BEGIN_MESSAGE_MAP(CNotifySessionDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_DESTROY()
	ON_WM_WTSSESSION_CHANGE()
	ON_BN_CLICKED(IDC_Button_Logoff, &CNotifySessionDlg::OnBnClickedButtonLogoff)
END_MESSAGE_MAP()


// CNotifySessionDlg �޽��� ó����

BOOL CNotifySessionDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// �� ��ȭ ������ �������� �����մϴ�. ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	if(!::WTSRegisterSessionNotification(m_hWnd, NOTIFY_FOR_ALL_SESSIONS))
	{
		AfxMessageBox(_T("ERROR: Failed to register session notification!"));
		return FALSE;
	}

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CNotifySessionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�. ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CNotifySessionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CNotifySessionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CNotifySessionDlg::OnDestroy()
{
	::WTSUnRegisterSessionNotification(m_hWnd);

	CDialog::OnDestroy();
}

void CNotifySessionDlg::OnSessionChange(UINT nSessionState, UINT nId)
{
	CString strTmp = _T("");
	DWORD dwSize = 256;

	TCHAR* pszBuffer = NULL;
//	DWORD dwSessionID = ::WTSGetActiveConsoleSessionId();
	if(::WTSQuerySessionInformation(
					WTS_CURRENT_SERVER_HANDLE,
					nId, WTSUserName, &pszBuffer, &dwSize))
	{
		strTmp.Format(_T("Session ID : %d(%s)"), nId, pszBuffer);
		::WTSFreeMemory(pszBuffer);
	}
	else	strTmp.Format(_T("Session ID : %d(Unknown)"), nId);

	switch(nSessionState)
	{
	case WTS_SESSION_LOGON:
		m_List.AddString(_T("WTS_SESSION_LOGON"));
		break;

	case WTS_SESSION_LOGOFF:
		m_List.AddString(_T("WTS_SESSION_LOGOFF"));
		break;

	case WTS_SESSION_LOCK:
		m_List.AddString(_T("WTS_SESSION_LOCK"));
		break;

	case WTS_SESSION_UNLOCK:
		m_List.AddString(_T("WTS_SESSION_UNLOCK"));
		break;

	case WTS_CONSOLE_CONNECT:
		m_List.AddString(_T("WTS_CONSOLE_CONNECT"));
		break;

	case WTS_CONSOLE_DISCONNECT:
		m_List.AddString(_T("WTS_CONSOLE_DISCONNECT"));
		break;
	}

	m_List.AddString(strTmp);
	CDialog::OnSessionChange(nSessionState, nId);
}

void CNotifySessionDlg::OnBnClickedButtonLogoff()
{
	UpdateData();
	::WTSLogoffSession(WTS_CURRENT_SERVER_HANDLE, m_dwSessionID, TRUE);
}
