
// SdiSeqDoc.cpp : CSdiSeqDoc Ŭ������ ����
//

#include "stdafx.h"
#include "SdiSeq.h"

#include "SdiSeqDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSdiSeqDoc

IMPLEMENT_DYNCREATE(CSdiSeqDoc, CDocument)

BEGIN_MESSAGE_MAP(CSdiSeqDoc, CDocument)
END_MESSAGE_MAP()


// CSdiSeqDoc ����/�Ҹ�

CSdiSeqDoc::CSdiSeqDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CSdiSeqDoc::~CSdiSeqDoc()
{
}

BOOL CSdiSeqDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CSdiSeqDoc serialization

void CSdiSeqDoc::Serialize(CArchive& ar)
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


// CSdiSeqDoc ����

#ifdef _DEBUG
void CSdiSeqDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSdiSeqDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSdiSeqDoc ���
