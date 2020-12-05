
// ListComboDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "ListComboDemo.h"
#include "ListComboDemoDlg.h"

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


// CListComboDemoDlg ��ȭ ����




CListComboDemoDlg::CListComboDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListComboDemoDlg::IDD, pParent)
	, m_strInput(_T(""))
	, m_strSelected(_T(""))
	, m_strAddress(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CListComboDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List);
	DDX_Text(pDX, IDC_Edit_Input, m_strInput);
	DDX_Text(pDX, IDC_Static_Selected, m_strSelected);
	DDX_Control(pDX, IDC_Combo_Address, m_Combo_Address);
	DDX_CBString(pDX, IDC_Combo_Address, m_strAddress);
}

BEGIN_MESSAGE_MAP(CListComboDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_Button_InsertString, &CListComboDemoDlg::OnBnClickedButtonInsertstring)
	ON_BN_CLICKED(IDC_Button_AddString, &CListComboDemoDlg::OnBnClickedButtonAddstring)
	ON_BN_CLICKED(IDC_Button_Find, &CListComboDemoDlg::OnBnClickedButtonFind)
	ON_BN_CLICKED(IDC_Button_FindExact, &CListComboDemoDlg::OnBnClickedButtonFindexact)
	ON_LBN_SELCHANGE(IDC_LIST1, &CListComboDemoDlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_Button_AddAddress, &CListComboDemoDlg::OnBnClickedButtonAddaddress)
END_MESSAGE_MAP()


// CListComboDemoDlg �޽��� ó����

BOOL CListComboDemoDlg::OnInitDialog()
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

	m_Combo_Address.AddString(_T("www.freelec.co.kr"));
	m_Combo_Address.AddString(_T("cafe.naver.com/windev"));

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CListComboDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CListComboDemoDlg::OnPaint()
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
HCURSOR CListComboDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CListComboDemoDlg::OnBnClickedButtonInsertstring()
{
	UpdateData();
	m_List.InsertString(0, m_strInput);
}

void CListComboDemoDlg::OnBnClickedButtonAddstring()
{
	UpdateData();
	m_List.AddString(m_strInput);
}

void CListComboDemoDlg::OnBnClickedButtonFind()
{
	UpdateData();
	CString strTmp = _T(""), strFind = _T("");
	int nIndex = m_List.FindString(-1, m_strInput);
	if(nIndex != LB_ERR)
	{
		m_List.GetText(nIndex, strFind);
		strTmp.Format(_T("%d:%s"), nIndex, strFind);
		AfxMessageBox(strTmp);
	}
	else
	{
		AfxMessageBox(_T("��ġ�ϴ� �׸��� ã�� �� �����ϴ�."));
	}
}

void CListComboDemoDlg::OnBnClickedButtonFindexact()
{
	UpdateData();
	CString strTmp = _T(""), strFind = _T("");
	int nIndex = m_List.FindStringExact(-1, m_strInput);
	if(nIndex != LB_ERR)
	{
		m_List.GetText(nIndex, strFind);
		strTmp.Format(_T("%d:%s"), nIndex, strFind);
		AfxMessageBox(strTmp);
	}
	else
	{
		AfxMessageBox(_T("��ġ�ϴ� �׸��� ã�� �� �����ϴ�."));
	}
}

void CListComboDemoDlg::OnLbnSelchangeList1()
{
	int nIndex = m_List.GetCurSel();
	if(nIndex != LB_ERR)
	{
		m_List.GetText(nIndex, m_strSelected);
		UpdateData(FALSE);
	}
}

void CListComboDemoDlg::OnBnClickedButtonAddaddress()
{
	UpdateData(TRUE);
	//�޺� �ڽ��� ����Ʈ �ڽ��� ��� �߰�
	m_Combo_Address.AddString(m_strAddress);
	m_List.AddString(m_strAddress);

	//�Է� ���ڿ� �ʱ�ȭ
	m_Combo_Address.SetEditSel(0, -1);
	m_Combo_Address.Clear();
}
