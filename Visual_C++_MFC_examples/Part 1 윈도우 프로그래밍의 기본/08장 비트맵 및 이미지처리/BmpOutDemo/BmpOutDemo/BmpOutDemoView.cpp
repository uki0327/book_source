
// BmpOutDemoView.cpp : CBmpOutDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "BmpOutDemo.h"

#include "BmpOutDemoDoc.h"
#include "BmpOutDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBmpOutDemoView

IMPLEMENT_DYNCREATE(CBmpOutDemoView, CView)

BEGIN_MESSAGE_MAP(CBmpOutDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CBmpOutDemoView ����/�Ҹ�

CBmpOutDemoView::CBmpOutDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CBmpOutDemoView::~CBmpOutDemoView()
{
}

BOOL CBmpOutDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CBmpOutDemoView �׸���

void CBmpOutDemoView::OnDraw(CDC* /*pDC*/)
{
	CBmpOutDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CBmpOutDemoView �μ�

BOOL CBmpOutDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CBmpOutDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CBmpOutDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CBmpOutDemoView ����

#ifdef _DEBUG
void CBmpOutDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CBmpOutDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBmpOutDemoDoc* CBmpOutDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBmpOutDemoDoc)));
	return (CBmpOutDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CBmpOutDemoView �޽��� ó����

void CBmpOutDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CDC MemDC;
	BITMAP bmpInfo;
	MemDC.CreateCompatibleDC(&dc);

	CBitmap bmp;
	CBitmap* pOldBmp = NULL;
	bmp.LoadBitmap(IDB_Test_Image);

	bmp.GetBitmap(&bmpInfo);
	pOldBmp = MemDC.SelectObject(&bmp);

	dc.StretchBlt(20, 20,
				bmpInfo.bmWidth * 2, bmpInfo.bmHeight * 2,
				&MemDC,
				0, 0,
				bmpInfo.bmWidth, bmpInfo.bmHeight,
				SRCCOPY);			//������ ���� ��.

	//�� ������ ���ڸ� �����ϸ� StretchBlt() �Լ��� ���� ����. 
	BLENDFUNCTION bf;
	bf.BlendOp = AC_SRC_OVER;
	bf.BlendFlags = 0;
	bf.SourceConstantAlpha = 50;	//0: ���� 255: ������
	bf.AlphaFormat = 0;
	//������ �̹����� ����Ѵ�.
	dc.AlphaBlend(20, 100,
				bmpInfo.bmWidth * 2, bmpInfo.bmHeight * 2,
				&MemDC,
				0, 0,
				bmpInfo.bmWidth, bmpInfo.bmHeight,
				bf);				//BLENDFUNCTION ����ü

	MemDC.SelectObject(pOldBmp);
}


/*	dc.TransparentBlt(20, 100,
				bmpInfo.bmWidth * 2, bmpInfo.bmHeight * 2,
				&MemDC,
				0, 0,
				bmpInfo.bmWidth, bmpInfo.bmHeight,
				RGB(0, 0, 0));		//����ó���� ������ RGB��.
*/