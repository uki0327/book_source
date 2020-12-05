
// SysImgListDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "SysImgListDemo.h"
#include "SysImgListDemoDlg.h"

//#include <ShellApi.h>

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


// CSysImgListDemoDlg ��ȭ ����




CSysImgListDemoDlg::CSysImgListDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSysImgListDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSysImgListDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List);
}

BEGIN_MESSAGE_MAP(CSysImgListDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CSysImgListDemoDlg �޽��� ó����

BOOL CSysImgListDemoDlg::OnInitDialog()
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

	// �� ��ȭ ������ �������� �����մϴ�. ���� ���α׷��� �� â�� ��ȭ ���ڰ�
	// �ƴ� ��쿡�� �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	//ū ������
	SHFILEINFO ShellInfo; 
	::ZeroMemory(&ShellInfo, sizeof(ShellInfo)); 
	HIMAGELIST hSysImage = reinterpret_cast<HIMAGELIST>(::SHGetFileInfo(
						_T("C:\\"), 0,
						&ShellInfo, sizeof(ShellInfo), 
						SHGFI_LARGEICON | SHGFI_SYSICONINDEX));

	//���� ������
	::ZeroMemory(&ShellInfo, sizeof(ShellInfo)); 
	HIMAGELIST hSysImageSmall = reinterpret_cast<HIMAGELIST>(::SHGetFileInfo(
						_T("C:\\"), 0,
						&ShellInfo, sizeof(ShellInfo), 
						SHGFI_SMALLICON | SHGFI_SYSICONINDEX));

	ListView_SetImageList(m_List.m_hWnd, hSysImage, LVSIL_NORMAL);
	ListView_SetImageList(m_List.m_hWnd, hSysImageSmall, LVSIL_SMALL);

	//������ �߰�
	CString strItem = _T("C:\\");
	m_List.InsertItem(0, strItem, GetIconIndexFromFile(strItem));
	strItem = _T("C:\\Windows");
	m_List.InsertItem(1, strItem, GetIconIndexFromFile(strItem));
	strItem = _T("C:\\Windows\\notepad.exe");
	m_List.InsertItem(2, strItem, GetIconIndexFromFile(strItem));
	strItem = _T("C:\\Windows\\explorer.exe");
	m_List.InsertItem(3, strItem, GetIconIndexFromFile(strItem));

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CSysImgListDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CSysImgListDemoDlg::OnPaint()
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
HCURSOR CSysImgListDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


int CSysImgListDemoDlg::GetIconIndexFromFile(CString strFilePath)
{
	SHFILEINFO ShellInfo; 
	::ZeroMemory(&ShellInfo, sizeof(ShellInfo)); 

	::SHGetFileInfo(strFilePath.GetBuffer(), 0,
					&ShellInfo, sizeof(ShellInfo), 
					SHGFI_LARGEICON | SHGFI_SYSICONINDEX);

	return ShellInfo.iIcon;
}

