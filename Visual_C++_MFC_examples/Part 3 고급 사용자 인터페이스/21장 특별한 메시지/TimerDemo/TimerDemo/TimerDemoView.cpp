
// TimerDemoView.cpp : CTimerDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "TimerDemo.h"

#include "TimerDemoDoc.h"
#include "TimerDemoView.h"

#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTimerDemoView

IMPLEMENT_DYNCREATE(CTimerDemoView, CView)

BEGIN_MESSAGE_MAP(CTimerDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_CLOSE()
	ON_WM_TIMER()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTimerDemoView ����/�Ҹ�

CTimerDemoView::CTimerDemoView()
{
	m_nImageX = 0;
	m_nImageY = 0;
}

CTimerDemoView::~CTimerDemoView()
{
}

BOOL CTimerDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTimerDemoView �׸���

void CTimerDemoView::OnDraw(CDC* /*pDC*/)
{
	CTimerDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTimerDemoView �μ�

BOOL CTimerDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTimerDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTimerDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CTimerDemoView ����

#ifdef _DEBUG
void CTimerDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CTimerDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTimerDemoDoc* CTimerDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTimerDemoDoc)));
	return (CTimerDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CTimerDemoView �޽��� ó����

int CTimerDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	if(SetTimer(10, 1000, NULL) != 10)
	{
		AfxMessageBox(_T("ERROR: Failed to set timer!"));
	}

	srand( (unsigned)time( NULL ) );
	return 0;
}

void CTimerDemoView::OnClose()
{
	KillTimer(10);

	CView::OnClose();
}

void CTimerDemoView::OnTimer(UINT_PTR nIDEvent)
{
	if(nIDEvent == 10)
	{
		CRect Rect;
		GetClientRect(&Rect);

		if(Rect.Width() != 0 && Rect.Height() != 0)
		{
			m_nImageX = rand() % Rect.Width();
			m_nImageY = rand() % Rect.Height();
			RedrawWindow(NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
		}
	}

	CView::OnTimer(nIDEvent);
}

void CTimerDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CRect Rect;
	GetClientRect(&Rect);
	dc.FillSolidRect(&Rect, RGB(0, 0, 0));

	CImage Image;
	Image.LoadFromResource(AfxGetInstanceHandle(), IDB_WinXP);
	Image.BitBlt(dc.m_hDC, m_nImageX, m_nImageY, SRCCOPY);
}
