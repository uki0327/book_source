// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://msdn.microsoft.com/officeui.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// Office2007StyleDoc.cpp : COffice2007StyleDoc Ŭ������ ����
//

#include "stdafx.h"
#include "Office2007Style.h"

#include "Office2007StyleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COffice2007StyleDoc

IMPLEMENT_DYNCREATE(COffice2007StyleDoc, CDocument)

BEGIN_MESSAGE_MAP(COffice2007StyleDoc, CDocument)
END_MESSAGE_MAP()


// COffice2007StyleDoc ����/�Ҹ�

COffice2007StyleDoc::COffice2007StyleDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

COffice2007StyleDoc::~COffice2007StyleDoc()
{
}

BOOL COffice2007StyleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// COffice2007StyleDoc serialization

void COffice2007StyleDoc::Serialize(CArchive& ar)
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


// COffice2007StyleDoc ����

#ifdef _DEBUG
void COffice2007StyleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COffice2007StyleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// COffice2007StyleDoc ���
