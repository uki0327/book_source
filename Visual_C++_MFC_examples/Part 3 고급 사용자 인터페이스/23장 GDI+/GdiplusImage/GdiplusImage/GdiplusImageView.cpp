
// GdiplusImageView.cpp : CGdiplusImageView Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusImage.h"

#include "GdiplusImageDoc.h"
#include "GdiplusImageView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusImageView

IMPLEMENT_DYNCREATE(CGdiplusImageView, CView)

BEGIN_MESSAGE_MAP(CGdiplusImageView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CGdiplusImageView ����/�Ҹ�

CGdiplusImageView::CGdiplusImageView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CGdiplusImageView::~CGdiplusImageView()
{
}

BOOL CGdiplusImageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CGdiplusImageView �׸���

void CGdiplusImageView::OnDraw(CDC* /*pDC*/)
{
	CGdiplusImageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CGdiplusImageView �μ�

BOOL CGdiplusImageView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CGdiplusImageView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CGdiplusImageView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CGdiplusImageView ����

#ifdef _DEBUG
void CGdiplusImageView::AssertValid() const
{
	CView::AssertValid();
}

void CGdiplusImageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGdiplusImageDoc* CGdiplusImageView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGdiplusImageDoc)));
	return (CGdiplusImageDoc*)m_pDocument;
}
#endif //_DEBUG


// CGdiplusImageView �޽��� ó����

void CGdiplusImageView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Bitmap bmp(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_Sample));
	CachedBitmap cachedbmp(&bmp, &graphics);

	CString strTmp = _T("");
	LARGE_INTEGER	lnFreq, lnStart, lnEnd, lnResult;
	::QueryPerformanceFrequency(&lnFreq);

	::QueryPerformanceCounter(&lnStart);
	graphics.DrawImage(&bmp, 10, 10);
	::QueryPerformanceCounter(&lnEnd);
	lnResult.QuadPart = (lnEnd.QuadPart - lnStart.QuadPart) * 1000000 / lnFreq.QuadPart;
	strTmp.Format(_T("DrawImage() counter %u"), lnResult.QuadPart);
	dc.TextOut(10, 10, strTmp);

	::QueryPerformanceCounter(&lnStart);
	graphics.DrawCachedBitmap(&cachedbmp, bmp.GetWidth() + 20, 10);
	::QueryPerformanceCounter(&lnEnd);
	lnResult.QuadPart = (lnEnd.QuadPart - lnStart.QuadPart) * 1000000 / lnFreq.QuadPart;
	strTmp.Format(_T("DrawCachedBitmap() counter %u"), lnResult.QuadPart);
	dc.TextOut(bmp.GetWidth() + 20, 10, strTmp);
}

/*
	Image image(_T("Woojin.jpg"));
	graphics.DrawImage(&image, 0, 0);
*/

/*
	graphics.DrawImage(&image, 0, 0);

	graphics.DrawImage(&image,
					100, 50,
					image.GetWidth() / 4,
					image.GetHeight() / 4);
*/

/*
	Image image(_T("Woojin.jpg"));

	Point points[] = {
		Point(200, 0),
		Point(image.GetWidth(), 0),
		Point(0, image.GetHeight())
	};

	graphics.DrawImage(&image, points, 3);
*/

/*
	Bitmap bmp(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_Sample));
	CachedBitmap cachedbmp(&bmp, &graphics);

	graphics.DrawImage(&bmp, 10, 10);
	graphics.DrawCachedBitmap(&cachedbmp, bmp.GetWidth() + 20, 10);
*/

/*
	Graphics graphics(dc);
	graphics.SetSmoothingMode(SmoothingModeHighQuality);

	Bitmap bmp(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDB_Sample));
	CachedBitmap cachedbmp(&bmp, &graphics);

	CString strTmp = _T("");
	LARGE_INTEGER	lnFreq, lnStart, lnEnd, lnResult;
	::QueryPerformanceFrequency(&lnFreq);

	::QueryPerformanceCounter(&lnStart);
	graphics.DrawImage(&bmp, 10, 10);
	::QueryPerformanceCounter(&lnEnd);
	lnResult.QuadPart = (lnEnd.QuadPart - lnStart.QuadPart) * 1000000 / lnFreq.QuadPart;
	strTmp.Format(_T("DrawImage() counter %u\n"), lnResult.QuadPart);
	OutputDebugString(strTmp);

	::QueryPerformanceCounter(&lnStart);
	graphics.DrawCachedBitmap(&cachedbmp, bmp.GetWidth() + 20, 10);
	::QueryPerformanceCounter(&lnEnd);
	lnResult.QuadPart = (lnEnd.QuadPart - lnStart.QuadPart) * 1000000 / lnFreq.QuadPart;
	strTmp.Format(_T("DrawCachedBitmap() counter %u\n"), lnResult.QuadPart);
*/