
// ClipboardDemoDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "ClipboardDemo.h"
#include "ClipboardDemoDlg.h"

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


// CClipboardDemoDlg ��ȭ ����




CClipboardDemoDlg::CClipboardDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CClipboardDemoDlg::IDD, pParent)
	, m_strText(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CClipboardDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Edit, m_strText);
}

BEGIN_MESSAGE_MAP(CClipboardDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_Butto_CopyToClipboard, &CClipboardDemoDlg::OnBnClickedButtoCopytoclipboard)
	ON_BN_CLICKED(IDC_Butto_ReadFromClipboard, &CClipboardDemoDlg::OnBnClickedButtoReadfromclipboard)
END_MESSAGE_MAP()


// CClipboardDemoDlg �޽��� ó����

BOOL CClipboardDemoDlg::OnInitDialog()
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

void CClipboardDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CClipboardDemoDlg::OnPaint()
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
HCURSOR CClipboardDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CClipboardDemoDlg::OnBnClickedButtoCopytoclipboard()
{
	UpdateData(TRUE);
	if(m_strText.GetLength() <= 0)		return;

	HGLOBAL hGlobalMemory;
	TCHAR* pszBuffer = NULL;

	if(::OpenClipboard(m_hWnd) == FALSE)
	{
		AfxMessageBox(_T("ERROR: Failed to open clipboard"));
		return;
	}

	int nLength = (m_strText.GetLength() + 1) * sizeof(TCHAR);
	hGlobalMemory = ::GlobalAlloc(GMEM_MOVEABLE | GMEM_ZEROINIT, nLength); 
	if(hGlobalMemory == NULL) 
	{
		AfxMessageBox(_T("ERROR: Failed to allocate global memory!"));
		::CloseClipboard(); 

		return; 
	} 

	pszBuffer = (TCHAR*)::GlobalLock(hGlobalMemory); 
	wsprintf(pszBuffer, _T("%s"), m_strText); 
	::GlobalUnlock(hGlobalMemory); 

	::EmptyClipboard();
	::SetClipboardData(CF_UNICODETEXT, hGlobalMemory);
	::CloseClipboard();

}

void CClipboardDemoDlg::OnBnClickedButtoReadfromclipboard()
{
	if(!::IsClipboardFormatAvailable(CF_UNICODETEXT))	return; 
	if(!::OpenClipboard(m_hWnd))						return; 
 
	HGLOBAL hGlobalMemory = ::GetClipboardData(CF_UNICODETEXT); 
	if(hGlobalMemory != NULL)
	{
		TCHAR* pszBuffer = (TCHAR*)::GlobalLock(hGlobalMemory); 
		if(pszBuffer != NULL) 
		{
			m_strText.Format(_T("%s"), pszBuffer);
			::GlobalUnlock(hGlobalMemory); 
		}
	}

	::CloseClipboard(); 
	UpdateData(FALSE);	
}
