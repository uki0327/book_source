
// GroupListDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "GroupListDemo.h"
#include "GroupListDemoDlg.h"

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


// CGroupListDemoDlg ��ȭ ����




CGroupListDemoDlg::CGroupListDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGroupListDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CGroupListDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List);
}

BEGIN_MESSAGE_MAP(CGroupListDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CGroupListDemoDlg �޽��� ó����

BOOL CGroupListDemoDlg::OnInitDialog()
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

	//1.�÷� �߰�
	m_List.InsertColumn(0, _T("Name"), LVCFMT_LEFT, 200);

	//2.������ �̹��� ����Ʈ ���� �� ����
	static CImageList ImgList, ImgListSmall;
	ImgList.Create(48, 48, ILC_COLOR32, 5, 0);
	ImgListSmall.Create(16, 16, ILC_COLOR32, 5, 0);

	m_List.SetImageList(&ImgList, LVSIL_NORMAL);
	m_List.SetImageList(&ImgListSmall, LVSIL_SMALL);

	//3.�׷� ���� �� �߰�
	LVGROUP group;
	::ZeroMemory(&group, sizeof(group));
	group.cbSize	= sizeof(group);
	group.mask		= LVGF_HEADER | LVGF_GROUPID;
	group.pszHeader	= _T("First Group");
	group.iGroupId	= 10;
	m_List.InsertGroup(-1, &group);

	group.pszHeader	= _T("Second Group");
	group.iGroupId	= 20;
	m_List.InsertGroup(-1, &group);

	//4.������ �߰�
	LVITEM item;
	::ZeroMemory(&item, sizeof(item));
	item.mask		= LVIF_TEXT | LVIF_IMAGE | LVIF_GROUPID;
	CString strItem = _T("");
	for(int i = 0; i < 5; ++i)
	{
		ImgList.Add(AfxGetApp()->LoadIcon(IDI_ICON1 + i));
		ImgListSmall.Add(AfxGetApp()->LoadIcon(IDI_ICON1 + i));
		strItem.Format(_T("%dth Item"), i);

		item.pszText	= strItem.GetBuffer();
		item.iItem		= i;
		item.iImage		= i;
		item.iGroupId	= 10;
		m_List.InsertItem(&item);

		item.iGroupId	= 20;
		m_List.InsertItem(&item);
	}

	//5.�׷� �� Ȱ��ȭ �� Ȯ�� ��Ÿ�� ����
	m_List.EnableGroupView(TRUE);

	DWORD dwExStyle = m_List.GetExtendedStyle();
	m_List.SetExtendedStyle(dwExStyle |
						LVS_EX_CHECKBOXES | LVS_EX_BORDERSELECT);

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CGroupListDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CGroupListDemoDlg::OnPaint()
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
HCURSOR CGroupListDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

