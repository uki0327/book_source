
// SwitchViewDemoDoc.h : CSwitchViewDemoDoc Ŭ������ �������̽�
//


#pragma once


class CSwitchViewDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CSwitchViewDemoDoc();
	DECLARE_DYNCREATE(CSwitchViewDemoDoc)

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
	virtual ~CSwitchViewDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


