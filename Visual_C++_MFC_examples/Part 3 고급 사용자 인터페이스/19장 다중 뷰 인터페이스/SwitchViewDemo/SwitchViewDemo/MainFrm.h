
// MainFrm.h : CMainFrame Ŭ������ �������̽�
//

#pragma once

#include "MyHtmlView.h"
#include "MyEditView.h"
#include "MyListView.h"

#define VIEWID_DEFAULT		AFX_IDW_PANE_FIRST
#define VIEWID_HTML			AFX_IDW_PANE_FIRST + 10
#define VIEWID_EDIT			AFX_IDW_PANE_FIRST + 20
#define VIEWID_LIST			AFX_IDW_PANE_FIRST + 30

class CMainFrame : public CFrameWnd
{
	
protected: // serialization������ ��������ϴ�.
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Ư���Դϴ�.
public:
	CMyHtmlView*		m_pwndHtmlView;
	CMyEditView*		m_pwndEditView;
	CMyListView*		m_pwndListView;

// �۾��Դϴ�.
public:

// �������Դϴ�.P
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// �����Դϴ�.
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // ��Ʈ�� ������ ���Ե� ����Դϴ�.
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

// ������ �޽��� �� �Լ�
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
public:
	void SwitchView(int nID);
	afx_msg void OnMenuHtmlview();
	afx_msg void OnMenuEditview();
	afx_msg void OnMenuListview();
};


