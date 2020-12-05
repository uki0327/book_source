
// GdiplusPolygonView.cpp : CGdiplusPolygonView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusPolygon.h"

#include "GdiplusPolygonDoc.h"
#include "GdiplusPolygonView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusPolygonView

IMPLEMENT_DYNCREATE(CGdiplusPolygonView, CView)

BEGIN_MESSAGE_MAP(CGdiplusPolygonView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusPolygonView ����/�Ҹ�

CGdiplusPolygonView::CGdiplusPolygonView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusPolygonView::~CGdiplusPolygonView()
{
}

BOOL CGdiplusPolygonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusPolygonView �׸���

void CGdiplusPolygonView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusPolygonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusPolygonView �μ�

BOOL CGdiplusPolygonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusPolygonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusPolygonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusPolygonView ����

#ifdef _DEBUG
void CGdiplusPolygonView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusPolygonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusPolygonDoc* CGdiplusPolygonView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusPolygonDoc)));
	return (CGdiplusPolygonDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusPolygonView �޽��� ó����

void CGdiplusPolygonView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen RedPen(Color(255, 192, 0, 0), 2.0f);

	Point points[6] = {Point(30, 30), Point(180, 30), Point(180, 130),
						Point(130, 130), Point(130, 80), Point(30, 80)};
	graphics.DrawPolygon(&RedPen, points, 6);
}


/*
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen BlackPen(Color(255, 0, 0, 0), 20.0f);
	graphics.DrawRectangle(&BlackPen, 30, 30, 100, 100);

	BlackPen.SetLineJoin(LineJoinRound);
	graphics.DrawRectangle(&BlackPen, 170, 30, 100, 100);
*/

/*
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen BlackPen(Color(255, 0, 0, 0), 10.0f);
	graphics.DrawEllipse(&BlackPen, 30, 30, 100, 100);
	graphics.DrawEllipse(&BlackPen, 150, 30, 200, 100);
*/

/*
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen RedPen(Color(255, 192, 0, 0), 2.0f);
	Pen GrayPen(Color(255, 192, 192, 192), 15.0f);

	graphics.DrawEllipse(&GrayPen, 30, 30, 150, 150);

	graphics.DrawArc(&RedPen, 30, 30, 150, 150, 0.0f, 90.0f);
	graphics.DrawPie(&RedPen, 30, 30, 150, 150, 180.0f, 90.0f);
*/