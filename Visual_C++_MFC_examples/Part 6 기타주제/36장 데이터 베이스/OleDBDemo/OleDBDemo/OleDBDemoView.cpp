
// OleDBDemoView.cpp : COleDBDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "OleDBDemo.h"

#include "OleDBDemoSet.h"
#include "OleDBDemoDoc.h"
#include "OleDBDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COleDBDemoView

IMPLEMENT_DYNCREATE(COleDBDemoView, COleDBRecordView)

BEGIN_MESSAGE_MAP(COleDBDemoView, COleDBRecordView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &COleDBRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &COleDBRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COleDBDemoView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_Button_AddNew, &COleDBDemoView::OnBnClickedButtonAddnew)
	ON_BN_CLICKED(IDC_Button_ModifyRecord, &COleDBDemoView::OnBnClickedButtonModifyrecord)
	ON_BN_CLICKED(IDC_Button_DeleteRecord, &COleDBDemoView::OnBnClickedButtonDeleterecord)
END_MESSAGE_MAP()

// COleDBDemoView ����/�Ҹ�

COleDBDemoView::COleDBDemoView()
	: COleDBRecordView(COleDBDemoView::IDD)
{
	m_pSet = NULL;
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

COleDBDemoView::~COleDBDemoView()
{
}

void COleDBDemoView::DoDataExchange(CDataExchange* pDX)
{
	COleDBRecordView::DoDataExchange(pDX);
	// SetDlgItem*/GetDlgItem* API ȣ��� �ƴ϶� DDX_* �Լ��� �����Ͽ� �����ͺ��̽��� �信 ������ �� �ֽ��ϴ�.
	// ex. ::SetDlgItemText(m_hWnd, IDC_MYCONTROL, m_pSet->m_MyColumn);
	// �ڼ��� ������ MSDN �� OLEDB ������ �����Ͻʽÿ�.
	DDX_Control(pDX, IDC_List, m_List);
}

BOOL COleDBDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return COleDBRecordView::PreCreateWindow(cs);
}

void COleDBDemoView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_OleDBDemoSet;
	{
		CWaitCursor wait;
		HRESULT hr = m_pSet->OpenAll();
		if (FAILED(hr))
		{
			// ���ڵ� ������ ���� ���߽��ϴ�. ���ڵ� ������ ����
			// ���ν����� ��� OpenAll()�� ȣ���ϱ� ���� 
			// �Է� �Ű� ������ ����� �ʱ�ȭ�ߴ���
			// Ȯ���Ͻʽÿ�.

			AfxMessageBox(_T("���ڵ� ������ ���� ���߽��ϴ�."), MB_OK);
			// ���� RowSet ���� ���� ���ڵ��� ������ �õ��ϸ�
			// �浹�� �� �ֱ� ������ ���� �� ���� ���ڵ� �����
			// ��Ȱ��ȭ�մϴ�.
			m_bOnFirstRecord = TRUE;
			m_bOnLastRecord = TRUE;
		}
		if( hr == DB_S_ENDOFROWSET )
		{
			// �� ������ ��� �ֽ��ϴ�(���� ���ԵǾ� ���� ����).
			AfxMessageBox(_T("���ڵ� ������ �������� ��ȯ�� ���� �������ϴ�."), MB_OK);
			// ���� �� ���� ���ڵ� ����� ��Ȱ��ȭ�մϴ�.
			m_bOnFirstRecord = TRUE;
			m_bOnLastRecord = TRUE;
		}
	}
	COleDBRecordView::OnInitialUpdate();

	m_pSet->RunSQL(_T("SELECT * FROM UserData WHERE Age >= 40"));

	if(m_List.GetHeaderCtrl()->GetItemCount() <= 0)
	{
		m_List.InsertColumn(0, _T("Name"), LVCFMT_LEFT, 100);
		m_List.InsertColumn(1, _T("Phone number"), LVCFMT_LEFT, 150);
		m_List.InsertColumn(2, _T("Address"), LVCFMT_LEFT, 200);
		m_List.InsertColumn(3, _T("Age"), LVCFMT_LEFT, 50);
	}

	ListupAllRecords();
}


// COleDBDemoView �μ�


void COleDBDemoView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL COleDBDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void COleDBDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void COleDBDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void COleDBDemoView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COleDBDemoView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// COleDBDemoView ����

#ifdef _DEBUG
void COleDBDemoView::AssertValid() const
{
	COleDBRecordView::AssertValid();
}

void COleDBDemoView::Dump(CDumpContext& dc) const
{
	COleDBRecordView::Dump(dc);
}

COleDBDemoDoc* COleDBDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COleDBDemoDoc)));
	return (COleDBDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// COleDBDemoView �����ͺ��̽� ����
CRowset<>* COleDBDemoView::OnGetRowset()
{
	return m_pSet->GetRowsetBase();
}



// COleDBDemoView �޽��� ó����

void COleDBDemoView::ListupAllRecords(void)
{
	CString strTmp = _T("");
	m_pSet->MoveFirst();
	do
	{
		m_List.InsertItem(0, m_pSet->m_Name, 0);
		m_List.SetItemText(0, 1, m_pSet->m_PhoneNumber);
		m_List.SetItemText(0, 2, m_pSet->m_Address);

		strTmp.Format(_T("%ld"), m_pSet->m_Age);
		m_List.SetItemText(0, 3, strTmp);
	}
	while(m_pSet->MoveNext() != DB_S_ENDOFROWSET);

	m_pSet->MoveFirst();
}

void COleDBDemoView::OnBnClickedButtonAddnew()
{
	CCommand<CDynamicAccessor> Cmd;
 
	CDBPropSet   propset(DBPROPSET_ROWSET);
	propset.AddProperty(DBPROP_IRowsetChange, true);
	propset.AddProperty(DBPROP_UPDATABILITY, 
							DBPROPVAL_UP_CHANGE | 
							DBPROPVAL_UP_INSERT | 
							DBPROPVAL_UP_DELETE);
 
	HRESULT hr = Cmd.Open(m_pSet->m_session, _T("SELECT * FROM UserData"), &propset);
	if(FAILED(hr))
	{
		AfxMessageBox(_T("ERROR: Failed to execute SQL!"));
	}

	TCHAR* pszValue = NULL;
	Cmd.SetStatus(1, DBSTATUS_S_IGNORE); 

	pszValue = (TCHAR*)Cmd.GetValue(2);
	wsprintf(pszValue, _T("%s"), _T("��ö��"));
	Cmd.SetLength(2, lstrlen(pszValue) * 2);
	Cmd.SetStatus(2, DBSTATUS_S_OK);

	pszValue = (TCHAR*)Cmd.GetValue(3);
	wsprintf(pszValue, _T("%s"), _T("02-5555-5555"));
	Cmd.SetLength(3, lstrlen(pszValue) * 2);
	Cmd.SetStatus(3, DBSTATUS_S_OK);

	pszValue = (TCHAR*)Cmd.GetValue(4);
	wsprintf(pszValue, _T("%s"), _T("��õ�� ���̱� ��"));
	Cmd.SetLength(4, lstrlen(pszValue) * 2);
	Cmd.SetStatus(4, DBSTATUS_S_OK);

	ULONG* plAge = (ULONG*)Cmd.GetValue(5);
	*plAge = 100;
	Cmd.SetLength(5, sizeof(ULONG));
	Cmd.SetStatus(5, DBSTATUS_S_OK);

	hr = Cmd.Insert();
	if(FAILED(hr))
	{
		AfxMessageBox(_T("ERROR: Failed to Insert new record!"));
	}

	Cmd.Close();
	Cmd.ReleaseCommand();

	if(m_List.GetItemCount() > 0)		m_List.DeleteAllItems();
	m_pSet->RunSQL(_T("SELECT * FROM UserData"));
	ListupAllRecords();
}
void COleDBDemoView::OnBnClickedButtonModifyrecord()
{
	CCommand<CDynamicAccessor> Cmd;
 
	CDBPropSet   propset(DBPROPSET_ROWSET);
	propset.AddProperty(DBPROP_IRowsetChange, true);
	propset.AddProperty(DBPROP_UPDATABILITY, 
							DBPROPVAL_UP_CHANGE | 
							DBPROPVAL_UP_INSERT | 
							DBPROPVAL_UP_DELETE);
 
	HRESULT hr = Cmd.Open(m_pSet->m_session,
						_T("SELECT * FROM UserData WHERE Name = '��ö��'"),
						&propset);
	if(FAILED(hr))
	{
		AfxMessageBox(_T("ERROR: Failed to execute SQL!"));
	}

	Cmd.MoveFirst();
	TCHAR* pszValue = NULL;
	Cmd.SetStatus(1, DBSTATUS_S_IGNORE); 

	ULONG* plAge = (ULONG*)Cmd.GetValue(5);
	*plAge = 30;
	Cmd.SetLength(5, sizeof(ULONG));
	Cmd.SetStatus(5, DBSTATUS_S_OK);

	hr = Cmd.SetData();
	if(FAILED(hr))
	{
		AfxMessageBox(_T("ERROR: Failed to modify record!"));
	}

	Cmd.Update();
	Cmd.Close();
	Cmd.ReleaseCommand();

	if(m_List.GetItemCount() > 0)		m_List.DeleteAllItems();
	m_pSet->RunSQL(_T("SELECT * FROM UserData"));
	ListupAllRecords();
}
void COleDBDemoView::OnBnClickedButtonDeleterecord()
{
	CCommand<CDynamicAccessor> Cmd;
 
	CDBPropSet   propset(DBPROPSET_ROWSET);
	propset.AddProperty(DBPROP_IRowsetChange, true);
	propset.AddProperty(DBPROP_UPDATABILITY, 
							DBPROPVAL_UP_CHANGE | 
							DBPROPVAL_UP_INSERT | 
							DBPROPVAL_UP_DELETE);
 
	HRESULT hr = Cmd.Open(m_pSet->m_session,
						_T("SELECT * FROM UserData WHERE Name = '��ö��'"),
						&propset);
	if(FAILED(hr))
	{
		AfxMessageBox(_T("ERROR: Failed to execute SQL!"));
	}

	Cmd.MoveFirst();
	hr = Cmd.Delete();
	if(FAILED(hr))
	{
		AfxMessageBox(_T("ERROR: Failed to delete record!"));
	}

	Cmd.Update();
	Cmd.Close();
	Cmd.ReleaseCommand();

	if(m_List.GetItemCount() > 0)		m_List.DeleteAllItems();
	m_pSet->RunSQL(_T("SELECT * FROM UserData"));
	ListupAllRecords();
}
