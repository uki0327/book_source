
// VirtualButtonDoc.cpp : CVirtualButtonDoc Ŭ������ ����
//

#include "stdafx.h"
#include "VirtualButton.h"

#include "VirtualButtonDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVirtualButtonDoc

IMPLEMENT_DYNCREATE(CVirtualButtonDoc, CDocument)

BEGIN_MESSAGE_MAP(CVirtualButtonDoc, CDocument)
END_MESSAGE_MAP()


// CVirtualButtonDoc ����/�Ҹ�

CVirtualButtonDoc::CVirtualButtonDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CVirtualButtonDoc::~CVirtualButtonDoc()
{
}

BOOL CVirtualButtonDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CVirtualButtonDoc serialization

void CVirtualButtonDoc::Serialize(CArchive& ar)
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


// CVirtualButtonDoc ����

#ifdef _DEBUG
void CVirtualButtonDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVirtualButtonDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CVirtualButtonDoc ���
