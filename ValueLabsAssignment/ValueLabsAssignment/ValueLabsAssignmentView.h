
// ValueLabsAssignmentView.h : interface of the CValueLabsAssignmentView class
//

#pragma once


class CValueLabsAssignmentView : public CFormView
{
protected: // create from serialization only
	CValueLabsAssignmentView() noexcept;
	DECLARE_DYNCREATE(CValueLabsAssignmentView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_VALUELABSASSIGNMENT_FORM };
#endif

// Attributes
public:
	CValueLabsAssignmentDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CValueLabsAssignmentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnCustomer();
	afx_msg void OnBnClickedBtnEmployee();
	afx_msg void OnBnClickedButtonReport();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // debug version in ValueLabsAssignmentView.cpp
inline CValueLabsAssignmentDoc* CValueLabsAssignmentView::GetDocument() const
   { return reinterpret_cast<CValueLabsAssignmentDoc*>(m_pDocument); }
#endif

