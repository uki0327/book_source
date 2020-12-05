
// GdiplusPathView.cpp : CGdiplusPathView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusPath.h"

#include "GdiplusPathDoc.h"
#include "GdiplusPathView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusPathView

IMPLEMENT_DYNCREATE(CGdiplusPathView, CView)

BEGIN_MESSAGE_MAP(CGdiplusPathView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusPathView ����/�Ҹ�

CGdiplusPathView::CGdiplusPathView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusPathView::~CGdiplusPathView()
{
}

BOOL CGdiplusPathView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusPathView �׸���

void CGdiplusPathView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusPathDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusPathView �μ�

BOOL CGdiplusPathView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusPathView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusPathView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusPathView ����

#ifdef _DEBUG
void CGdiplusPathView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusPathView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusPathDoc* CGdiplusPathView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusPathDoc)));
	return (CGdiplusPathDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusPathView �޽��� ó����

void CGdiplusPathView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen pen(Color(255, 0, 0, 0), 1);
	SolidBrush sbrush(Color(255, 192, 192, 192));

	Region Rgn1(Rect(10, 10, 140, 140));
	Region Rgn2(Rect(80, 50, 140, 140));

	Rgn2.Exclude(&Rgn1);
	graphics.FillRegion(&sbrush, &Rgn2);
}

/*
	path.SetFillMode(FillModeWinding);
	graphics.DrawPath(&pen, &path);
	graphics.FillPath(&sbrush, &path);
*/

/*
	Pen pen(Color(255, 0, 0, 0), 1);
	SolidBrush sbrush(Color(255, 192, 192, 192));
	GraphicsPath path;

	path.AddRectangle(Rect(10, 10, 100, 100));
	path.AddEllipse(Rect(70, 70, 120, 120));
	FontFamily fontFamily(_T("Arial"));
	path.AddString(_T("Test String"), -1,
					&fontFamily,
					FontStyleBold,
					48,
					Point(20, 20),
					NULL);

	graphics.DrawPath(&pen, &path);

	Region Rgn(&path);
	graphics.SetClip(&Rgn);

	Font font(_T("Arial"), 100, FontStyleBold, UnitPixel);
	HatchBrush htbrush(HatchStyleDiagonalBrick,
		Color::Black, Color::Chocolate);
	graphics.DrawString(_T("Test String"), -1, &font,
						PointF(10, 10),
						&htbrush);
*/
