
// RegistryMfcDemo.cpp : ���� ���α׷��� ���� Ŭ���� ������ �����մϴ�.
//

#include "stdafx.h"
#include "RegistryMfcDemo.h"
#include "RegistryMfcDemoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRegistryMfcDemoApp

BEGIN_MESSAGE_MAP(CRegistryMfcDemoApp, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CRegistryMfcDemoApp ����

CRegistryMfcDemoApp::CRegistryMfcDemoApp()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	// InitInstance�� ��� �߿��� �ʱ�ȭ �۾��� ��ġ�մϴ�.
}


// ������ CRegistryMfcDemoApp ��ü�Դϴ�.

CRegistryMfcDemoApp theApp;


// CRegistryMfcDemoApp �ʱ�ȭ

BOOL CRegistryMfcDemoApp::InitInstance()
{
	// ���� ���α׷� �Ŵ��佺Ʈ�� ComCtl32.dll ���� 6 �̻��� ����Ͽ� ���־� ��Ÿ����
	// ����ϵ��� �����ϴ� ���, Windows XP �󿡼� �ݵ�� InitCommonControlsEx()�� �ʿ��մϴ�.
	// InitCommonControlsEx()�� ������� ������ â�� ���� �� �����ϴ�.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ���� ���α׷����� ����� ��� ���� ��Ʈ�� Ŭ������ �����ϵ���
	// �� �׸��� �����Ͻʽÿ�.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();
	AfxEnableControlContainer();

	SetRegistryKey(_T("������"));

	CRegistryMfcDemoDlg dlg;
	m_pMainWnd = &dlg;

	UINT uRead = 0;
	BYTE* pData = NULL;
	dlg.m_strLastDate = GetProfileString(_T(""), _T("LastDate"), _T("���� ����"));
	dlg.m_strName = GetProfileString(_T("User"), _T("Name"), _T("Unknown"));
	dlg.m_dwNumber = GetProfileInt(_T("User"), _T("Number"), 0);
	
	if(GetProfileBinary(_T(""), _T("TestData"), &pData, &uRead))
	{
		TEST_DATA* pTestData = (TEST_DATA*)pData;
		delete[] pData;
	}

	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: ���⿡ [Ȯ��]�� Ŭ���Ͽ� ��ȭ ���ڰ� ������ �� ó����
		//  �ڵ带 ��ġ�մϴ�.
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: ���⿡ [���]�� Ŭ���Ͽ� ��ȭ ���ڰ� ������ �� ó����
		//  �ڵ带 ��ġ�մϴ�.
	}

	CTime t = CTime::GetCurrentTime();
	CString strDate = t.Format(_T("%A, %B %d, %Y"));

	WriteProfileString(_T(""), _T("LastDate"), strDate);
	WriteProfileString(_T("User"), _T("Name"), dlg.m_strName);
	WriteProfileInt(_T("User"), _T("Number"), dlg.m_dwNumber);

	TEST_DATA TestData;
	::ZeroMemory(&TestData, sizeof(TestData));
	TestData.nType	= 10;
	TestData.dwData	= 15;
	wsprintf(TestData.szData, _T("%s"), _T("TEST DATA STRING"));
	WriteProfileBinary(_T(""), _T("TestData"), (BYTE*)&TestData, sizeof(TestData));

	return FALSE;
}
