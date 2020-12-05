
// HelloSdiDoc.cpp : CHelloSdiDoc Ŭ������ ����
//

#include "stdafx.h"
#include "HelloSdi.h"

#include "HelloSdiDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHelloSdiDoc

IMPLEMENT_DYNCREATE(CHelloSdiDoc, CDocument)

BEGIN_MESSAGE_MAP(CHelloSdiDoc, CDocument)
END_MESSAGE_MAP()


// CHelloSdiDoc ����/�Ҹ�

CHelloSdiDoc::CHelloSdiDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CHelloSdiDoc::~CHelloSdiDoc()
{
}

BOOL CHelloSdiDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	reinterpret_cast<CEditView*>(m_viewList.GetHead())->SetWindowText(NULL);

//	AfxMessageBox(TEXT("���ο� �� ������ �������ϴ�."));
	SetModifiedFlag(TRUE);

	return TRUE;
}




// CHelloSdiDoc serialization

void CHelloSdiDoc::Serialize(CArchive& ar)
{
	// CEditView���� ��� serialization�� ó���ϴ� edit ��Ʈ���� ��� �ֽ��ϴ�.
	reinterpret_cast<CEditView*>(m_viewList.GetHead())->SerializeRaw(ar);
}


// CHelloSdiDoc ����

#ifdef _DEBUG
void CHelloSdiDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CHelloSdiDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CHelloSdiDoc ���

BOOL CHelloSdiDoc::OnOpenDocument(LPCTSTR lpszPathName)
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;

	AfxMessageBox(TEXT("����ڰ� ������ �������ϴ�."));

	return TRUE;
}
