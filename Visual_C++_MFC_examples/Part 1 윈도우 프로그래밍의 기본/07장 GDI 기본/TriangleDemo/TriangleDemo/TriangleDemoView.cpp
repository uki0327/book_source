
// TriangleDemoView.cpp : CTriangleDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "TriangleDemo.h"

#include "TriangleDemoDoc.h"
#include "TriangleDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTriangleDemoView

IMPLEMENT_DYNCREATE(CTriangleDemoView, CView)

BEGIN_MESSAGE_MAP(CTriangleDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTriangleDemoView ����/�Ҹ�

CTriangleDemoView::CTriangleDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTriangleDemoView::~CTriangleDemoView()
{
}

BOOL CTriangleDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTriangleDemoView �׸���

void CTriangleDemoView::OnDraw(CDC* /*pDC*/)
{
	CTriangleDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTriangleDemoView �μ�

BOOL CTriangleDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTriangleDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTriangleDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CTriangleDemoView ����

#ifdef _DEBUG
void CTriangleDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CTriangleDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTriangleDemoDoc* CTriangleDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTriangleDemoDoc)));
	return (CTriangleDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CTriangleDemoView �޽��� ó����

void CTriangleDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	DWORD style[] = {3, 3};
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(192, 0, 0);

	CPen NewPen;
	NewPen.CreatePen(PS_GEOMETRIC | PS_USERSTYLE |
				PS_ENDCAP_FLAT | PS_JOIN_MITER, 3, &lb, 2, style);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	CBrush NewBrush(RGB(192, 192, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	dc.RoundRect(CRect(20, 20, 140, 140), CPoint(20, 20));

	dc.SelectObject(pOldBrush);		//�귯��
	dc.SelectObject(pOldPen);		//��
}

/*
	//�귯�ø� �����Ͽ� ������ ĥ�Ѵ�.
	CBrush NewBrush(RGB(0, 192, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	dc.Rectangle(20, 20, 140, 140);
	dc.Ellipse(20, 20, 140, 140);

	dc.SelectObject(pOldBrush);		//�귯��
*/

/*
	DWORD style[] = {6, 3};
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(192, 192, 192);

	CPen NewPen;
	NewPen.CreatePen(PS_GEOMETRIC | PS_SOLID | PS_ENDCAP_FLAT, 20, &lb);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	//û�� �귯�ø� �����Ͽ� �ﰢ���� ĥ�Ѵ�.
	CBrush NewBrush(RGB(0, 0, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	//�β��� 20�ȼ��� ���� �� �� �׾� �ﰢ���� �׸���.
	dc.MoveTo(190, 40);
	dc.LineTo(290, 190);
	dc.LineTo(90, 190);
	dc.LineTo(190, 40);

	dc.SelectObject(pOldBrush);		//�귯��
	dc.SelectObject(pOldPen);		//��

	//�⺻ ������ �ﰢ���� ���ı׸���.
	dc.MoveTo(190, 40);
	dc.LineTo(290, 190);
	dc.LineTo(90, 190);
	dc.LineTo(190, 40);
*/
/*
	DWORD style[] = {3, 3};
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(192, 0, 0);

	CPen NewPen;
	NewPen.CreatePen(PS_GEOMETRIC | PS_USERSTYLE |
				PS_ENDCAP_FLAT | PS_JOIN_MITER, 3, &lb, 2, style);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	CBrush NewBrush(RGB(192, 192, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	dc.RoundRect(CRect(20, 20, 140, 140), CPoint(20, 20));

	dc.SelectObject(pOldBrush);		//�귯��
	dc.SelectObject(pOldPen);		//��
*/
/*
	//û�� �귯�ø� �����Ͽ� �ﰢ���� ĥ�Ѵ�.
	CBrush NewBrush(RGB(0, 192, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	//������ 270���� ��ä��
	CRect PieRect(20, 20, 140, 140);
	dc.Pie(PieRect,
		CPoint(PieRect.CenterPoint().x, PieRect.top),
		CPoint(PieRect.right, PieRect.CenterPoint().y));

	//������ 90���� ��ä��
	PieRect = CRect(150, 20, 270, 140);
	dc.Pie(PieRect,
		CPoint(PieRect.right, PieRect.CenterPoint().y),
		CPoint(PieRect.CenterPoint().x, PieRect.top));

	dc.SelectObject(pOldBrush);
*/
/*	//�ﰢ�� �׸���
	DWORD style[] = {6, 3};
	LOGBRUSH lb;
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(192, 192, 192);

	CPen NewPen;
	NewPen.CreatePen(PS_GEOMETRIC | PS_SOLID |
						PS_ENDCAP_FLAT | PS_JOIN_MITER, 20, &lb);
	CPen* pOldPen = dc.SelectObject(&NewPen);

	//û�� �귯�ø� �����Ͽ� �ﰢ���� ĥ�Ѵ�.
	CBrush NewBrush(RGB(0, 0, 192));
	CBrush* pOldBrush = dc.SelectObject(&NewBrush);

	//���̿� ���� 120�� �簢���� �׸�
	POINT arPt[4] = {{20, 20}, {140, 20}, {140, 140}, {20, 140}};
	dc.Polygon(arPt, 4);

	//���̿� ���� 120�� �簢���� �׸�
	dc.Rectangle(CRect(180, 20, 300, 140));

	dc.SelectObject(pOldBrush);		//�귯��
	dc.SelectObject(pOldPen);		//��
*/