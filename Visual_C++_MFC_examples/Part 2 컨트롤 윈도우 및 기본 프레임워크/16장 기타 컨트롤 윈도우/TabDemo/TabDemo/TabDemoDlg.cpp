
// TabDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "TabDemo.h"
#include "TabDemoDlg.h"

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


// CTabDemoDlg ��ȭ ����




CTabDemoDlg::CTabDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTabDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pwndShow = NULL;
}

void CTabDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB, m_Tab);
}

BEGIN_MESSAGE_MAP(CTabDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB, &CTabDemoDlg::OnTcnSelchangeTab)
END_MESSAGE_MAP()


// CTabDemoDlg �޽��� ó����

BOOL CTabDemoDlg::OnInitDialog()
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

	CBitmap Bmp;
	Bmp.LoadBitmap(IDB_TabImageList);
	
	static CImageList ImgList;
	ImgList.Create(16, 16, ILC_COLOR24 | ILC_MASK, 7, 0);
	ImgList.Add(&Bmp, RGB(192, 192, 192));
	m_Tab.SetImageList(&ImgList);

	CString strTmp = _T("");
	for(int i = 0; i < 7; i++)
	{
		strTmp.Format(_T("%dth Tab"), i);
		m_Tab.InsertItem(i, strTmp, i);
	}

	CRect Rect;
	m_Tab.GetClientRect(&Rect);

	m_formOne.Create(IDD_Form_One, &m_Tab);
	m_formOne.SetWindowPos(NULL, 5, 25,
					Rect.Width() - 10, Rect.Height() - 30,
					SWP_SHOWWINDOW | SWP_NOZORDER);
	m_pwndShow = &m_formOne;

	m_formSecond.Create(IDD_Form_Second, &m_Tab);
	m_formSecond.SetWindowPos(NULL, 5, 25,
					Rect.Width() - 10, Rect.Height() - 30,
					SWP_NOZORDER);

	m_formThird.Create(IDD_Form_Third, &m_Tab);
	m_formThird.SetWindowPos(NULL, 5, 25,
					Rect.Width() - 10, Rect.Height() - 30,
					SWP_NOZORDER);

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CTabDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CTabDemoDlg::OnPaint()
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
HCURSOR CTabDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CTabDemoDlg::OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult)
{
	if(m_pwndShow != NULL)
	{
		m_pwndShow->ShowWindow(SW_HIDE);
		m_pwndShow = NULL;
	}

	int nIndex = m_Tab.GetCurSel();
	switch(nIndex)
	{
	case 0:
		m_formOne.ShowWindow(SW_SHOW);
		m_pwndShow = &m_formOne;
		break;

	case 1:
		m_formSecond.ShowWindow(SW_SHOW);
		m_pwndShow = &m_formSecond;
		break;

	case 2:
		m_formThird.ShowWindow(SW_SHOW);
		m_pwndShow = &m_formThird;
		break;
	}

	*pResult = 0;
}
