
// ImgOutDemoDoc.h : CImgOutDemoDoc Ŭ������ �������̽�
//


#pragma once


class CImgOutDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CImgOutDemoDoc();
	DECLARE_DYNCREATE(CImgOutDemoDoc)

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
	virtual ~CImgOutDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


