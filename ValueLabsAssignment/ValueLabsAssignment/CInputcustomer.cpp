// CInputcustomer.cpp : implementation file
//

#include "stdafx.h"
#include "ValueLabsAssignment.h"
#include "CInputcustomer.h"
#include "afxdialogex.h"


// CInputcustomer dialog

IMPLEMENT_DYNAMIC(CInputcustomer, CDialogEx)

CInputcustomer::CInputcustomer(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CInputcustomer::~CInputcustomer()
{
}

void CInputcustomer::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CInputcustomer, CDialogEx)
	ON_BN_CLICKED(IDOK, &CInputcustomer::OnBnClickedOk)
END_MESSAGE_MAP()


// CInputcustomer message handlers


void CInputcustomer::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}
