
// TestAppMfcFpDoc.cpp : CTestAppMfcFpDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TestAppMfcFp.h"

#include "TestAppMfcFpDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestAppMfcFpDoc

IMPLEMENT_DYNCREATE(CTestAppMfcFpDoc, CDocument)

BEGIN_MESSAGE_MAP(CTestAppMfcFpDoc, CDocument)
END_MESSAGE_MAP()


// CTestAppMfcFpDoc ����/�Ҹ�

CTestAppMfcFpDoc::CTestAppMfcFpDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTestAppMfcFpDoc::~CTestAppMfcFpDoc()
{
}

BOOL CTestAppMfcFpDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTestAppMfcFpDoc serialization

void CTestAppMfcFpDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}


// CTestAppMfcFpDoc ����

#ifdef _DEBUG
void CTestAppMfcFpDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTestAppMfcFpDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTestAppMfcFpDoc ���
