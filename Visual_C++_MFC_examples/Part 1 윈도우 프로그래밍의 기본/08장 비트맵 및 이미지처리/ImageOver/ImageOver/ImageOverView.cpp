
// ImageOverView.cpp : CImageOverView Ŭ������ ����
//

#include "stdafx.h"
#include "ImageOver.h"

#include "ImageOverDoc.h"
#include "ImageOverView.h"

#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageOverView

IMPLEMENT_DYNCREATE(CImageOverView, CView)

BEGIN_MESSAGE_MAP(CImageOverView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CImageOverView ����/�Ҹ�

CImageOverView::CImageOverView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CImageOverView::~CImageOverView()
{
}

BOOL CImageOverView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CImageOverView �׸���

void CImageOverView::OnDraw(CDC* /*pDC*/)
{
	CImageOverDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CImageOverView �μ�

BOOL CImageOverView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CImageOverView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CImageOverView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CImageOverView ����

#ifdef _DEBUG
void CImageOverView::AssertValid() const
{
	CView::AssertValid();
}

void CImageOverView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageOverDoc* CImageOverView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageOverDoc)));
	return (CImageOverDoc*)m_pDocument;
}
#endif //_DEBUG


// CImageOverView �޽��� ó����

void CImageOverView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CImage ImgFront, ImgBack;
	ImgFront.LoadFromResource(AfxGetInstanceHandle(), IDB_Front);
	ImgBack.LoadFromResource(AfxGetInstanceHandle(), IDB_Background);

	CDC* pDC = CDC::FromHandle(ImgFront.GetDC());
	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 72;
	wsprintf(lf.lfFaceName, _T("%s"), _T("Arial Black"));
	CFont NewFont;
	NewFont.CreateFontIndirect(&lf);
	CFont* pOldFont = pDC->SelectObject(&NewFont);

	pDC->SetTextColor(RGB(0, 0, 0));
	pDC->SetBkMode(TRANSPARENT);
	pDC->TextOut(10, 170, _T("IMAGE OVER")); 
	pDC->TextOut(10, 200, _T("IMAGE OVER")); 

	pDC->SelectObject(pOldFont);
	ImgFront.ReleaseDC();

	ImgBack.BitBlt(dc.m_hDC, 0, 150);
	ImgFront.TransparentBlt(dc.m_hDC, 50, 0, ImgFront.GetWidth(), ImgFront.GetHeight(), RGB(0, 0, 0));
}
