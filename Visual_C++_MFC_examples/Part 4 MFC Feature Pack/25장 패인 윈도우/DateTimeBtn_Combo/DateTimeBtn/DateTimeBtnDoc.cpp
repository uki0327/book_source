
// DateTimeBtnDoc.cpp : CDateTimeBtnDoc 클래스의 구현
//

#include "stdafx.h"
#include "DateTimeBtn.h"

#include "DateTimeBtnDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDateTimeBtnDoc

IMPLEMENT_DYNCREATE(CDateTimeBtnDoc, CDocument)

BEGIN_MESSAGE_MAP(CDateTimeBtnDoc, CDocument)
END_MESSAGE_MAP()


// CDateTimeBtnDoc 생성/소멸

CDateTimeBtnDoc::CDateTimeBtnDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CDateTimeBtnDoc::~CDateTimeBtnDoc()
{
}

BOOL CDateTimeBtnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CDateTimeBtnDoc serialization

void CDateTimeBtnDoc::Serialize(CArchive& ar)
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


// CDateTimeBtnDoc 진단

#ifdef _DEBUG
void CDateTimeBtnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDateTimeBtnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDateTimeBtnDoc 명령
