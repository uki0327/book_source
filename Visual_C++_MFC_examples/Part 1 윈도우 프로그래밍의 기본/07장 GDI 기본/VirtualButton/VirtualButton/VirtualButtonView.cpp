
// VirtualButtonView.cpp : CVirtualButtonView Ŭ������ ����
//

#include "stdafx.h"
#include "VirtualButton.h"

#include "VirtualButtonDoc.h"
#include "VirtualButtonView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVirtualButtonView

IMPLEMENT_DYNCREATE(CVirtualButtonView, CView)

BEGIN_MESSAGE_MAP(CVirtualButtonView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CVirtualButtonView ����/�Ҹ�

CVirtualButtonView::CVirtualButtonView()
{
	m_BtnRect = CRect(10, 10, 210, 40);
	m_bClicked = FALSE;
}

CVirtualButtonView::~CVirtualButtonView()
{
}

BOOL CVirtualButtonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CVirtualButtonView �׸���

void CVirtualButtonView::OnDraw(CDC* /*pDC*/)
{
	CVirtualButtonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CVirtualButtonView �μ�

BOOL CVirtualButtonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CVirtualButtonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CVirtualButtonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CVirtualButtonView ����

#ifdef _DEBUG
void CVirtualButtonView::AssertValid() const
{
	CView::AssertValid();
}

void CVirtualButtonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVirtualButtonDoc* CVirtualButtonView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVirtualButtonDoc)));
	return (CVirtualButtonDoc*)m_pDocument;
}
#endif //_DEBUG


// CVirtualButtonView �޽��� ó����

void CVirtualButtonView::OnLButtonDown(UINT nFlags, CPoint point)
{
	//��ư�� ��ġ�� ������ Ŭ���Ͽ��°�?
	if(m_BtnRect.PtInRect(point))
	{
		//�÷��׸� ����ϰ� �����츦 �ٽ� �׸���.
		m_bClicked = !m_bClicked;
		RedrawWindow(&m_BtnRect);
	}

	CView::OnLButtonDown(nFlags, point);
}

void CVirtualButtonView::OnLButtonUp(UINT nFlags, CPoint point)
{
	//��ư�� ��ġ�� �����ΰ�?
	if(m_bClicked)
	{
		//�÷��׸� ����ϰ� �����츦 �ٽ� �׸���.
		m_bClicked = !m_bClicked;
		RedrawWindow(&m_BtnRect);
	}

	if(m_BtnRect.PtInRect(point))
	{
		AfxMessageBox(L"��ư�� Ŭ���߽��ϴ�.");
	}

	CView::OnLButtonUp(nFlags, point);
}

void CVirtualButtonView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	//�ý����� ������ ��ư �������� ��ư�� ������ ĥ�Ѵ�.
	CRect Rect(m_BtnRect);
	Rect += CRect(1, 1, 1, 1);
	dc.Rectangle(&Rect);
	dc.FillSolidRect(&m_BtnRect, ::GetSysColor(COLOR_BTNFACE));

	if(m_bClicked)	//������ ����
	{
		dc.Draw3dRect(m_BtnRect,
			::GetSysColor(COLOR_3DSHADOW),	//����/������ ��ο��
			::GetSysColor(COLOR_3DLIGHT));	//������/�Ʒ����� ������
	}
	else			//���� ����
	{
		dc.Draw3dRect(m_BtnRect,
			::GetSysColor(COLOR_3DLIGHT),
			::GetSysColor(COLOR_3DSHADOW));
	}

	//�ý����� ���ϴ� ��ư���� �������� �ؽ�Ʈ�� �׸���.
	dc.SetBkColor(::GetSysColor(COLOR_BTNFACE));
	dc.SetTextColor(::GetSysColor(COLOR_BTNTEXT));

	if(m_bClicked)
	{
		CRect Rect = m_BtnRect;
		//������ ���¸� �۾��� ��µǴ� ��ġ�� 1�ȼ� �����Ѵ�.
		Rect += CRect(0, 0, 2, 2);
		dc.DrawText(L"Test button", &Rect,
					DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}
	else
	{
		dc.DrawText(L"Test button", &m_BtnRect,
					DT_CENTER | DT_SINGLELINE | DT_VCENTER);
	}
}
