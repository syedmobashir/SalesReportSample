
// ValueLabsAssignmentView.cpp : implementation of the CValueLabsAssignmentView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ValueLabsAssignment.h"
#endif

#include "ValueLabsAssignmentDoc.h"
#include "ValueLabsAssignmentView.h"

#include "CInputcustomer.h"
#include "InputSales.h"
#include "ReportDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CValueLabsAssignmentView

IMPLEMENT_DYNCREATE(CValueLabsAssignmentView, CFormView)

BEGIN_MESSAGE_MAP(CValueLabsAssignmentView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_BN_CLICKED(IDC_BTN_CUSTOMER, &CValueLabsAssignmentView::OnBnClickedBtnCustomer)
	ON_BN_CLICKED(IDC_BTN_EMPLOYEE, &CValueLabsAssignmentView::OnBnClickedBtnEmployee)
	ON_BN_CLICKED(IDC_BUTTON_REPORT, &CValueLabsAssignmentView::OnBnClickedButtonReport)
	ON_BN_CLICKED(IDC_BUTTON1, &CValueLabsAssignmentView::OnBnClickedButton1)
END_MESSAGE_MAP()

// CValueLabsAssignmentView construction/destruction

CValueLabsAssignmentView::CValueLabsAssignmentView() noexcept
	: CFormView(IDD_VALUELABSASSIGNMENT_FORM)
{
	// TODO: add construction code here

}

CValueLabsAssignmentView::~CValueLabsAssignmentView()
{
}

void CValueLabsAssignmentView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CValueLabsAssignmentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CValueLabsAssignmentView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	
	ResizeParentToFit();

}

void CValueLabsAssignmentView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CValueLabsAssignmentView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CValueLabsAssignmentView diagnostics

#ifdef _DEBUG
void CValueLabsAssignmentView::AssertValid() const
{
	CFormView::AssertValid();
}

void CValueLabsAssignmentView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CValueLabsAssignmentDoc* CValueLabsAssignmentView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CValueLabsAssignmentDoc)));
	return (CValueLabsAssignmentDoc*)m_pDocument;
}
#endif //_DEBUG


// CValueLabsAssignmentView message handlers


void CValueLabsAssignmentView::OnBnClickedBtnCustomer()
{
	CInputcustomer obj;
	obj.DoModal();
}


void CValueLabsAssignmentView::OnBnClickedBtnEmployee()
{
	auto doctptr = (CValueLabsAssignmentDoc*)GetDocument();
	auto &salesData = doctptr->GetSalesDataforModification();
	InputSales obj(this, salesData);
	obj.DoModal();
}


void CValueLabsAssignmentView::OnBnClickedButtonReport()
{
	 auto doctptr= (CValueLabsAssignmentDoc*)GetDocument();
	auto &salesData= doctptr->GetSalesDataforModification();

	ReportDialog rptDlgObj(this,salesData);
	rptDlgObj.DoModal();
}


void CValueLabsAssignmentView::OnBnClickedButton1()
{
	exit(1);
}
