
// PagerDemoView.cpp : CPagerDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "PagerDemo.h"

#include "PagerDemoDoc.h"
#include "PagerDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPagerDemoView

IMPLEMENT_DYNCREATE(CPagerDemoView, CView)

BEGIN_MESSAGE_MAP(CPagerDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_NOTIFY(PGN_CALCSIZE, 1234, &CPagerDemoView::OnCalcSize)
END_MESSAGE_MAP()

// CPagerDemoView ����/�Ҹ�

CPagerDemoView::CPagerDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPagerDemoView::~CPagerDemoView()
{
}

BOOL CPagerDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPagerDemoView �׸���

void CPagerDemoView::OnDraw(CDC* /*pDC*/)
{
	CPagerDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CPagerDemoView �μ�

BOOL CPagerDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CPagerDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPagerDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CPagerDemoView ����

#ifdef _DEBUG
void CPagerDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CPagerDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPagerDemoDoc* CPagerDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPagerDemoDoc)));
	return (CPagerDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CPagerDemoView �޽��� ó����

int CPagerDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_wndPager.Create(WS_VISIBLE | WS_CHILD | PGS_HORZ,
						CRect(0, 0, 100, 32), this, 1234); 

	m_wndToolBar.CreateEx(&m_wndPager);
	m_wndToolBar.LoadToolBar(IDR_MAINFRAME);

	m_wndPager.SetChild(m_wndToolBar.m_hWnd);
	m_wndPager.SetButtonSize(10);
	m_wndPager.SetBorder(0);

	return 0;
}

void CPagerDemoView::OnCalcSize(NMHDR * pNotifyStruct, LRESULT * result)
{
	LPNMPGCALCSIZE pNMPGCALCSIZE = (LPNMPGCALCSIZE)pNotifyStruct;
	if(pNMPGCALCSIZE->dwFlag == PGF_CALCWIDTH)
	{
		SIZE size;
		m_wndToolBar.SendMessage(TB_GETMAXSIZE, 0, (LPARAM)&size);
		pNMPGCALCSIZE->iWidth = size.cx;
	}
}