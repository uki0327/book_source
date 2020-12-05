
// ImageRgnView.cpp : CImageRgnView Ŭ������ ����
//

#include "stdafx.h"
#include "ImageRgn.h"

#include "ImageRgnDoc.h"
#include "ImageRgnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageRgnView

IMPLEMENT_DYNCREATE(CImageRgnView, CView)

BEGIN_MESSAGE_MAP(CImageRgnView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_PAINT()
//	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CImageRgnView ����/�Ҹ�

CImageRgnView::CImageRgnView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CImageRgnView::~CImageRgnView()
{
}

BOOL CImageRgnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CImageRgnView �׸���

void CImageRgnView::OnDraw(CDC* /*pDC*/)
{
	CImageRgnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CImageRgnView �μ�

BOOL CImageRgnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CImageRgnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CImageRgnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CImageRgnView ����

#ifdef _DEBUG
void CImageRgnView::AssertValid() const
{
	CView::AssertValid();
}

void CImageRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImageRgnDoc* CImageRgnView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageRgnDoc)));
	return (CImageRgnDoc*)m_pDocument;
}
#endif //_DEBUG


// CImageRgnView �޽��� ó����

int CImageRgnView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_rectVisible = CRect(0, 0, 0, 0);
	//������� ����� �̹��� ���ҽ� �ε�.
	m_ImgSample.LoadFromResource(AfxGetInstanceHandle(), IDB_Sample);

	return 0;
}

void CImageRgnView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	//�������ϰ� ��� �̹����� ���.
	m_ImgSample.AlphaBlend(dc.m_hDC, 0, 0, 50);
	//�����ε� ������ ������ ����.
	CRgn Rgn;
	Rgn.CreateEllipticRgn(m_rectVisible.left,
					m_rectVisible.top,
					m_rectVisible.right,
					m_rectVisible.bottom);
	dc.SelectClipRgn(&Rgn);
	//�������� ���� �̹����� �ٽ� �ѹ� ���.
	m_ImgSample.BitBlt(dc.m_hDC, 0, 0);
}

void CImageRgnView::OnMouseMove(UINT nFlags, CPoint point)
{
	//���콺 ���� ��ư�� ���� �����̸� �����츦 �ٽ� �׸���.
	if(nFlags & MK_LBUTTON)
	{
		//���� ������ �簢���� ��ǥ�� ���콺�� ��������
		//������ 200�ȼ� ������ �ǵ��� �Ѵ�.
		m_rectVisible = CRect(	point.x - 100, point.y - 100,
								point.x + 100, point.y + 100);
		RedrawWindow();
	}

	CView::OnMouseMove(nFlags, point);
}

void CImageRgnView::OnLButtonUp(UINT nFlags, CPoint point)
{
	//���� ���̴� ������ ������ �����츦 �ٽ� �׸���.
	m_rectVisible = CRect(0, 0, 0, 0);
	RedrawWindow();

	CView::OnLButtonUp(nFlags, point);
}
