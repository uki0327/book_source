
// PopupButtonDoc.h : CPopupButtonDoc Ŭ������ �������̽�
//


#pragma once


class CPopupButtonDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CPopupButtonDoc();
	DECLARE_DYNCREATE(CPopupButtonDoc)

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
	virtual ~CPopupButtonDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


