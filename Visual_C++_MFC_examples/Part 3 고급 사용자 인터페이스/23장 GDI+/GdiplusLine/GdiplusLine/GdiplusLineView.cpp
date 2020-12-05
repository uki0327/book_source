
// GdiplusLineView.cpp : CGdiplusLineView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusLine.h"

#include "GdiplusLineDoc.h"
#include "GdiplusLineView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusLineView

IMPLEMENT_DYNCREATE(CGdiplusLineView, CView)

BEGIN_MESSAGE_MAP(CGdiplusLineView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusLineView ����/�Ҹ�

CGdiplusLineView::CGdiplusLineView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusLineView::~CGdiplusLineView()
{
}

BOOL CGdiplusLineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusLineView �׸���

void CGdiplusLineView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusLineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusLineView �μ�

BOOL CGdiplusLineView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusLineView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusLineView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusLineView ����

#ifdef _DEBUG
void CGdiplusLineView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusLineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusLineDoc* CGdiplusLineView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusLineDoc)));
	return (CGdiplusLineDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusLineView �޽��� ó����

void CGdiplusLineView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen RedPen(Color(255, 255, 0, 0), 2.0f);
	Pen GreenPen(Color(255, 0, 255, 0), 2.0f);
	Pen BluePen(Color(255, 0, 0, 255), 2.0f);

	Point points[6] = {Point(10, 150), Point(110, 10), Point(170, 250),
						Point(220, 120), Point(270, 150), Point(350, 150)};
	graphics.DrawCurve(&RedPen, points, 6, 0.0f);
	graphics.DrawCurve(&GreenPen, points, 6, 0.5f);
	graphics.DrawCurve(&BluePen, points, 6, 1.0f);
}

/*
	Graphics graphics(dc);

	Pen BluePen(Color(255, 0, 0, 255), 20.0f);
	Pen BlackPen(Color(128, 0, 0, 0), 20.0f);

	graphics.DrawLine(&BluePen, Point(10,  50), Point(210, 50));
	graphics.DrawLine(&BlackPen, Point(20,  60), Point(220, 60));
*/

/*
	Graphics graphics(dc);

	Pen BluePen(Color(255, 0, 0, 255), 10.0f);

	Point point1(30, 10);
	Point point2(30, 110);
	Point point3(230, 20);
	Point point4(230, 120);
	Point points[4] = {point1, point2, point3, point4};

	BluePen.SetLineJoin(LineJoinRound);
//	BluePen.SetDashStyle(DashStyleDot);
	BluePen.SetStartCap(LineCapRoundAnchor);
	BluePen.SetEndCap(LineCapArrowAnchor);
	graphics.DrawLines(&BluePen, points, 4);
*/

