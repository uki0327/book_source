
// CommandDemoView.cpp : CCommandDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "CommandDemo.h"

#include "CommandDemoDoc.h"
#include "CommandDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCommandDemoView

IMPLEMENT_DYNCREATE(CCommandDemoView, CView)

BEGIN_MESSAGE_MAP(CCommandDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_CREATE()
ON_WM_RBUTTONDOWN()
	ON_COMMAND(ID_Menu_Start, &CCommandDemoView::OnMenuStart)
END_MESSAGE_MAP()

// CCommandDemoView ����/�Ҹ�

CCommandDemoView::CCommandDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CCommandDemoView::~CCommandDemoView()
{
}

BOOL CCommandDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CCommandDemoView �׸���

void CCommandDemoView::OnDraw(CDC* /*pDC*/)
{
	CCommandDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CCommandDemoView �μ�

BOOL CCommandDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CCommandDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CCommandDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CCommandDemoView ����

#ifdef _DEBUG
void CCommandDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CCommandDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCommandDemoDoc* CCommandDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCommandDemoDoc)));
	return (CCommandDemoDoc*)m_pDocument;
}
#endif //_DEBUG


void CCommandDemoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	//CMainFrame �������� �޴��� ���� �����͸� �����´�.
	CMenu* pMainMenu = AfxGetMainWnd()->GetMenu();
	//���� �޴� �߿��� 4�� �ε����� ���� �޴��� ���� �����͸� �����´�.
	CMenu* pSubMenu = pMainMenu->GetSubMenu(4);

	//��ũ�� �������� ��ǥ ��ȯ
	CPoint ptMenu = point;
	ClientToScreen(&ptMenu);
	//WM_COMMAND �޽����� ���� ������ �����쿡 ���޵ǵ���
	//�˾� �޴� �����츦 ����Ѵ�.
	pSubMenu->TrackPopupMenu(TPM_LEFTBUTTON | TPM_LEFTALIGN,
					ptMenu.x, ptMenu.y,
					this);

	CView::OnRButtonDown(nFlags, point);
}

void CCommandDemoView::OnMenuStart()
{
	AfxMessageBox(_T("���� �޴��� �����Ͽ����ϴ�. - CCommandDemoView"));
}
