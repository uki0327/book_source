
// UnicodeDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "UnicodeDemo.h"
#include "UnicodeDemoDlg.h"

#include <lm.h>
#pragma comment(lib, "NetApi32")

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


// CUnicodeDemoDlg ��ȭ ����




CUnicodeDemoDlg::CUnicodeDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUnicodeDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CUnicodeDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CUnicodeDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_Button_Message, &CUnicodeDemoDlg::OnBnClickedButtonMessage)
	ON_BN_CLICKED(IDC_Button_Length, &CUnicodeDemoDlg::OnBnClickedButtonLength)
	ON_BN_CLICKED(IDC_Button_CString, &CUnicodeDemoDlg::OnBnClickedButtonCstring)
	ON_BN_CLICKED(IDC_Button_UniToMBCS, &CUnicodeDemoDlg::OnBnClickedButtonUnitombcs)
	ON_BN_CLICKED(IDC_Button_MBCSToUnicode, &CUnicodeDemoDlg::OnBnClickedButtonMbcstounicode)
	ON_BN_CLICKED(IDC_Button_NetUserGetInfo, &CUnicodeDemoDlg::OnBnClickedButtonNetusergetinfo)
END_MESSAGE_MAP()


// CUnicodeDemoDlg �޽��� ó����

BOOL CUnicodeDemoDlg::OnInitDialog()
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

void CUnicodeDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CUnicodeDemoDlg::OnPaint()
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
HCURSOR CUnicodeDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CUnicodeDemoDlg::OnBnClickedButtonMessage()
{
/*	WCHAR wszBuffer[128];
	wsprintf(wszBuffer, L"%s (Length %d, Size %d)",
										L"Test string!",
										lstrlen(L"Test string!"),
										sizeof(wszBuffer));
	AfxMessageBox(wszBuffer);
*/
}

void CUnicodeDemoDlg::OnBnClickedButtonLength()
{
	char szBuffer[128];
	sprintf_s(szBuffer, 128, "%s (Length %d, Size %d)",
										"Test string!",
										lstrlenA("Test string!"),
										sizeof(szBuffer));
	::MessageBoxA(m_hWnd, szBuffer, "Test", MB_OK);
}

void CUnicodeDemoDlg::OnBnClickedButtonCstring()
{
	CString strTmp = _T(""), strTest = _T("Test string!");
	strTmp.Format(_T("%s (Length %d)"), strTest, strTest.GetLength());
	AfxMessageBox(strTmp);
}

void CUnicodeDemoDlg::OnBnClickedButtonUnitombcs()
{
	WCHAR wszBuffer[128];
	char szDstBuffer[128];
	wsprintf(wszBuffer, _T("%s"), _T("Test String!"));
	::ZeroMemory(szDstBuffer, sizeof(szDstBuffer));

	::WideCharToMultiByte(CP_ACP, 0, wszBuffer, -1, szDstBuffer, 128, NULL, NULL);
	::MessageBoxA(m_hWnd, szDstBuffer, "Test", MB_OK);
}

void CUnicodeDemoDlg::OnBnClickedButtonMbcstounicode()
{
	WCHAR wszBuffer[128];
	char szSrcBuffer[128];
	sprintf_s(szSrcBuffer, 128, "%s", "Test String!");
	::ZeroMemory(wszBuffer, sizeof(wszBuffer));

	::MultiByteToWideChar(CP_ACP, 0, szSrcBuffer, lstrlenA(szSrcBuffer) + 1,
						wszBuffer, sizeof(wszBuffer)/sizeof(wszBuffer[0]) );

	AfxMessageBox(wszBuffer);
}

void CUnicodeDemoDlg::OnBnClickedButtonNetusergetinfo()
{
	CString strTmp = _T("");
	USER_INFO_2* pUserInfo = NULL;
	if(::NetUserGetInfo(NULL, L"Tester", 2, (LPBYTE*)&pUserInfo) == NERR_Success)
	{
		strTmp.Format(_T("%s (%s)"), pUserInfo->usri2_full_name,
									 pUserInfo->usri2_comment);
		AfxMessageBox(strTmp);
		::NetApiBufferFree(pUserInfo);
	}
}
