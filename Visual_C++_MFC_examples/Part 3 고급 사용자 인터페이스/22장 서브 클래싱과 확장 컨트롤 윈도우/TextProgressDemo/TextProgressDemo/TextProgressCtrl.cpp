// TextProgressCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "TextProgressDemo.h"
#include "TextProgressCtrl.h"


// CTextProgressCtrl

IMPLEMENT_DYNAMIC(CTextProgressCtrl, CProgressCtrl)

CTextProgressCtrl::CTextProgressCtrl()
{
	m_nData = 0;
}

CTextProgressCtrl::~CTextProgressCtrl()
{
}


BEGIN_MESSAGE_MAP(CTextProgressCtrl, CProgressCtrl)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// CTextProgressCtrl message handlers



void CTextProgressCtrl::OnPaint()
{
	CPaintDC dc(this);

	CString strTmp = _T("");
	strTmp.Format(_T("%d%%"), m_nData);

	//���α׷��� ��Ʈ���� �ѷ� ������ ���ؼ� ������ ũ�⸦ ����Ѵ�.
	CRect LeftRect, RightRect, ClientRect;
	GetClientRect(ClientRect);
	LeftRect = ClientRect;
	RightRect = ClientRect;

	//1%�� �ش��ϴ� ������ ũ�⸦ ����Ѵ�.
	//�׸���, �ѷ� �������� ���ʰ� ������ ������ ���ؼ� �ٸ� ������ ĥ�Ѵ�.
	LeftRect.right = (ClientRect.right * m_nData) / 100;
	RightRect.left = (ClientRect.right * m_nData) / 100;
	dc.FillSolidRect(LeftRect, RGB(0, 0, 128));
	dc.FillSolidRect(RightRect, RGB(255, 255, 255));

	//���ʰ� �������� �� �������� �����Ѵ�.
	CRgn LeftRgn, RightRgn;
	LeftRgn.CreateRectRgnIndirect(LeftRect);
	RightRgn.CreateRectRgnIndirect(RightRect);
	
	//���ʿ����� ���� ǥ�� �ؽ�Ʈ�� �߾� �����Ͽ� ����Ѵ�.
	dc.SetBkMode(TRANSPARENT);
	dc.SetTextColor(RGB(255, 255, 255));
	dc.SelectClipRgn(&LeftRgn);
	dc.DrawText(strTmp, ClientRect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	//������ ������ ���� ǥ�� �ؽ�Ʈ�� �߾� �����Ͽ� ����Ѵ�.
	dc.SetTextColor(RGB(0, 0, 128));
	dc.SelectClipRgn(&RightRgn);
	dc.DrawText(strTmp, ClientRect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
}

void CTextProgressCtrl::SetValue(int nPos)
{
	m_nData = nPos;
	RedrawWindow();
}
