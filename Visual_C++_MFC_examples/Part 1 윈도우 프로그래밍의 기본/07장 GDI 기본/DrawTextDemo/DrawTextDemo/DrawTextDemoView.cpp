
// DrawTextDemoView.cpp : CDrawTextDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "DrawTextDemo.h"

#include "DrawTextDemoDoc.h"
#include "DrawTextDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawTextDemoView

IMPLEMENT_DYNCREATE(CDrawTextDemoView, CView)

BEGIN_MESSAGE_MAP(CDrawTextDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CDrawTextDemoView ����/�Ҹ�

CDrawTextDemoView::CDrawTextDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CDrawTextDemoView::~CDrawTextDemoView()
{
}

BOOL CDrawTextDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CDrawTextDemoView �׸���

void CDrawTextDemoView::OnDraw(CDC* /*pDC*/)
{
	CDrawTextDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CDrawTextDemoView �μ�

BOOL CDrawTextDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CDrawTextDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CDrawTextDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CDrawTextDemoView ����

#ifdef _DEBUG
void CDrawTextDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawTextDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawTextDemoDoc* CDrawTextDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawTextDemoDoc)));
	return (CDrawTextDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawTextDemoView �޽��� ó����

void CDrawTextDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	//���ڿ��� �׷��� ��� �簢���� ȸ������ ĥ�Ѵ�.
	CRect Rect(50, 50, 250, 100);
	dc.FillSolidRect(&Rect, RGB(192, 192, 192));

	CFont Font;
	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 24;
	wsprintf(lf.lfFaceName, TEXT("%s"), TEXT("Arial"));

	Font.CreateFontIndirect(&lf);
	CFont* pOldFont = dc.SelectObject(&Font);

	//���ڿ��� ������ ���� ������ �ٲ۴�.
	dc.SetTextColor(RGB(192, 0, 0));
	//��� �簢���� ���ڿ��� �׸���.
	dc.DrawText(TEXT("This is the test string!!!!!!"), &Rect, DT_WORDBREAK);

	dc.SelectObject(pOldFont);
}
