
// Vs2005StyleDoc.cpp : CVs2005StyleDoc Ŭ������ ����
//

#include "stdafx.h"
#include "Vs2005Style.h"

#include "Vs2005StyleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVs2005StyleDoc

IMPLEMENT_DYNCREATE(CVs2005StyleDoc, CDocument)

BEGIN_MESSAGE_MAP(CVs2005StyleDoc, CDocument)
END_MESSAGE_MAP()


// CVs2005StyleDoc ����/�Ҹ�

CVs2005StyleDoc::CVs2005StyleDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CVs2005StyleDoc::~CVs2005StyleDoc()
{
}

BOOL CVs2005StyleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CVs2005StyleDoc serialization

void CVs2005StyleDoc::Serialize(CArchive& ar)
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


// CVs2005StyleDoc ����

#ifdef _DEBUG
void CVs2005StyleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVs2005StyleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CVs2005StyleDoc ���
