
// KeyMoveView.cpp : CKeyMoveView Ŭ������ ����
//

#include "stdafx.h"
#include "KeyMove.h"

#include "KeyMoveDoc.h"
#include "KeyMoveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CKeyMoveView

IMPLEMENT_DYNCREATE(CKeyMoveView, CView)

BEGIN_MESSAGE_MAP(CKeyMoveView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_KEYDOWN()
	ON_WM_SYSKEYDOWN()
	ON_WM_SYSCHAR()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CKeyMoveView ����/�Ҹ�

CKeyMoveView::CKeyMoveView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CKeyMoveView::~CKeyMoveView()
{
}

BOOL CKeyMoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CKeyMoveView �׸���

void CKeyMoveView::OnDraw(CDC* /*pDC*/)
{
	CKeyMoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CKeyMoveView �μ�

BOOL CKeyMoveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CKeyMoveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CKeyMoveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CKeyMoveView ����

#ifdef _DEBUG
void CKeyMoveView::AssertValid() const
{
	CView::AssertValid();
}

void CKeyMoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CKeyMoveDoc* CKeyMoveView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CKeyMoveDoc)));
	return (CKeyMoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CKeyMoveView �޽��� ó����

int CKeyMoveView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_wndChild.Create(TEXT("STATIC"), TEXT("KeyMove"),
				WS_CHILD | WS_VISIBLE | WS_BORDER,
				CRect(100, 100, 200, 200), this, 1234);

	return 0;
}

void CKeyMoveView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CPoint ptChild;			//���ϵ� �������� ��ǥ.
	CRect Rect;				//���ϵ� �������� ��ǥ �� ũ��.

	//���ϵ� �������� �� ��ǥ ����(��ũ�� ����)�� �˾ƿ´�.
	m_wndChild.GetWindowRect(&Rect);
	ptChild.x = Rect.left;
	ptChild.y = Rect.top;

	//��ũ�� ������ǥ�� Ŭ���̾�Ʈ �� ������ ��ǥ�� ȯ���Ѵ�.
	ScreenToClient(&ptChild);

	switch(nChar)
	{
	case VK_LEFT:			//���� ȭ��ǥ�� ���� ���.
		ptChild.x -= 10;	//10�ȼ���ŭ x��ǥ �� ����.
		break;

	case VK_RIGHT:			//������ ȭ��ǥ�� ���� ���.
		ptChild.x += 10;	//10�ȼ���ŭ x��ǥ �� ����.
		break;
	}

	//����� �� ��ǥ�� ���ϵ� �����츦 �̵���Ų��.
	m_wndChild.SetWindowPos(&CWnd::wndTop, ptChild.x, ptChild.y, 0, 0,
						SWP_SHOWWINDOW | SWP_NOZORDER | SWP_NOSIZE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CKeyMoveView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CString strText = TEXT("");
	strText.Format(TEXT("%c"), nChar);

	//�Է��� Ű�� Enter, Back space, ESCŰ�� �ƴϸ�
	//�ش� ASCII ���ڷ� ���ϵ� ������ �ؽ�Ʈ�� �����Ѵ�.
	if(nChar != VK_RETURN && nChar != VK_BACK && nChar != VK_ESCAPE)
	{
		m_wndChild.SetWindowText(strText);
	}

	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CKeyMoveView::OnSysKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CString strMessage = TEXT("");		//�޽����� ������ ���ڿ� ��ü

	//SpaceŰ�� ���� ���������� ����.
	WORD wResult = ::GetKeyState(VK_SPACE);
	BYTE byHigh = HIBYTE(wResult);
	//���� ����Ʈ�� 1�� ��Ʈ�� 1�̸� Ű�� ������ ����.
	if(byHigh & 0x01)
	{
		strMessage += TEXT("Alt + Space, ");

		//���� ������� Caps lock Ű�� ���¸� �˻�.
		wResult = ::GetKeyState(VK_CAPITAL);
		//���� ����Ʈ�� 1�� ��Ʈ�� 1�̸� ���Ű�� ���� ����.
		BYTE byLow = LOBYTE(wResult);
		if(byLow & 0x01)		strMessage += TEXT("CAPS LOCK ON");
		else					strMessage += TEXT("CAPS LOCK OFF");

		AfxMessageBox(strMessage);
	}

	CView::OnSysKeyDown(nChar, nRepCnt, nFlags);
}

void CKeyMoveView::OnSysChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	if(nChar == VK_RETURN)
						AfxMessageBox(TEXT("Alt + Enter"));
	else if(nChar == 's' || nChar == 'S')
						AfxMessageBox(TEXT("Alt + S"));
	else if(nChar == 'x' || nChar == 'X')
						AfxMessageBox(TEXT("Alt + X"));

	CView::OnSysChar(nChar, nRepCnt, nFlags);
}
