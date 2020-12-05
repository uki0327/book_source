
// ImgOutDemoView.cpp : CImgOutDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "ImgOutDemo.h"

#include "ImgOutDemoDoc.h"
#include "ImgOutDemoView.h"

#include <atlimage.h>
#include <comdef.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImgOutDemoView

IMPLEMENT_DYNCREATE(CImgOutDemoView, CView)

BEGIN_MESSAGE_MAP(CImgOutDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CImgOutDemoView ����/�Ҹ�

CImgOutDemoView::CImgOutDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CImgOutDemoView::~CImgOutDemoView()
{
}

BOOL CImgOutDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CImgOutDemoView �׸���

void CImgOutDemoView::OnDraw(CDC* /*pDC*/)
{
	CImgOutDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CImgOutDemoView �μ�

BOOL CImgOutDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CImgOutDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CImgOutDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CImgOutDemoView ����

#ifdef _DEBUG
void CImgOutDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CImgOutDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImgOutDemoDoc* CImgOutDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImgOutDemoDoc)));
	return (CImgOutDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CImgOutDemoView �޽��� ó����

void CImgOutDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CImage Image;
	//��Ʈ�� ���ҽ��� �ε��Ͽ� DIB�� �����.
	Image.LoadFromResource(AfxGetInstanceHandle(), IDB_Image_Test);

	//��Ʈ�� �̹����� ���� DC�� �����Ѵ�.
	CDC* pDC = CDC::FromHandle(Image.GetDC());
	//�� �̹���DC�� ���ڿ��� ����Ѵ�.
	pDC->SetBkMode(TRANSPARENT);
	pDC->TextOut(200, 30, TEXT("CImage sample!"));
	Image.ReleaseDC();

	//�̹����� ȭ��DC�� ����Ѵ�.
	Image.BitBlt(dc.m_hDC, 0, 0);

	//ȭ��DC�� ���ڿ��� ����Ѵ�.
//	dc.SetBkMode(TRANSPARENT);
//	dc.TextOut(200, 30, TEXT("CImage sample!"));
}
