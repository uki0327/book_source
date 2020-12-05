
// OdbcDemoView.cpp : COdbcDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "OdbcDemo.h"

#include "OdbcDemoSet.h"
#include "OdbcDemoDoc.h"
#include "OdbcDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COdbcDemoView

IMPLEMENT_DYNCREATE(COdbcDemoView, CRecordView)

BEGIN_MESSAGE_MAP(COdbcDemoView, CRecordView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COdbcDemoView::OnFilePrintPreview)
	ON_COMMAND(ID_RECORD_FIRST, &COdbcDemoView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_LAST, &COdbcDemoView::OnRecordLast)
	ON_COMMAND(ID_RECORD_NEXT, &COdbcDemoView::OnRecordNext)
	ON_COMMAND(ID_RECORD_PREV, &COdbcDemoView::OnRecordPrev)
	ON_BN_CLICKED(IDC_Button_AddNew, &COdbcDemoView::OnBnClickedButtonAddnew)
	ON_BN_CLICKED(IDC_Button_UpdateCurrent, &COdbcDemoView::OnBnClickedButtonUpdatecurrent)
	ON_BN_CLICKED(IDC_Button_DeleteCurrent, &COdbcDemoView::OnBnClickedButtonDeletecurrent)
	ON_BN_CLICKED(IDC_Button_FindRecord, &COdbcDemoView::OnBnClickedButtonFindrecord)
END_MESSAGE_MAP()

// COdbcDemoView ����/�Ҹ�

COdbcDemoView::COdbcDemoView()
	: CRecordView(COdbcDemoView::IDD)
	, m_strName(_T(""))
	, m_strPhoneNumber(_T(""))
	, m_strAddress(_T(""))
	, m_lAge(0)
{
	m_pSet = NULL;
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

COdbcDemoView::~COdbcDemoView()
{
}

void COdbcDemoView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// ��Ʈ���� �����ͺ��̽� �ʵ忡 '����'�ϱ� ���� ���⿡ DDX_Field* �Լ��� ������ �� �ֽ��ϴ�. ��:
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �ڼ��� ������ MSDN �� ODBC ������ �����Ͻʽÿ�.
	DDX_Control(pDX, IDC_List, m_List);
	DDX_Text(pDX, IDC_Edit_Name, m_strName);
	DDX_Text(pDX, IDC_Edit_PhoneNumber, m_strPhoneNumber);
	DDX_Text(pDX, IDC_Edit_Address, m_strAddress);
	DDX_Text(pDX, IDC_Edit_Age, m_lAge);
}

BOOL COdbcDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CRecordView::PreCreateWindow(cs);
}

void COdbcDemoView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_OdbcDemoSet;
	CRecordView::OnInitialUpdate();

	if(m_List.GetHeaderCtrl()->GetItemCount() <= 0)
	{
		m_List.InsertColumn(0, _T("Name"), LVCFMT_LEFT, 100);
		m_List.InsertColumn(1, _T("Phone number"), LVCFMT_LEFT, 150);
		m_List.InsertColumn(2, _T("Address"), LVCFMT_LEFT, 200);
		m_List.InsertColumn(3, _T("Age"), LVCFMT_LEFT, 50);
	}

	ListupAllRecords();
	DisplayRecord();
}


// COdbcDemoView �μ�


void COdbcDemoView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL COdbcDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void COdbcDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void COdbcDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void COdbcDemoView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COdbcDemoView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// COdbcDemoView ����

#ifdef _DEBUG
void COdbcDemoView::AssertValid() const
{
	CRecordView::AssertValid();
}

void COdbcDemoView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

COdbcDemoDoc* COdbcDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COdbcDemoDoc)));
	return (COdbcDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// COdbcDemoView �����ͺ��̽� ����
CRecordset* COdbcDemoView::OnGetRecordset()
{
	return m_pSet;
}



// COdbcDemoView �޽��� ó����

void COdbcDemoView::ListupAllRecords(void)
{
	CString strTmp = _T("");
	if(m_pSet->IsBOF())		return;

	while(!m_pSet->IsEOF())
	{
		m_List.InsertItem(0, m_pSet->m_Name, 0);
		m_List.SetItemText(0, 1, m_pSet->m_PhoneNumber);
		m_List.SetItemText(0, 2, m_pSet->m_Address);

		strTmp.Format(_T("%ld"), m_pSet->m_Age);
		m_List.SetItemText(0, 3, strTmp);
		m_pSet->MoveNext();
	}

	m_pSet->MoveLast();
}

void COdbcDemoView::DisplayRecord(void)
{
	m_strName			= m_pSet->m_Name;
	m_strPhoneNumber	= m_pSet->m_PhoneNumber;
	m_strAddress		= m_pSet->m_Address;
	m_lAge				= m_pSet->m_Age;

	UpdateData(FALSE);
}


void COdbcDemoView::OnRecordFirst()
{
	m_pSet->MoveFirst();
	DisplayRecord();
}

void COdbcDemoView::OnRecordLast()
{
	m_pSet->MoveLast();
	DisplayRecord();
}

void COdbcDemoView::OnRecordNext()
{
	m_pSet->MoveNext();
	DisplayRecord();
}

void COdbcDemoView::OnRecordPrev()
{
	m_pSet->MovePrev();
	DisplayRecord();
}

void COdbcDemoView::OnBnClickedButtonAddnew()
{
	if(!UpdateData())		return;

	m_pSet->MoveLast();
	m_pSet->AddNew();
	m_pSet->SetFieldNull(NULL);

	m_pSet->m_Name			= m_strName;
	m_pSet->m_PhoneNumber	= m_strPhoneNumber;
	m_pSet->m_Address		= m_strAddress;
	m_pSet->m_Age			= m_lAge;

	m_pSet->Update();
	m_pSet->Requery();

	if(m_List.GetItemCount() > 0)		m_List.DeleteAllItems();
	ListupAllRecords();
}

void COdbcDemoView::OnBnClickedButtonUpdatecurrent()
{
	if(!UpdateData())		return;

	m_pSet->Edit();

	m_pSet->m_Name			= m_strName;
	m_pSet->m_PhoneNumber	= m_strPhoneNumber;
	m_pSet->m_Address		= m_strAddress;
	m_pSet->m_Age			= m_lAge;

	m_pSet->Update();
	m_pSet->Requery();

	if(m_List.GetItemCount() > 0)		m_List.DeleteAllItems();
	ListupAllRecords();
}

void COdbcDemoView::OnBnClickedButtonDeletecurrent()
{
	m_pSet->Delete();
}

void COdbcDemoView::OnBnClickedButtonFindrecord()
{
	m_pSet->m_strFilter = _T("PhoneNumber = '02-2345-2345'");
	m_pSet->Requery();

	if(m_List.GetItemCount() > 0)		m_List.DeleteAllItems();
	ListupAllRecords();
}
