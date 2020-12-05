// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://msdn.microsoft.com/officeui.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// Office2007StyleView.cpp : COffice2007StyleView Ŭ������ ����
//

#include "stdafx.h"
#include "Office2007Style.h"

#include "Office2007StyleDoc.h"
#include "Office2007StyleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COffice2007StyleView

IMPLEMENT_DYNCREATE(COffice2007StyleView, CView)

BEGIN_MESSAGE_MAP(COffice2007StyleView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COffice2007StyleView::OnFilePrintPreview)
END_MESSAGE_MAP()

// COffice2007StyleView ����/�Ҹ�

COffice2007StyleView::COffice2007StyleView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

COffice2007StyleView::~COffice2007StyleView()
{
}

BOOL COffice2007StyleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// COffice2007StyleView �׸���

void COffice2007StyleView::OnDraw(CDC* /*pDC*/)
{
	COffice2007StyleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// COffice2007StyleView �μ�


void COffice2007StyleView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL COffice2007StyleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void COffice2007StyleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void COffice2007StyleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void COffice2007StyleView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COffice2007StyleView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// COffice2007StyleView ����

#ifdef _DEBUG
void COffice2007StyleView::AssertValid() const
{
	CView::AssertValid();
}

void COffice2007StyleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COffice2007StyleDoc* COffice2007StyleView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COffice2007StyleDoc)));
	return (COffice2007StyleDoc*)m_pDocument;
}
#endif //_DEBUG


// COffice2007StyleView �޽��� ó����
