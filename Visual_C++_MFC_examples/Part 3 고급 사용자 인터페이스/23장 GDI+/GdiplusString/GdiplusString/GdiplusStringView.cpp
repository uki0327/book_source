
// GdiplusStringView.cpp : CGdiplusStringView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusString.h"

#include "GdiplusStringDoc.h"
#include "GdiplusStringView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusStringView

IMPLEMENT_DYNCREATE(CGdiplusStringView, CView)

BEGIN_MESSAGE_MAP(CGdiplusStringView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusStringView ����/�Ҹ�

CGdiplusStringView::CGdiplusStringView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusStringView::~CGdiplusStringView()
{
}

BOOL CGdiplusStringView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusStringView �׸���

void CGdiplusStringView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusStringDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusStringView �μ�

BOOL CGdiplusStringView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusStringView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusStringView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusStringView ����

#ifdef _DEBUG
void CGdiplusStringView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusStringView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusStringDoc* CGdiplusStringView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusStringDoc)));
	return (CGdiplusStringDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusStringView �޽��� ó����

void CGdiplusStringView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Font font(_T("Arial"), 48, FontStyleBold, UnitPixel);
	SolidBrush sbrush(Color::Black);

	StringFormat format;
	format.SetHotkeyPrefix(HotkeyPrefixShow);

	graphics.DrawString(_T("Test &String"), -1, &font,
						RectF(10, 10, 300, 60),
						&format,
						&sbrush);
}


/*
	LinearGradientBrush lgBrush(Point(0, 0), Point(0, 200),
		Color::WhiteSmoke, Color::Chocolate);
	graphics.FillRectangle(&lgBrush, Rect(0, 0, 600, 150));

	Font font(_T("Arial"), 100, FontStyleBold, UnitPixel);
	PointF ptText(10.0f, 10.0f);
	HatchBrush brush(HatchStyleSmallCheckerBoard,
							Color(255, 128, 0, 0), Color::Transparent);
	graphics.DrawString(_T("Test String"), -1, &font, ptText, &brush);
*/

/*
	Font font(_T("Arial"), 48, FontStyleBold, UnitPixel);
	SolidBrush sbrush(Color::Black);
	Pen pen(Color::Blue);

	StringFormat format;
	format.SetAlignment(StringAlignmentCenter);
	format.SetLineAlignment(StringAlignmentCenter);

	graphics.DrawString(_T("Test String"), -1, &font,
						PointF(250, 10),
						&sbrush);

	graphics.DrawRectangle(&pen, RectF(10, 10, 200, 200));
	graphics.DrawString(_T("Test String"), -1, &font,
						RectF(10, 10, 200, 200),
						&format,
						&sbrush);
*/

/*
	Font font(_T("Arial"), 48, FontStyleBold, UnitPixel);
	SolidBrush sbrush(Color::Black);

	StringFormat format;
	format.SetTrimming( StringTrimmingEllipsisCharacter);

	graphics.DrawString(_T("Test String"), -1, &font,
						RectF(10, 10, 200, 50),
						&format,
						&sbrush);
*/