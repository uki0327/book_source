
// TrayDemoDoc.h : CTrayDemoDoc Ŭ������ �������̽�
//


#pragma once


class CTrayDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTrayDemoDoc();
	DECLARE_DYNCREATE(CTrayDemoDoc)

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
	virtual ~CTrayDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


