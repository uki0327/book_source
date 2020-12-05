
// MainFrm.h : CMainFrame Ŭ������ �������̽�
//

#pragma once

class CMainFrame : public CFrameWnd
{
	
protected: // serialization������ ��������ϴ�.
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Ư���Դϴ�.
public:
	BOOL		m_bRunning;			//���������� �ǹ��ϴ� �÷���
	BOOL		m_bPause;			//�Ͻ� ���� ���¸� �ǹ��ϴ� �÷���

// �۾��Դϴ�.
public:

// �������Դϴ�.
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

public:
	afx_msg void OnMenuStart();
	afx_msg void OnMenuStop();
	afx_msg void OnUpdateMenuStart(CCmdUI *pCmdUI);
	afx_msg void OnUpdateMenuStop(CCmdUI *pCmdUI);
	afx_msg void OnMenuPause();
	afx_msg void OnUpdateMenuPause(CCmdUI *pCmdUI);
	afx_msg void OnMenuSub1();
};


