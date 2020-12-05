
// RegistryApiDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "RegistryApiDemo.h"
#include "RegistryApiDemoDlg.h"

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


// CRegistryApiDemoDlg ��ȭ ����




CRegistryApiDemoDlg::CRegistryApiDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRegistryApiDemoDlg::IDD, pParent)
	, m_strName(_T("Ho-sung Choi"))
	, m_dwNumber(7)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CRegistryApiDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Edit_Name, m_strName);
	DDX_Text(pDX, IDC_Edit_Number, m_dwNumber);
}

BEGIN_MESSAGE_MAP(CRegistryApiDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_Button_CreateKey, &CRegistryApiDemoDlg::OnBnClickedButtonCreatekey)
	ON_BN_CLICKED(IDC_Button_SetName, &CRegistryApiDemoDlg::OnBnClickedButtonSetname)
	ON_BN_CLICKED(IDC_Button_SetNumber, &CRegistryApiDemoDlg::OnBnClickedButtonSetnumber)
	ON_BN_CLICKED(IDC_Button_SetData, &CRegistryApiDemoDlg::OnBnClickedButtonSetdata)
	ON_BN_CLICKED(IDC_Button_LoadAll, &CRegistryApiDemoDlg::OnBnClickedButtonLoadall)
END_MESSAGE_MAP()


// CRegistryApiDemoDlg �޽��� ó����

BOOL CRegistryApiDemoDlg::OnInitDialog()
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

void CRegistryApiDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CRegistryApiDemoDlg::OnPaint()
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
HCURSOR CRegistryApiDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CRegistryApiDemoDlg::OnBnClickedButtonCreatekey()
{
	DWORD dwReturn = 0;
	HKEY hKey = NULL;

	dwReturn = ::RegCreateKeyEx(HKEY_CURRENT_USER,
								_T("Software\\RegistryApiDemo"),
								0,
								NULL,
								REG_OPTION_NON_VOLATILE,
								KEY_ALL_ACCESS,
								NULL,
								&hKey,
								NULL);
	if(dwReturn != ERROR_SUCCESS)
	{
		AfxMessageBox(_T("ERROR: Failed to create new registry key!"));
		return;
	}

	::RegCloseKey(hKey);
}

void CRegistryApiDemoDlg::OnBnClickedButtonSetname()
{
	UpdateData(TRUE);

	DWORD dwReturn = 0;
	HKEY hKey = NULL;
	dwReturn = ::RegOpenKeyEx(HKEY_CURRENT_USER,
							_T("Software\\RegistryApiDemo"),
							0,
							KEY_WRITE,
							&hKey);
	if(dwReturn == ERROR_SUCCESS)
	{
		::RegSetValueEx(hKey,
						_T("Name"),
						NULL,
						REG_SZ,
						(BYTE*)m_strName.GetBuffer(m_strName.GetLength()),
						m_strName.GetLength() * sizeof(TCHAR));

		::RegCloseKey(hKey);
	}
}

void CRegistryApiDemoDlg::OnBnClickedButtonSetnumber()
{
	UpdateData(TRUE);

	DWORD dwReturn = 0;
	HKEY hKey = NULL;
	dwReturn = ::RegOpenKeyEx(HKEY_CURRENT_USER,
							_T("Software\\RegistryApiDemo"),
							0,
							KEY_WRITE,
							&hKey);
	if(dwReturn == ERROR_SUCCESS)
	{
		::RegSetValueEx(hKey,
						_T("Number"),
						NULL,
						REG_DWORD,
						(BYTE*)&m_dwNumber,
						sizeof(m_dwNumber));

		::RegCloseKey(hKey);
	}
}

void CRegistryApiDemoDlg::OnBnClickedButtonSetdata()
{
	TEST_DATA TestData;
	::ZeroMemory(&TestData, sizeof(TestData));
	TestData.nType	= 10;
	TestData.dwData	= 15;
	wsprintf(TestData.szData, _T("%s"), _T("TEST DATA STRING"));

	DWORD dwReturn = 0;
	HKEY hKey = NULL;
	dwReturn = ::RegOpenKeyEx(HKEY_CURRENT_USER,
							_T("Software\\RegistryApiDemo"),
							0,
							KEY_WRITE,
							&hKey);
	if(dwReturn == ERROR_SUCCESS)
	{
		::RegSetValueEx(hKey,
						_T("Data"),
						NULL,
						REG_BINARY,
						(BYTE*)&TestData,
						sizeof(TestData));

		::RegCloseKey(hKey);
	}
}

void CRegistryApiDemoDlg::OnBnClickedButtonLoadall()
{
	DWORD dwReturn = 0, dwBufferSize = 0;
	HKEY hKey = NULL;

	TCHAR szName[256] = {0};
	DWORD dwNumber = 0;
	TEST_DATA TestData;
	::ZeroMemory(&TestData, sizeof(TestData));

	dwReturn = ::RegOpenKeyEx(HKEY_CURRENT_USER,
							_T("Software\\RegistryApiDemo"),
							0,
							KEY_READ,
							&hKey);
	if(dwReturn == ERROR_SUCCESS)
	{
		dwBufferSize = sizeof(szName);
		dwReturn = ::RegQueryValueEx(hKey, TEXT("Name"), NULL, NULL, 
								(BYTE*)szName, &dwBufferSize);

		dwBufferSize = sizeof(dwNumber);
		dwReturn = ::RegQueryValueEx(hKey, TEXT("Number"), NULL, NULL, 
								(BYTE*)&dwNumber, &dwBufferSize);

		dwBufferSize = sizeof(TestData);
		dwReturn = ::RegQueryValueEx(hKey, TEXT("Data"), NULL, NULL, 
								(BYTE*)&TestData, &dwBufferSize);

		::RegCloseKey(hKey);
	}
}
