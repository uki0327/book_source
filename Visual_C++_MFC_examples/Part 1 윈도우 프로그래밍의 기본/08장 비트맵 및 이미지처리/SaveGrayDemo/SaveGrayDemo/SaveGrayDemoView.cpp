
// SaveGrayDemoView.cpp : CSaveGrayDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "SaveGrayDemo.h"

#include "SaveGrayDemoDoc.h"
#include "SaveGrayDemoView.h"

#include <atlimage.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSaveGrayDemoView

IMPLEMENT_DYNCREATE(CSaveGrayDemoView, CView)

BEGIN_MESSAGE_MAP(CSaveGrayDemoView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CSaveGrayDemoView ����/�Ҹ�

CSaveGrayDemoView::CSaveGrayDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSaveGrayDemoView::~CSaveGrayDemoView()
{
}

BOOL CSaveGrayDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSaveGrayDemoView �׸���

void CSaveGrayDemoView::OnDraw(CDC* /*pDC*/)
{
	CSaveGrayDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CSaveGrayDemoView �μ�

BOOL CSaveGrayDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSaveGrayDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSaveGrayDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSaveGrayDemoView ����

#ifdef _DEBUG
void CSaveGrayDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CSaveGrayDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSaveGrayDemoDoc* CSaveGrayDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSaveGrayDemoDoc)));
	return (CSaveGrayDemoDoc*)m_pDocument;
}
#endif //_DEBUG

inline void RGBtoGray(COLORREF& rgb)
{
	BYTE byGray = (GetRValue(rgb)	* 30
				+ GetGValue(rgb)	* 59
				+ GetBValue(rgb)	* 11) / 100;

	rgb = RGB(byGray, byGray, byGray);
}

// CSaveGrayDemoView �޽��� ó����

void CSaveGrayDemoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	//����ȭ�� ������ ��ü�� ���� �����͸� ����.
	CWnd* pWndDesktop = GetDesktopWindow();
	CWindowDC ScrDC(pWndDesktop);		//����ȭ�� ������DC
	CClientDC dc(this);					//�� ������DC

	//����ȭ�� ũ�� �� ������� ������ ��Ʈ�� �̹����� �����.
	CImage Image;
	Image.Create(300, 300, ScrDC.GetDeviceCaps(BITSPIXEL));

	//�̹���DC�� ȭ��DC�� ����ȭ�� ������DC�� ����Ѵ�.
	CDC* pDC = CDC::FromHandle(Image.GetDC());
	pDC->BitBlt(0, 0, 300, 300, &ScrDC, 0, 0, SRCCOPY);
	Image.ReleaseDC();

	//�Ϻ�(200 * 200)�� Gray �̹����� ��ȯ.
	COLORREF rgb;
	for(int x = 0; x < 200; x++)		//��
	{
		for(int y = 0; y < 200; ++y)	//����
		{
			rgb = Image.GetPixel(x, y);
			//Gray RGB ������ ��ȯ.
			RGBtoGray(rgb);
			Image.SetPixel(x, y, rgb);
		}
	}

	//������� ��ȯ�� �̹����� ȭ��DC�� ���.
	Image.BitBlt(dc.m_hDC, 0, 0);

	CView::OnLButtonDown(nFlags, point);
}

void CSaveGrayDemoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	//����ȭ�� ������ ��ü�� ���� �����͸� ����.
	CWnd* pWndDesktop = GetDesktopWindow();
	CWindowDC ScrDC(pWndDesktop);		//����ȭ�� ������DC
	CClientDC dc(this);					//�� ������DC

	//����ȭ�� �������� ũ�⸦ �˾Ƴ���.
	CRect Rect;
	pWndDesktop->GetWindowRect(&Rect);

	//����ȭ�� ũ�� �� ������� ������ ��Ʈ�� �̹����� �����.
	CImage Image;
	int cx = Rect.Width();		//����ȭ�� ��
	int cy = Rect.Height();		//����ȭ�� ����
	Image.Create(cx, cy, ScrDC.GetDeviceCaps(BITSPIXEL));

	//�̹���DC�� ȭ��DC�� ����ȭ�� ������ ȭ���� ����Ѵ�.
	CDC* pDC = CDC::FromHandle(Image.GetDC());
	pDC->BitBlt(0, 0, cx, cy, &ScrDC, 0, 0, SRCCOPY);
	dc.BitBlt(0, 0, cx, cy, pDC, 0, 0, SRCCOPY);
	Image.ReleaseDC();

	//JPEG �������� ����ȭ�� �̹����� �����Ѵ�.
	Image.Save(TEXT("Desktop.jpg"), Gdiplus::ImageFormatJPEG);
	//����� �̹����� �� �����Ͽ� �����ش�.
	::ShellExecute(	NULL,
					TEXT("open"), TEXT("Desktop.jpg"),
					NULL, NULL, SW_SHOW);

	::ShellExecute(	NULL,
		TEXT("open"), TEXT("http://www.freelec.co.kr"),
					NULL, NULL, SW_SHOW);

	CView::OnRButtonDown(nFlags, point);
}
