
// TimerDemoDoc.h : CTimerDemoDoc Ŭ������ �������̽�
//


#pragma once


class CTimerDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTimerDemoDoc();
	DECLARE_DYNCREATE(CTimerDemoDoc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~CTimerDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


