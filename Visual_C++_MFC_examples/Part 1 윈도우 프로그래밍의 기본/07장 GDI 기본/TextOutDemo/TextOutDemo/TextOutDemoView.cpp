
// TextOutDemoView.cpp : CTextOutDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "TextOutDemo.h"

#include "TextOutDemoDoc.h"
#include "TextOutDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTextOutDemoView

IMPLEMENT_DYNCREATE(CTextOutDemoView, CView)

BEGIN_MESSAGE_MAP(CTextOutDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CTextOutDemoView ����/�Ҹ�

CTextOutDemoView::CTextOutDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CTextOutDemoView::~CTextOutDemoView()
{
}

BOOL CTextOutDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CTextOutDemoView �׸���

void CTextOutDemoView::OnDraw(CDC* /*pDC*/)
{
	CTextOutDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CTextOutDemoView �μ�

BOOL CTextOutDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CTextOutDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CTextOutDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CTextOutDemoView ����

#ifdef _DEBUG
void CTextOutDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CTextOutDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTextOutDemoDoc* CTextOutDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTextOutDemoDoc)));
	return (CTextOutDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CTextOutDemoView �޽��� ó����

void CTextOutDemoView::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CFont Font;
	CFont* pOldFont;
	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 36;
	wsprintf(lf.lfFaceName, TEXT("%s"), TEXT("Arial"));
	Font.CreateFontIndirect(&lf);
	pOldFont = dc.SelectObject(&Font);

	//TextOut�� �̿��Ͽ� �׳� ��� '\t'�� �ݿ����� �ʴ´�.
	dc.TextOut(20, 20, TEXT("\tTest String!"));

	//TabbedTextOut�̿��Ͽ� '\t'�� �� ���ڿ� ���
	int nTabStop = 40;
	dc.TabbedTextOut(20, 70, TEXT("\tTest String!"), 1, &nTabStop, 20);
	dc.TabbedTextOut(20, 120, TEXT("\t\tTest String!"), 1, &nTabStop, 20);
	dc.SelectObject(pOldFont);
}


/*	//Test String ���
	int nY = 0;
	CFont Font;
	CFont* pOldFont;

	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	wsprintf(lf.lfFaceName, TEXT("%s"), TEXT("Arial"));

	for(int i = 10; i < 25; i++)
	{
		lf.lfHeight = i;
		nY += i;
		//Arial, ũ�� 10 ~ 24���� ��Ʈ ��ü�� �����Ѵ�.
		Font.CreateFontIndirect(&lf);
		//������ ��Ʈ�� "Test String!" �̶�� ���ڿ��� ����Ѵ�.
		pOldFont = dc.SelectObject(&Font);
		dc.TextOut(10, nY, TEXT("Test String!"));
		dc.SelectObject(pOldFont);
		//��Ʈ ��ü�� �����Ѵ�.
		Font.DeleteObject();
	}
*/