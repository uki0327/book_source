
// NewToolBarDoc.cpp : CNewToolBarDoc 클래스의 구현
//

#include "stdafx.h"
#include "NewToolBar.h"

#include "NewToolBarDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNewToolBarDoc

IMPLEMENT_DYNCREATE(CNewToolBarDoc, CDocument)

BEGIN_MESSAGE_MAP(CNewToolBarDoc, CDocument)
END_MESSAGE_MAP()


// CNewToolBarDoc 생성/소멸

CNewToolBarDoc::CNewToolBarDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CNewToolBarDoc::~CNewToolBarDoc()
{
}

BOOL CNewToolBarDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CNewToolBarDoc serialization

void CNewToolBarDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 여기에 저장 코드를 추가합니다.
	}
	else
	{
		// TODO: 여기에 로딩 코드를 추가합니다.
	}
}


// CNewToolBarDoc 진단

#ifdef _DEBUG
void CNewToolBarDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNewToolBarDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CNewToolBarDoc 명령
