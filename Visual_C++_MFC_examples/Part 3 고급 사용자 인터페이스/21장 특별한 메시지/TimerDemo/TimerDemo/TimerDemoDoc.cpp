
// TimerDemoDoc.cpp : CTimerDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TimerDemo.h"

#include "TimerDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTimerDemoDoc

IMPLEMENT_DYNCREATE(CTimerDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CTimerDemoDoc, CDocument)
END_MESSAGE_MAP()


// CTimerDemoDoc ����/�Ҹ�

CTimerDemoDoc::CTimerDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTimerDemoDoc::~CTimerDemoDoc()
{
}

BOOL CTimerDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTimerDemoDoc serialization

void CTimerDemoDoc::Serialize(CArchive& ar)
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


// CTimerDemoDoc ����

#ifdef _DEBUG
void CTimerDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTimerDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTimerDemoDoc ���
