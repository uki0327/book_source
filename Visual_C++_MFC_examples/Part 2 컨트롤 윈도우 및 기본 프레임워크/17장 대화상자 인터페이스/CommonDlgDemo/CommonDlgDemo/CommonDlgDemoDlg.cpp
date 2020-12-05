
// CommonDlgDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "CommonDlgDemo.h"
#include "CommonDlgDemoDlg.h"

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


// CCommonDlgDemoDlg ��ȭ ����




CCommonDlgDemoDlg::CCommonDlgDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCommonDlgDemoDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCommonDlgDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCommonDlgDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_Button_FileDialog, &CCommonDlgDemoDlg::OnBnClickedButtonFiledialog)
	ON_BN_CLICKED(IDC_Button_FontDialog, &CCommonDlgDemoDlg::OnBnClickedButtonFontdialog)
	ON_BN_CLICKED(IDC_Button_ColorDialog, &CCommonDlgDemoDlg::OnBnClickedButtonColordialog)
	ON_BN_CLICKED(IDC_Button_FolderDialog, &CCommonDlgDemoDlg::OnBnClickedButtonFolderdialog)
END_MESSAGE_MAP()


// CCommonDlgDemoDlg �޽��� ó����

BOOL CCommonDlgDemoDlg::OnInitDialog()
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

void CCommonDlgDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CCommonDlgDemoDlg::OnPaint()
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
HCURSOR CCommonDlgDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCommonDlgDemoDlg::OnBnClickedButtonFiledialog()
{
	CString strTmp = _T("");
	CFileDialog Dlg(TRUE, _T("EXE"), NULL,
				OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST,
				_T("EXE Files(*.exe)|*.exe|All Files(*.*)|*.*||"), this);
	if(Dlg.DoModal() == IDOK)
	{
		strTmp.Format(_T("Full path: %s, Filename: %s, Extension: %s"),
				Dlg.GetPathName(), Dlg.GetFileName(), Dlg.GetFileExt());

		AfxMessageBox(strTmp);
	}
}

void CCommonDlgDemoDlg::OnBnClickedButtonFontdialog()
{
	CClientDC dc(this);

	CString strTmp = _T("");
	LOGFONT lfont;
	::ZeroMemory(&lfont, sizeof(LOGFONT));
	lfont.lfHeight = -MulDiv(9, dc.GetDeviceCaps(LOGPIXELSY), 72);
	wsprintf(lfont.lfFaceName, _T("%s"), _T("����"));

	CFontDialog Dlg(&lfont);
	if(Dlg.DoModal() == IDOK)
	{
		strTmp.Format(_T("Font: %s, Size: %d"),
									Dlg.GetFaceName(),	Dlg.GetSize());

		AfxMessageBox(strTmp);
	}
}

void CCommonDlgDemoDlg::OnBnClickedButtonColordialog()
{
	CString strTmp = _T("");

	CColorDialog Dlg(RGB(0, 0, 0), CC_FULLOPEN);
	if(Dlg.DoModal() == IDOK)
	{
		COLORREF color = Dlg.GetColor();
		strTmp.Format(_T("RGB(%u, %u, %u)"),
			GetRValue(color), GetGValue(color), GetBValue(color));

		AfxMessageBox(strTmp);
	}
}

void CCommonDlgDemoDlg::OnBnClickedButtonFolderdialog()
{
	BROWSEINFO bi;
	TCHAR szBuffer[MAX_PATH];
	::ZeroMemory(&bi, sizeof(BROWSEINFO));
	::ZeroMemory(szBuffer, MAX_PATH);

	bi.hwndOwner	= m_hWnd;
	bi.lpszTitle	= _T("������ ����� ������ �������ּ���.");
	bi.ulFlags		= BIF_NEWDIALOGSTYLE | BIF_EDITBOX | BIF_RETURNONLYFSDIRS;


	LPITEMIDLIST pItemIdList = ::SHBrowseForFolder(&bi);
	if(::SHGetPathFromIDList(pItemIdList, szBuffer))
	{
		AfxMessageBox(szBuffer);
	}
}
