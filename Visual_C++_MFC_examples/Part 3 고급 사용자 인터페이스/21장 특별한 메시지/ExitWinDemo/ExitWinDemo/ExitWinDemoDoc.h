
// ExitWinDemoDoc.h : CExitWinDemoDoc Ŭ������ �������̽�
//


#pragma once


class CExitWinDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CExitWinDemoDoc();
	DECLARE_DYNCREATE(CExitWinDemoDoc)

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
	virtual ~CExitWinDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


