
// ImgOutDemoDoc.cpp : CImgOutDemoDoc 클래스의 구현
//

#include "stdafx.h"
#include "ImgOutDemo.h"

#include "ImgOutDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImgOutDemoDoc

IMPLEMENT_DYNCREATE(CImgOutDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CImgOutDemoDoc, CDocument)
END_MESSAGE_MAP()


// CImgOutDemoDoc 생성/소멸

CImgOutDemoDoc::CImgOutDemoDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CImgOutDemoDoc::~CImgOutDemoDoc()
{
}

BOOL CImgOutDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CImgOutDemoDoc serialization

void CImgOutDemoDoc::Serialize(CArchive& ar)
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


// CImgOutDemoDoc 진단

#ifdef _DEBUG
void CImgOutDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImgOutDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImgOutDemoDoc 명령
