
// PenBrushDemoDoc.cpp : CPenBrushDemoDoc 클래스의 구현
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


// CPenBrushDemoDoc 생성/소멸

CPenBrushDemoDoc::CPenBrushDemoDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CPenBrushDemoDoc::~CPenBrushDemoDoc()
{
}

BOOL CPenBrushDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CPenBrushDemoDoc serialization

void CPenBrushDemoDoc::Serialize(CArchive& ar)
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


// CPenBrushDemoDoc 진단

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


// CPenBrushDemoDoc 명령
