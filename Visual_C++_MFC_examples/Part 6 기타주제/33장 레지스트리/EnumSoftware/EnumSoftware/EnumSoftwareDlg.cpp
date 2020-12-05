
// EnumSoftwareDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "EnumSoftware.h"
#include "EnumSoftwareDlg.h"

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


// CEnumSoftwareDlg ��ȭ ����




CEnumSoftwareDlg::CEnumSoftwareDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEnumSoftwareDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEnumSoftwareDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_List, m_List);
}

BEGIN_MESSAGE_MAP(CEnumSoftwareDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_Button_InstalledSoftware, &CEnumSoftwareDlg::OnBnClickedButtonInstalledsoftware)
END_MESSAGE_MAP()


// CEnumSoftwareDlg �޽��� ó����

BOOL CEnumSoftwareDlg::OnInitDialog()
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

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CEnumSoftwareDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CEnumSoftwareDlg::OnPaint()
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
HCURSOR CEnumSoftwareDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CEnumSoftwareDlg::OnBnClickedButtonInstalledsoftware()
{
	if(m_List.GetCount() > 0)		m_List.ResetContent();

	CString csSWKey =
		_T("Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
	CString	csSubKey = _T("");

	DWORD	dwIndex = 0;
	DWORD	dwType = 0;
	TCHAR	szKeyName[MAX_PATH] = {0};
	TCHAR	szValue[MAX_PATH] = {0};
	DWORD	dwBufferSize = 0;
	HKEY	hKey = NULL, hKeySub = NULL;

	DWORD dwResult = ::RegOpenKeyEx(HKEY_LOCAL_MACHINE,
									(LPCTSTR)csSWKey, 0, KEY_READ, &hKey);
	if(dwResult != ERROR_SUCCESS)
	{
		AfxMessageBox(_T("ERROR: Failed to open registry key!"));
		return;
	}

	dwBufferSize = MAX_PATH;
	while(::RegEnumKey(hKey,
					dwIndex,
					szKeyName,
					dwBufferSize) != ERROR_NO_MORE_ITEMS)
	{
		csSubKey = csSWKey + TEXT("\\") + szKeyName;
		dwResult = ::RegOpenKeyEx(HKEY_LOCAL_MACHINE,
									(LPCTSTR)csSubKey, 0, KEY_READ, &hKeySub);
		if(dwResult != ERROR_SUCCESS)
		{
			dwIndex++;
			::ZeroMemory(szKeyName, MAX_PATH);
			dwBufferSize = MAX_PATH;
			continue;
		}

		dwType = 0;
		::ZeroMemory(szValue, MAX_PATH);
		dwBufferSize = MAX_PATH;
		if(::RegQueryValueEx(hKeySub, _T("DisplayName"), NULL, &dwType,
							(BYTE*)szValue, &dwBufferSize) == ERROR_SUCCESS)
		{
			m_List.AddString(szValue);
		}

		::RegCloseKey(hKeySub);
		dwIndex++;
		::ZeroMemory(szKeyName, MAX_PATH);
		dwBufferSize = MAX_PATH;
	}

	::RegCloseKey(hKey);
}
