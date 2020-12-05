
// TransparentDemoView.cpp : CTransparentDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "TransparentDemo.h"

#include "TransparentDemoDoc.h"
#include "TransparentDemoView.h"

#include "BufferDC.h"
#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTransparentDemoView

IMPLEMENT_DYNCREATE(CTransparentDemoView, CView)

BEGIN_MESSAGE_MAP(CTransparentDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
	ON_WM_CREATE()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CTransparentDemoView ����/�Ҹ�

CTransparentDemoView::CTransparentDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTransparentDemoView::~CTransparentDemoView()
{
}

BOOL CTransparentDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTransparentDemoView �׸���

void CTransparentDemoView::OnDraw(CDC* /*pDC*/)
{
	CTransparentDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTransparentDemoView �μ�

BOOL CTransparentDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTransparentDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTransparentDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CTransparentDemoView ����

#ifdef _DEBUG
void CTransparentDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CTransparentDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTransparentDemoDoc* CTransparentDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTransparentDemoDoc)));
	return (CTransparentDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CTransparentDemoView �޽��� ó����

BOOL CTransparentDemoView::OnEraseBkgnd(CDC* pDC)
{
	CRect Rect;
	GetClientRect(&Rect);
	pDC->FillSolidRect(&Rect, RGB(255, 255, 255));

	CImage ImageBackground;
	ImageBackground.LoadFromResource(AfxGetInstanceHandle(), IDB_Background);
	ImageBackground.BitBlt(pDC->m_hDC, 0, 0);

	return TRUE;
//	return CView::OnEraseBkgnd(pDC);
}

void CTransparentDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 16;
	lf.lfWeight	= FW_BOLD;
	wsprintf(lf.lfFaceName, _T("%s"), _T("Arial"));

	CFont NewFont;
	NewFont.CreateFontIndirect(&lf);
	CFont* pOldFont = dc.SelectObject(&NewFont);

	dc.SetBkMode(TRANSPARENT);
	for(int i = 0; i < 5; ++i)
	{
		dc.SetTextColor(RGB(0, 0, 0));
		dc.TextOut(32, 21 * i + 22, _T("TestString TestString"));
		dc.SetTextColor(RGB(255, 255, 255));
		dc.TextOut(31, 21 * i + 21, _T("TestString TestString"));
	}

	dc.SelectObject(pOldFont);
}

int CTransparentDemoView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_wndChild.Create(_T("TRANSPARENT_WINDOW_DEOM"), _T(""),
					WS_CHILD | WS_VISIBLE | WS_BORDER,
					CRect(120, 50, 240, 170), this, 1234);

	return 0;
}

void CTransparentDemoView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CPoint ptChild;
	CRect Rect;

	m_wndChild.GetWindowRect(&Rect);
	ptChild.x = Rect.left;
	ptChild.y = Rect.top;

	ScreenToClient(&ptChild);

	switch(nChar)
	{
	case VK_LEFT:
		ptChild.x -= 10;
		break;

	case VK_RIGHT:
		ptChild.x += 10;
		break;
	}

	m_wndChild.SetWindowPos(NULL, ptChild.x, ptChild.y, 0, 0,
						SWP_SHOWWINDOW | SWP_NOZORDER | SWP_NOSIZE);
	m_wndChild.RedrawWindow();

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
