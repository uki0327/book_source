
// TextRgnView.cpp : CTextRgnView Ŭ������ ����
//

#include "stdafx.h"
#include "TextRgn.h"

#include "TextRgnDoc.h"
#include "TextRgnView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTextRgnView

IMPLEMENT_DYNCREATE(CTextRgnView, CView)

BEGIN_MESSAGE_MAP(CTextRgnView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTextRgnView ����/�Ҹ�

CTextRgnView::CTextRgnView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTextRgnView::~CTextRgnView()
{
}

BOOL CTextRgnView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTextRgnView �׸���

void CTextRgnView::OnDraw(CDC* /*pDC*/)
{
	CTextRgnDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTextRgnView �μ�

BOOL CTextRgnView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTextRgnView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTextRgnView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CTextRgnView ����

#ifdef _DEBUG
void CTextRgnView::AssertValid() const
{
	CView::AssertValid();
}

void CTextRgnView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTextRgnDoc* CTextRgnView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTextRgnDoc)));
	return (CTextRgnDoc*)m_pDocument;
}
#endif //_DEBUG


// CTextRgnView �޽��� ó����

void CTextRgnView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	//������ �� �簢���� 
	//���� �ٸ� ����(�������� ȸ��)���� ĥ�Ѵ�.
	CRect rectLeft	= CRect(50, 50, 250, 150);
	CRect rectRight	= CRect(250, 50, 450, 150);
	dc.FillSolidRect(&rectLeft, RGB(192, 0, 0));
	dc.FillSolidRect(&rectRight, RGB(192, 192, 192));

	//�ռ� ���� �� �簢���� ������ �������� �����.
	CRgn rgnLeft, rgnRight;
	rgnLeft.CreateRectRgnIndirect(rectLeft);
	rgnRight.CreateRectRgnIndirect(rectRight);

	//DC�� ��Ʈ�� Arial Black(���� 72)���� �ٲ۴�.
	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 72;
	wsprintf(lf.lfFaceName, _T("%s"), _T("Arial Black"));
	CFont NewFont;
	NewFont.CreateFontIndirect(&lf);
	CFont* pOldFont = dc.SelectObject(&NewFont);

	dc.SetBkMode(TRANSPARENT);
//	dc.TextOut(60, 65, TEXT("TEST STRING"));

	//���� ������ �����Ͽ� ���ڿ��� ����Ѵ�.
	dc.SetTextColor(RGB(192, 192, 192));
	dc.SelectClipRgn(&rgnLeft);
	dc.TextOut(60, 65, TEXT("TEST STRING"));

	//������ ������ �����Ͽ� ���ڿ��� ����Ѵ�.
	dc.SetTextColor(RGB(192, 0, 0));
	dc.SelectClipRgn(&rgnRight);
	dc.TextOut(60, 65, TEXT("TEST STRING"));

	dc.SelectObject(pOldFont);
}
