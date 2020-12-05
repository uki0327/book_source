
// BmpDisplayDemoView.cpp : CBmpDisplayDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "BmpDisplayDemo.h"

#include "BmpDisplayDemoDoc.h"
#include "BmpDisplayDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBmpDisplayDemoView

IMPLEMENT_DYNCREATE(CBmpDisplayDemoView, CView)

BEGIN_MESSAGE_MAP(CBmpDisplayDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CBmpDisplayDemoView ����/�Ҹ�

CBmpDisplayDemoView::CBmpDisplayDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CBmpDisplayDemoView::~CBmpDisplayDemoView()
{
}

BOOL CBmpDisplayDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CBmpDisplayDemoView �׸���

void CBmpDisplayDemoView::OnDraw(CDC* /*pDC*/)
{
	CBmpDisplayDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CBmpDisplayDemoView �μ�

BOOL CBmpDisplayDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CBmpDisplayDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CBmpDisplayDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CBmpDisplayDemoView ����

#ifdef _DEBUG
void CBmpDisplayDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CBmpDisplayDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBmpDisplayDemoDoc* CBmpDisplayDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBmpDisplayDemoDoc)));
	return (CBmpDisplayDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CBmpDisplayDemoView �޽��� ó����

void CBmpDisplayDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CDC MemDC;
	BITMAP bmpInfo;
	//ȭ�� DCȭ ȣȯ�Ǵ� �޸� DC�� �����Ѵ�.
	MemDC.CreateCompatibleDC(&dc);
	//��Ʈ�� ���ҽ��� �ε��Ѵ�.
	CBitmap bmp;
	CBitmap* pOldBmp = NULL;
	bmp.LoadBitmap(IDB_Test_Image);
	//�ε��� ��Ʈ���� ������ �˾ƺ���.
	bmp.GetBitmap(&bmpInfo);
	//�޸� DC�� �����Ѵ�.
	pOldBmp = MemDC.SelectObject(&bmp);
	//�޸� DC�� ����ִ� ��Ʈ���� ȭ�� DC�� �����Ͽ� ����Ѵ�.
//	dc.BitBlt(200, 200, 250, 300, &MemDC, 350, 200, SRCCOPY);
	//�޸� DC�� �̹����� �� �� Ȯ���Ͽ� ����Ѵ�.
	dc.StretchBlt(	200, 200,			//��µ� ��ǥ
					250 * 2, 300 * 2,	//���� ���̸� �ι� Ȯ��
					&MemDC,
					350, 200,			//���� �̹��� ��ǥ
					250, 300,			//���� �̹����� ���� ����
					SRCCOPY);

	MemDC.SelectObject(pOldBmp);
}
