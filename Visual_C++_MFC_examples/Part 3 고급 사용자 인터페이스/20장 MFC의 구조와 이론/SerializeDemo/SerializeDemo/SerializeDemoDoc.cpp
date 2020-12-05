
// SerializeDemoDoc.cpp : CSerializeDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "SerializeDemo.h"

#include "SerializeDemoDoc.h"
#include "SerializeDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSerializeDemoDoc

IMPLEMENT_DYNCREATE(CSerializeDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CSerializeDemoDoc, CDocument)
END_MESSAGE_MAP()


// CSerializeDemoDoc ����/�Ҹ�

CSerializeDemoDoc::CSerializeDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CSerializeDemoDoc::~CSerializeDemoDoc()
{
}

BOOL CSerializeDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	reinterpret_cast<CEditView*>(m_viewList.GetHead())->SetWindowText(NULL);

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CSerializeDemoDoc serialization

void CSerializeDemoDoc::Serialize(CArchive& ar)
{
//	reinterpret_cast<CEditView*>(m_viewList.GetHead())->SerializeRaw(ar);

	CSerializeDemoView* pEditView = (CSerializeDemoView*)m_viewList.GetHead();
	pEditView->Serialize(ar);
}


// CSerializeDemoDoc ����

#ifdef _DEBUG
void CSerializeDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSerializeDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSerializeDemoDoc ���
