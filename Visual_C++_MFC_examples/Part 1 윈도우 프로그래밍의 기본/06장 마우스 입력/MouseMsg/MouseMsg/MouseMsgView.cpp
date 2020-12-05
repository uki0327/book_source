
// MouseMsgView.cpp : CMouseMsgView Ŭ������ ����
//

#include "stdafx.h"
#include "MouseMsg.h"

#include "MouseMsgDoc.h"
#include "MouseMsgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMouseMsgView

IMPLEMENT_DYNCREATE(CMouseMsgView, CView)

BEGIN_MESSAGE_MAP(CMouseMsgView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_MOUSEWHEEL()
END_MESSAGE_MAP()

// CMouseMsgView ����/�Ҹ�

CMouseMsgView::CMouseMsgView()
{
	m_ptMouse	= CPoint(0, 0);
	m_ptLeft	= CPoint(0, 0);
	m_ptRight	= CPoint(0, 0);
}

CMouseMsgView::~CMouseMsgView()
{
}

BOOL CMouseMsgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CMouseMsgView �׸���

void CMouseMsgView::OnDraw(CDC* /*pDC*/)
{
	CMouseMsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CMouseMsgView �μ�

BOOL CMouseMsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CMouseMsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CMouseMsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CMouseMsgView ����

#ifdef _DEBUG
void CMouseMsgView::AssertValid() const
{
	CView::AssertValid();
}

void CMouseMsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMouseMsgDoc* CMouseMsgView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMouseMsgDoc)));
	return (CMouseMsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CMouseMsgView �޽��� ó����

void CMouseMsgView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CString strData = _T("");

	//WM_MOUSEMOVE
	strData.Format(_T("X:%03d, Y:%03d"), m_ptMouse.x, m_ptMouse.y);
	dc.TextOut(10, 10, strData);

	//WM_LBUTTONDOWN
	strData.Format(_T("WM_LBUTTONDOWN X:%03d, Y:%03d"),
										m_ptLeft.x, m_ptLeft.y);
	dc.TextOut(10, 30, strData);

	//WM_RBUTTONDOWN
	strData.Format(_T("WM_RBUTTONDOWNX:%03d, Y:%03d"),
										m_ptRight.x, m_ptRight.y);
	dc.TextOut(10, 50, strData);
}

void CMouseMsgView::OnMouseMove(UINT nFlags, CPoint point)
{
//	if((nFlags & MK_LBUTTON) == MK_LBUTTON &&
//		(nFlags & MK_RBUTTON) == MK_RBUTTON)
	{
		m_ptMouse = point;
		RedrawWindow();
	}

	CView::OnMouseMove(nFlags, point);
}

void CMouseMsgView::OnLButtonDown(UINT nFlags, CPoint point)
{
	m_ptLeft = point;
	RedrawWindow();

	CView::OnLButtonDown(nFlags, point);
}

void CMouseMsgView::OnRButtonDown(UINT nFlags, CPoint point)
{
	m_ptRight = point;
	RedrawWindow();

	CView::OnRButtonDown(nFlags, point);
}

BOOL CMouseMsgView::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	CString strTmp = _T("");
	strTmp.Format(TEXT("OnMouseWheel() zDelta : %d\n"), zDelta);
	TRACE(strTmp);

	return CView::OnMouseWheel(nFlags, zDelta, pt);
}
