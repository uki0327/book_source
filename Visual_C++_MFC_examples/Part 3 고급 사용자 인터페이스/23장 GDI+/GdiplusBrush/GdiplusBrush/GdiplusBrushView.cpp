
// GdiplusBrushView.cpp : CGdiplusBrushView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusBrush.h"

#include "GdiplusBrushDoc.h"
#include "GdiplusBrushView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusBrushView

IMPLEMENT_DYNCREATE(CGdiplusBrushView, CView)

BEGIN_MESSAGE_MAP(CGdiplusBrushView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusBrushView ����/�Ҹ�

CGdiplusBrushView::CGdiplusBrushView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusBrushView::~CGdiplusBrushView()
{
}

BOOL CGdiplusBrushView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusBrushView �׸���

void CGdiplusBrushView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusBrushDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusBrushView �μ�

BOOL CGdiplusBrushView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusBrushView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusBrushView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusBrushView ����

#ifdef _DEBUG
void CGdiplusBrushView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusBrushView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusBrushDoc* CGdiplusBrushView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusBrushDoc)));
	return (CGdiplusBrushDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusBrushView �޽��� ó����

void CGdiplusBrushView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Image image(_T("Texture.jpg"));
	TextureBrush txBrush(&image, WrapModeTile);

	CRect rectClient;
	GetClientRect(&rectClient);
	graphics.FillRectangle(&txBrush,
							0,
							0,
							rectClient.Width() / 2,
							rectClient.Height());

	txBrush.SetWrapMode(WrapModeTileFlipXY);
	graphics.FillRectangle(&txBrush,
							rectClient.Width() / 2,
							0,
							rectClient.Width() / 2,
							rectClient.Height());
}

/////////////////////////////////////////////////////////////////////////
/*
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	SolidBrush solidbrush(Color(255, 0, 0, 192));
	graphics.FillRectangle(&solidbrush, 20, 20, 100, 100);
	graphics.FillEllipse(&solidbrush, 150, 20, 100, 100);
	graphics.FillPie(&solidbrush, 300, 20, 100, 100, 180.0f, 90.0f);
*/

/////////////////////////////////////////////////////////////////////////
/*
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	int nStyle = HatchStyleHorizontal;
	int nCounter = 0;

	for(int y = 0; y < 6; ++y)
	{
		for(int x = 0; x < 10;  ++x)
		{
			HatchBrush hatchbrush(
							(HatchStyle)(nStyle + nCounter),
							Color::Black,
							Color::Transparent);

			graphics.FillRectangle(&hatchbrush,
							x * 50 + 20,
							y * 40 + 20,
							40, 30);

			nCounter++;
			if(nCounter >= HatchStyleMax)			break;
		}
	}
*/

/////////////////////////////////////////////////////////////////////////
/*
	LinearGradientBrush lgBrush(
				Point(0, 0),
				Point(100, 100),
				Color(128, 221, 236, 255),
				Color(255, 86, 125, 204));

	graphics.FillRectangle(&lgBrush, 10, 10, 600, 200);
*/

/*
	LinearGradientBrush lgBrush(
				Rect(10, 10, 200, 200),
				Color(128, 221, 236, 255),
				Color(255, 86, 125, 204),
				LinearGradientModeVertical);

	graphics.FillRectangle(&lgBrush, 10, 10, 200, 200);
*/

/*
	LinearGradientBrush lgBrush(
				Rect(10, 10, 200, 200),
				Color(128, 221, 236, 255),
				Color(255, 86, 125, 204),
				45.0f,
				FALSE);

	graphics.FillRectangle(&lgBrush, 10, 10, 200, 200);
*/

/*
	LinearGradientBrush lgBrush(
				Rect(10, 10, 200, 200),
				Color(128, 221, 236, 255),
				Color(255, 86, 125, 204),
				45.0f,
				FALSE);
*/
/////////////////////////////////////////////////////////////////////////