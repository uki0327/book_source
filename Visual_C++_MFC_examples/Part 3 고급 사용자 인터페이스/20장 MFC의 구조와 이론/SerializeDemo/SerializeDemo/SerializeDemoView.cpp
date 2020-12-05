
// SerializeDemoView.cpp : CSerializeDemoView Ŭ������ ����
//

#include "stdafx.h"
#include "SerializeDemo.h"

#include "SerializeDemoDoc.h"
#include "SerializeDemoView.h"

#include "TestData.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSerializeDemoView

IMPLEMENT_DYNCREATE(CSerializeDemoView, CEditView)

BEGIN_MESSAGE_MAP(CSerializeDemoView, CEditView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CSerializeDemoView ����/�Ҹ�

CSerializeDemoView::CSerializeDemoView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSerializeDemoView::~CSerializeDemoView()
{
}

BOOL CSerializeDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// �ڵ� �ٹٲ��� ����մϴ�.

	return bPreCreated;
}


// CSerializeDemoView �μ�

BOOL CSerializeDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� CEditView �غ�
	return CEditView::OnPreparePrinting(pInfo);
}

void CSerializeDemoView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// �⺻ CEditView ���� �μ�
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CSerializeDemoView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// �⺻ CEditView ���� �μ�
	CEditView::OnEndPrinting(pDC, pInfo);
}


// CSerializeDemoView ����

#ifdef _DEBUG
void CSerializeDemoView::AssertValid() const
{
	CEditView::AssertValid();
}

void CSerializeDemoView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CSerializeDemoDoc* CSerializeDemoView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSerializeDemoDoc)));
	return (CSerializeDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CSerializeDemoView �޽��� ó����

void CSerializeDemoView::Serialize(CArchive& ar)
{
	CString strTmp = _T("");
	CEdit& theEdit = GetEditCtrl();

	if(ar.IsStoring())		//SAVE
	{
		CTestData	TestData;
		TCHAR		szBuffer[512];
		TestData.m_nLine = theEdit.GetLineCount();

		ar << &TestData;

		for(int i = 0; i < TestData.m_nLine; i++)
		{
			::ZeroMemory(szBuffer, sizeof(szBuffer));
			if(theEdit.GetLine(i, szBuffer, 512) > 0)
				ar.WriteString(szBuffer);

			if(i + 1 < TestData.m_nLine)
				ar.WriteString(_T("\r\n"));
		}
	}
	else					//LOAD
	{
		CString strText = _T("");

		CTestData* pTestData = NULL;
		ar >> pTestData;

		while(ar.ReadString(strTmp))
		{
			strText += strTmp;
			strText += "\r\n";
		}

		theEdit.SetWindowText(strText);

		strTmp.Format(_T("%d Lines"), pTestData->m_nLine);
		AfxMessageBox(strTmp);

		delete pTestData;
	}
}
