
// PenBrushDemoView.cpp : CPenBrushDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "PenBrushDemo.h"

#include "PenBrushDemoDoc.h"
#include "PenBrushDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPenBrushDemoView

IMPLEMENT_DYNCREATE(CPenBrushDemoView, CView)

BEGIN_MESSAGE_MAP(CPenBrushDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CPenBrushDemoView ����/�Ҹ�

CPenBrushDemoView::CPenBrushDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPenBrushDemoView::~CPenBrushDemoView()
{
}

BOOL CPenBrushDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPenBrushDemoView �׸���

void CPenBrushDemoView::OnDraw(CDC* /*pDC*/)
{
	CPenBrushDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CPenBrushDemoView �μ�

BOOL CPenBrushDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CPenBrushDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPenBrushDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CPenBrushDemoView ����

#ifdef _DEBUG
void CPenBrushDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CPenBrushDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPenBrushDemoDoc* CPenBrushDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPenBrushDemoDoc)));
	return (CPenBrushDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CPenBrushDemoView �޽��� ó����

void CPenBrushDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CBrush NewBrush;
	//��Ʈ�� Ŭ���� ��ü�� �����Ͽ� ��Ʈ�� ���ҽ� �ε�.
	CBitmap Bmp;
	Bmp.LoadBitmap(IDB_BITMAP1);
	//�ε��� ��Ʈ�� ���ҽ��� ���� �귯�� ����.
	NewBrush.CreatePatternBrush(&Bmp);
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	//Ŭ���̾�Ʈ �� Ŭ������ Ŭ���̾�Ʈ ���� ũ�⸦ �˾Ƴ���
	//�� ũ�⿡ �ش��ϴ� �׸� �׸�.
	CRect Rect;
	GetClientRect(&Rect);
	dc.Rectangle(&Rect);

	dc.SelectObject(pOldBrush);

	DWORD style[] = {6, 3};
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(255, 0, 0);

	CPen NewPen;
	NewPen.CreatePen(PS_GEOMETRIC | PS_USERSTYLE | PS_ENDCAP_FLAT,
						10, &lb, 2, style);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	//�β��� 20�ȼ��� ���� �ߴ´�.
	dc.MoveTo(40, 40);		//���� ��ǥ
	dc.LineTo(240, 40);		//�� ��ǥ

	dc.SelectObject(pOldPen);
}

/*
	CPen NewPen(PS_SOLID, 20, RGB(192, 192, 192);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	//�β��� 20�ȼ��� ���� �ߴ´�.
	dc.MoveTo(40, 40);		//���� ��ǥ
	dc.LineTo(240, 40);		//�� ��ǥ

	dc.SelectObject(pOldPen);

	//������ ��(�β� 1, ����)���� ������ ���� ���� �ߴ´�.
	dc.MoveTo(40, 40);		//���� ��ǥ
	dc.LineTo(240, 40);		//�� ��ǥ
*/

/*
	CBrush NewBrush;
	//��Ʈ�� Ŭ���� ��ü�� �����Ͽ� ��Ʈ�� ���ҽ� �ε�.
	CBitmap Bmp;
	Bmp.LoadBitmap(IDB_BITMAP1);
	//�ε��� ��Ʈ�� ���ҽ��� ���� �귯�� ����.
	NewBrush.CreatePatternBrush(&Bmp);
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	//Ŭ���̾�Ʈ �� Ŭ������ Ŭ���̾�Ʈ ���� ũ�⸦ �˾Ƴ���
	//�� ũ�⿡ �ش��ϴ� �׸� �׸�.
	CRect Rect;
	GetClientRect(&Rect);
	dc.Rectangle(&Rect);

	dc.SelectObject(pOldBrush);
*/

/*	//��ġ �귯�� ��
	CBrush NewBrush(HS_CROSS, RGB(192, 0, 0));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	dc.Rectangle(20, 20, 140, 140);

	dc.SelectObject(pOldBrush);
*/

/*	//PS_USERSTYLE ��
	DWORD style[] = {6, 3};
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(255, 0, 0);

	CPen NewPen;
	NewPen.CreatePen(PS_GEOMETRIC | PS_USERSTYLE | PS_ENDCAP_FLAT,
						10, &lb, 2, style);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	//�β��� 20�ȼ��� ���� �ߴ´�.
	dc.MoveTo(40, 40);		//���� ��ǥ
	dc.LineTo(240, 40);		//�� ��ǥ

	dc.SelectObject(pOldPen);
*/

/*	//����/�� �κ�ó�� ��
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(192, 192, 192);

	CPen arNewPen[3];
	CPen* pOldPen = NULL;
	arNewPen[0].CreatePen(PS_GEOMETRIC | PS_SOLID | PS_ENDCAP_ROUND, 20, &lb);
	arNewPen[1].CreatePen(PS_GEOMETRIC | PS_SOLID | PS_ENDCAP_SQUARE, 20, &lb);
	arNewPen[2].CreatePen(PS_GEOMETRIC | PS_SOLID | PS_ENDCAP_FLAT, 20, &lb);

	for(int i = 0; i < 3; ++i)
	{
		pOldPen = dc.SelectObject(&arNewPen[i]);
		dc.MoveTo(40, 40 * (i + 1));		//���� ��ǥ
		dc.LineTo(240, 40 * (i + 1));		//�� ��ǥ

		dc.SelectObject(pOldPen);
//		dc.MoveTo(40, 40 * (i + 1));		//���� ��ǥ
//		dc.LineTo(240, 40 * (i + 1));		//�� ��ǥ

		arNewPen[i].DeleteObject();
	}
*/