
// PrintDemoView.cpp : CPrintDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "PrintDemo.h"

#include "PrintDemoDoc.h"
#include "PrintDemoView.h"
#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPrintDemoView

IMPLEMENT_DYNCREATE(CPrintDemoView, CView)

BEGIN_MESSAGE_MAP(CPrintDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPrintDemoView ����/�Ҹ�

CPrintDemoView::CPrintDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPrintDemoView::~CPrintDemoView()
{
}

BOOL CPrintDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPrintDemoView �׸���

void CPrintDemoView::OnDraw(CDC* pDC)
{
	CPrintDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	//ȭ�� �������
	CString strtmp = _T("");
	strtmp.Format(_T("Pixel (HORZRES:%d VERTRES:%d), mm(HORZSIZE:%d VERTSIZE:%d)"),
		pDC->GetDeviceCaps(HORZRES),	//�ȼ����� ���� �ػ�
		pDC->GetDeviceCaps(VERTRES),	//�ȼ����� ���� �ػ�
		pDC->GetDeviceCaps(HORZSIZE),	//mm���� ���� ����
		pDC->GetDeviceCaps(VERTSIZE));	//mm���� ���� ����

	//������ ����ΰ�?
	if(pDC->IsPrinting())
	{
		//6�� Ȯ���Ͽ� ����Ѵ�.
		pDC->SetMapMode(MM_ISOTROPIC);
		pDC->SetWindowExt(100, 100);
		pDC->SetViewportExt(600, 600);
	}

	CFont NewFont;
	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 24;
	wsprintf(lf.lfFaceName, _T("%s"), _T("Arial"));
	NewFont.CreateFontIndirect(&lf);
	CFont* pOldFont = pDC->SelectObject(&NewFont);

	pDC->TextOut(10, 10, strtmp);
	pDC->MoveTo(0, 130);
	pDC->LineTo(pDC->GetDeviceCaps(HORZRES), 130);

	pDC->SelectObject(pOldFont);
}


// CPrintDemoView �μ�

BOOL CPrintDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	pInfo->SetMaxPage(3);

	return DoPreparePrinting(pInfo);
}

void CPrintDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPrintDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CPrintDemoView ����

#ifdef _DEBUG
void CPrintDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CPrintDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPrintDemoDoc* CPrintDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPrintDemoDoc)));
	return (CPrintDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CPrintDemoView �޽��� ó����

void CPrintDemoView::OnPrint(CDC* pDC, CPrintInfo* pInfo)
{
	CString strtmp = _T("");

	//6�� Ȯ���Ͽ� ����Ѵ�.
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(100, 100);
	pDC->SetViewportExt(600, 600);

	//1.�Ӹ��� ���

	//2.���� ���
	strtmp.Format(_T("Current page %d"), pInfo->m_nCurPage);
	CFont NewFont;
	LOGFONT lf;
	::ZeroMemory(&lf, sizeof(lf));
	lf.lfHeight = 36;
	wsprintf(lf.lfFaceName, _T("%s"), _T("Arial"));
	NewFont.CreateFontIndirect(&lf);
	CFont* pOldFont = pDC->SelectObject(&NewFont);

	pDC->TextOut(10, 90, strtmp);
	pDC->SelectObject(pOldFont);

	//���� �̹��� ���
	CImage Image;
	Image.LoadFromResource(AfxGetInstanceHandle(), IDB_Sample);
	Image.BitBlt(pDC->m_hDC, 10, 150);

	//3. �ٴڱ� ���

	CView::OnPrint(pDC, pInfo);
}
