
// GdiplusTransformView.cpp : CGdiplusTransformView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusTransform.h"

#include "GdiplusTransformDoc.h"
#include "GdiplusTransformView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusTransformView

IMPLEMENT_DYNCREATE(CGdiplusTransformView, CView)

BEGIN_MESSAGE_MAP(CGdiplusTransformView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusTransformView ����/�Ҹ�

CGdiplusTransformView::CGdiplusTransformView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusTransformView::~CGdiplusTransformView()
{
}

BOOL CGdiplusTransformView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusTransformView �׸���

void CGdiplusTransformView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusTransformDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusTransformView �μ�

BOOL CGdiplusTransformView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusTransformView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusTransformView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusTransformView ����

#ifdef _DEBUG
void CGdiplusTransformView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusTransformView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusTransformDoc* CGdiplusTransformView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusTransformDoc)));
	return (CGdiplusTransformDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusTransformView �޽��� ó����

void CGdiplusTransformView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Pen pen(Color::Black, 3);
	Pen pen2(Color(255, 192, 0, 0), 3);
	Pen penLine(Color(255, 192, 0, 0), 2);
	penLine.SetDashStyle(DashStyleDot);

	graphics.DrawRectangle(&pen, Rect(30, 30, 150, 100));

	graphics.TranslateTransform(100.0f, 100.0f);
	graphics.RotateTransform(45.0f);

	graphics.DrawLine(&penLine, Point(-200, 0), Point(200, 0));
	graphics.DrawLine(&penLine, Point(0, -200), Point(0, 200));
	graphics.DrawRectangle(&pen2, Rect(30, 30, 150, 100));
}

/*
	Pen pen(Color::Black, 3);
	Pen pen2(Color(255, 192, 0, 0), 3);
	Pen penLine(Color(255, 192, 0, 0), 2);
	penLine.SetDashStyle(DashStyleDot);

	graphics.DrawRectangle(&pen, Rect(30, 30, 150, 100));

	Matrix transformMatrix;
	transformMatrix.Translate(100.0f, 100.0f);
	transformMatrix.Rotate(45.0f);

	graphics.SetTransform(&transformMatrix);
	graphics.DrawLine(&penLine, Point(-200, 0), Point(200, 0));
	graphics.DrawLine(&penLine, Point(0, -200), Point(0, 200));
	graphics.DrawRectangle(&pen2, Rect(30, 30, 150, 100));
*/