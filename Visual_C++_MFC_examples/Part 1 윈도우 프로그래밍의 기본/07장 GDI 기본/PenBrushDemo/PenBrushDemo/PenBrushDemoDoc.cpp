
// PenBrushDemoDoc.cpp : CPenBrushDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "PenBrushDemo.h"

#include "PenBrushDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPenBrushDemoDoc

IMPLEMENT_DYNCREATE(CPenBrushDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CPenBrushDemoDoc, CDocument)
END_MESSAGE_MAP()


// CPenBrushDemoDoc ����/�Ҹ�

CPenBrushDemoDoc::CPenBrushDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CPenBrushDemoDoc::~CPenBrushDemoDoc()
{
}

BOOL CPenBrushDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CPenBrushDemoDoc serialization

void CPenBrushDemoDoc::Serialize(CArchive& ar)
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


// CPenBrushDemoDoc ����

#ifdef _DEBUG
void CPenBrushDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPenBrushDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPenBrushDemoDoc ���
