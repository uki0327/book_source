
// HeadCtrlDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "HeadCtrlDemo.h"
#include "HeadCtrlDemoDlg.h"

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


// CHeadCtrlDemoDlg ��ȭ ����




CHeadCtrlDemoDlg::CHeadCtrlDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHeadCtrlDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_bAscending = TRUE;
}

void CHeadCtrlDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List);
}

BEGIN_MESSAGE_MAP(CHeadCtrlDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_NOTIFY(HDN_ITEMCLICK, 0, &CHeadCtrlDemoDlg::OnHdnItemclickList1)
END_MESSAGE_MAP()


// CHeadCtrlDemoDlg �޽��� ó����

BOOL CHeadCtrlDemoDlg::OnInitDialog()
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

	//������ �̹��� ����Ʈ ����.
	static CImageList ImgList, ImgListSmall;
	ImgList.Create(48, 48, ILC_COLOR32, 5, 0);
	ImgListSmall.Create(16, 16, ILC_COLOR32, 5, 0);

	//�̹��� ����Ʈ�� ����Ʈ ��Ʈ�ѿ� ������.
	m_List.SetImageList(&ImgList, LVSIL_NORMAL);
	m_List.SetImageList(&ImgListSmall, LVSIL_SMALL);

	//�÷��� �߰��ϰ� ����Ʈ ��Ÿ�Ϸ� ����
	m_List.InsertColumn(0, _T("Name"), LVCFMT_LEFT, 150);
	m_List.InsertColumn(1, _T("Data"), LVCFMT_LEFT, 150);
	m_List.InsertColumn(2, _T("Description"), LVCFMT_LEFT, 150);
	m_List.ModifyStyle(LVS_TYPEMASK, LVS_REPORT);

	//������ �߰�
	CString strItem = _T("");
	DWORD dwSeed = ::GetTickCount();
	LVITEM item;
	::ZeroMemory(&item, sizeof(item));
	item.mask = LVIF_TEXT | LVIF_IMAGE | LVIF_PARAM;
	for(int i = 0; i < 5; ++i)
	{
		ImgList.Add(AfxGetApp()->LoadIcon(IDI_ICON1 + i));
		ImgListSmall.Add(AfxGetApp()->LoadIcon(IDI_ICON1 + i));

		strItem.Format(_T("%dth Item"), i);

		item.pszText = strItem.GetBuffer();
		item.iItem = i;
		item.iImage = i;
		item.lParam = dwSeed + i;
		m_List.InsertItem(&item);

		strItem.Format(_T("%dth Data"), i);
		m_List.SetItemText(i, 1, strItem);

		strItem.Format(_T("%dth Desc"), i);
		m_List.SetItemText(i, 2, strItem);
	}

	//��� ��Ʈ�� �巡��-��-��� ����
	DWORD dwExStyle = m_List.GetExtendedStyle();
	m_List.SetExtendedStyle(dwExStyle | LVS_EX_HEADERDRAGDROP );

	m_bAscending = FALSE;
	m_List.SortItems(&CHeadCtrlDemoDlg::CompareItem, (DWORD_PTR)this);
	UpdateArrow();

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CHeadCtrlDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CHeadCtrlDemoDlg::OnPaint()
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
HCURSOR CHeadCtrlDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CHeadCtrlDemoDlg::OnHdnItemclickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMHEADER phdr = reinterpret_cast<LPNMHEADER>(pNMHDR);

	if(phdr->iItem == 0)
	{
		m_bAscending = !m_bAscending;
		UpdateArrow();
		m_List.SortItems(&CHeadCtrlDemoDlg::CompareItem, (DWORD_PTR)this);
	}

	*pResult = 0;
}

int CALLBACK CHeadCtrlDemoDlg::CompareItem(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort)
{
	CHeadCtrlDemoDlg* pDlg = (CHeadCtrlDemoDlg*)lParamSort;

	LVFINDINFO lvFind1, lvFind2;
	lvFind1.flags	= LVFI_PARAM;
	lvFind1.lParam	= lParam1;
	lvFind2.flags	= LVFI_PARAM;
	lvFind2.lParam	= lParam2;

	int nIndex1 = pDlg->m_List.FindItem(&lvFind1);
	int nIndex2 = pDlg->m_List.FindItem(&lvFind2);

	CString strText1 = pDlg->m_List.GetItemText(nIndex1, 0);
	CString strText2 = pDlg->m_List.GetItemText(nIndex2, 0);

	int nResult = 0;
	if(pDlg->m_bAscending)	nResult = strText2.Compare(strText1);
	else					nResult = strText1.Compare(strText2);

	return nResult;
}

void CHeadCtrlDemoDlg::UpdateArrow(void)
{
	CHeaderCtrl* pHeaderCtrl = m_List.GetHeaderCtrl();
	HDITEM hdItem;
	TCHAR szBuffer[256];
	::ZeroMemory(&hdItem, sizeof(hdItem));
	::ZeroMemory(szBuffer, 256);

	hdItem.mask = -1;
	hdItem.pszText = szBuffer;
	hdItem.cchTextMax = 256;
	pHeaderCtrl->GetItem(0, &hdItem);

	hdItem.fmt &= ~(HDF_SORTDOWN | HDF_SORTUP);

	if(m_bAscending)	hdItem.fmt |= HDF_SORTDOWN;
	else				hdItem.fmt |= HDF_SORTUP;
	pHeaderCtrl->SetItem(0, &hdItem);
}
