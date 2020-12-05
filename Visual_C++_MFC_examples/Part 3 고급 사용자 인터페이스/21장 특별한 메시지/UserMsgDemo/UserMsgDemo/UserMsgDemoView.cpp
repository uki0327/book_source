
// UserMsgDemoView.cpp : CUserMsgDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "UserMsgDemo.h"

#include "UserMsgDemoDoc.h"
#include "UserMsgDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CUserMsgDemoView

IMPLEMENT_DYNCREATE(CUserMsgDemoView, CView)

BEGIN_MESSAGE_MAP(CUserMsgDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_MESSAGE(UM_TESTMESSAGE, &CUserMsgDemoView::OnTestMessage)
END_MESSAGE_MAP()

// CUserMsgDemoView ����/�Ҹ�

CUserMsgDemoView::CUserMsgDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CUserMsgDemoView::~CUserMsgDemoView()
{
}

BOOL CUserMsgDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CUserMsgDemoView �׸���

void CUserMsgDemoView::OnDraw(CDC* /*pDC*/)
{
	CUserMsgDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CUserMsgDemoView �μ�

BOOL CUserMsgDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CUserMsgDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CUserMsgDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CUserMsgDemoView ����

#ifdef _DEBUG
void CUserMsgDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CUserMsgDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUserMsgDemoDoc* CUserMsgDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUserMsgDemoDoc)));
	return (CUserMsgDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CUserMsgDemoView �޽��� ó����

LRESULT CUserMsgDemoView::OnTestMessage(WPARAM wParam, LPARAM lParam)
{
	AfxMessageBox(_T("CUserMsgDemoView::OnTestMessage()"));
	return 0;
}
