
// TreeCtrlDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "TreeCtrlDemo.h"
#include "TreeCtrlDemoDlg.h"

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


// CTreeCtrlDemoDlg ��ȭ ����




CTreeCtrlDemoDlg::CTreeCtrlDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTreeCtrlDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTreeCtrlDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE, m_Tree);
}

BEGIN_MESSAGE_MAP(CTreeCtrlDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE, &CTreeCtrlDemoDlg::OnTvnSelchangedTree)
	ON_BN_CLICKED(IDC_Button_CheckupChild, &CTreeCtrlDemoDlg::OnBnClickedButtonCheckupchild)
END_MESSAGE_MAP()


// CTreeCtrlDemoDlg �޽��� ó����

BOOL CTreeCtrlDemoDlg::OnInitDialog()
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

	InitTreeCtrl();

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CTreeCtrlDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CTreeCtrlDemoDlg::OnPaint()
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
HCURSOR CTreeCtrlDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CTreeCtrlDemoDlg::InitTreeCtrl(void)
{
	CBitmap Bmp;
	Bmp.LoadBitmap(IDB_TreeImageList);

	static CImageList ImgList;
	ImgList.Create(16, 16, ILC_COLOR24, 6, 0);
	ImgList.Add(&Bmp, RGB(255, 0, 0));
	m_Tree.SetImageList(&ImgList, TVSIL_NORMAL);

	HTREEITEM hItem = NULL;
	hItem = m_Tree.InsertItem(_T("���� ȭ��"), 0, 0, TVI_ROOT);
	hItem = m_Tree.InsertItem(_T("�� ����"), 1, 5, hItem);
	m_Tree.InsertItem(_T("�� �׸�"), 2, 5, hItem);
	m_Tree.InsertItem(_T("�� ����"), 3, 5, hItem);
	hItem = m_Tree.InsertItem(_T("Sample folder"), 4, 5, hItem);
	hItem = m_Tree.InsertItem(_T("Sub folder"), 4, 5, hItem);

	m_Tree.EnsureVisible(hItem);
}

void CTreeCtrlDemoDlg::OnTvnSelchangedTree(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);

	CString strItem = m_Tree.GetItemText(pNMTreeView->itemNew.hItem);
	GetDlgItem(IDC_Static_Selected)->SetWindowText(strItem);

	*pResult = 0;
}

void CTreeCtrlDemoDlg::OnBnClickedButtonCheckupchild()
{
	HTREEITEM hItem = m_Tree.GetRootItem();
	if(m_Tree.GetCheck(hItem))
		AfxMessageBox(m_Tree.GetItemText(hItem));

	CheckupChild(m_Tree.GetRootItem());
}

void CTreeCtrlDemoDlg::CheckupChild(HTREEITEM hItem)
{
	HTREEITEM hChildItem = m_Tree.GetChildItem(hItem);

	while(hChildItem != NULL)
	{
		if(m_Tree.GetCheck(hChildItem))
			AfxMessageBox(m_Tree.GetItemText(hChildItem));

		//���ϵ� �������� ������ ���ȣ��.
		if(m_Tree.ItemHasChildren(hChildItem))
			CheckupChild(hChildItem);

		hChildItem = m_Tree.GetNextItem(hChildItem, TVGN_NEXT);
	}
}
