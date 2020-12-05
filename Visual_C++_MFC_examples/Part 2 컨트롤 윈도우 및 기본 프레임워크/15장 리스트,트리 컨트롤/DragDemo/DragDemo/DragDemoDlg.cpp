
// DragDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "DragDemo.h"
#include "DragDemoDlg.h"

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


// CDragDemoDlg ��ȭ ����




CDragDemoDlg::CDragDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDragDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pImgListDrag	= NULL;
	m_nIndexLeftSel	= -1;
}

void CDragDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_List_Left, m_List_Left);
	DDX_Control(pDX, IDC_List_Right, m_List_Right);
}

BEGIN_MESSAGE_MAP(CDragDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_NOTIFY(LVN_BEGINDRAG, IDC_List_Left, &CDragDemoDlg::OnLvnBegindragListLeft)
	ON_BN_CLICKED(IDC_Rst_RightList, &CDragDemoDlg::OnBnClickedRstRightlist)
END_MESSAGE_MAP()


// CDragDemoDlg �޽��� ó����

BOOL CDragDemoDlg::OnInitDialog()
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

	CBitmap Bitmap;
	Bitmap.LoadBitmap(IDB_ImageList);

	static CImageList ImgList;
	ImgList.Create(32, 32, ILC_COLOR32 | ILC_MASK, 5, 0);
	ImgList.Add(&Bitmap, RGB(0, 0, 0));
	m_List_Left.SetImageList(&ImgList, LVSIL_NORMAL);
	m_List_Right.SetImageList(&ImgList, LVSIL_NORMAL);

	CString strItem = _T("");
	for(int i = 0; i < 5; ++i)
	{
		strItem.Format(_T("%dth Item"), i);
		m_List_Left.InsertItem(i, strItem, i);
	}

	DWORD dwExStyle = m_List_Left.GetExtendedStyle();
	m_List_Left.SetExtendedStyle(dwExStyle | LVS_EX_BORDERSELECT);
	dwExStyle = m_List_Right.GetExtendedStyle();
	m_List_Right.SetExtendedStyle(dwExStyle | LVS_EX_BORDERSELECT);

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CDragDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CDragDemoDlg::OnPaint()
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
HCURSOR CDragDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CDragDemoDlg::OnLvnBegindragListLeft(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);

	CPoint ptDrag, ptAction;
	m_nIndexLeftSel = pNMLV->iItem;
	m_pImgListDrag = m_List_Left.CreateDragImage(pNMLV->iItem, &ptDrag);
	m_pImgListDrag->SetBkColor(RGB(0, 0, 0));
	ptAction = pNMLV->ptAction;

	SetCapture();
	m_pImgListDrag->BeginDrag(0, ptAction - ptDrag);
	m_List_Left.ClientToScreen(&ptAction);
	m_pImgListDrag->DragEnter(NULL, ptAction);

	*pResult = 0;
}

void CDragDemoDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	if(m_pImgListDrag != NULL)
	{
		ClientToScreen(&point);

		CWnd* pWnd = CWnd::WindowFromPoint(point);
		if(pWnd != NULL)
		{
			if(this == pWnd || IsChild(pWnd))
			{
				m_pImgListDrag->DragEnter(NULL, point);
				m_pImgListDrag->DragMove(point);
			}
			else
			{
				m_pImgListDrag->DragLeave(NULL);
			}
		}
	}

	CDialog::OnMouseMove(nFlags, point);
}

void CDragDemoDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	CString strTmp = _T("");
	if(m_pImgListDrag != NULL)
	{
		ClientToScreen(&point);

		m_pImgListDrag->DragLeave(NULL);
		m_pImgListDrag->EndDrag();
		ReleaseCapture();

		//������ ����Ʈ�� ������ �߰�.
		CWnd* pWnd = CWnd::WindowFromPoint(point);
		if(pWnd == &m_List_Right && m_nIndexLeftSel >= 0)
		{
			LVITEM lvItem;
			TCHAR szBuffer[256];
			::ZeroMemory(&lvItem, sizeof(lvItem));
			::ZeroMemory(szBuffer, sizeof(256));

			lvItem.mask = LVIF_TEXT | LVIF_IMAGE;
			lvItem.iItem = m_nIndexLeftSel;
			lvItem.pszText = szBuffer;
			lvItem.cchTextMax = 256;
			m_List_Left.GetItem(&lvItem);

			m_List_Right.InsertItem(0, lvItem.pszText, lvItem.iImage);
		}

		//���� ����Ʈ�̸� ��ü���� ������ �ε��� ���.
		else
		{
			m_List_Left.ScreenToClient(&point);
			int nIndex = m_List_Left.HitTest(point);
			if(nIndex >= 0)
			{
				strTmp.Format(_T("Drop on %dth item"), nIndex);
				AfxMessageBox(strTmp);
			}
		}

		delete m_pImgListDrag;
		m_pImgListDrag = NULL;
		m_nIndexLeftSel = -1;
	}

	CDialog::OnLButtonUp(nFlags, point);
}

void CDragDemoDlg::OnBnClickedRstRightlist()
{
	m_List_Right.DeleteAllItems();
}
