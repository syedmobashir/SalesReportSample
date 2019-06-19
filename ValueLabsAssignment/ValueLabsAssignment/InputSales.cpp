// InputSales.cpp : implementation file
//

#include "stdafx.h"
#include "ValueLabsAssignment.h"
#include "InputSales.h"
#include "afxdialogex.h"


// InputSales dialog
using namespace std;
IMPLEMENT_DYNAMIC(InputSales, CDialogEx)

InputSales::InputSales(CWnd* pParent /*=nullptr*/, std::map<int, std::tuple< std::string, std::string, std::string, std::string>>&_salesData)
	: CDialogEx(IDD_DLG_SALES, pParent),salesData(_salesData)
{

}

InputSales::~InputSales()
{
}

void InputSales::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ITEM, mItem);
	DDX_Text(pDX, IDC_EDIT_PRICE, mPrice);
	DDX_Text(pDX, IDC_EDIT_UNITS, mUnits);
	DDX_Text(pDX, IDC_EDIT_YEAR, mYear);
}


BEGIN_MESSAGE_MAP(InputSales, CDialogEx)
	ON_BN_CLICKED(IDOK, &InputSales::OnBnClickedOk)
END_MESSAGE_MAP()


// InputSales message handlers


void InputSales::OnBnClickedOk()
{
	UpdateData(true);
	string item= mItem;
	string price = mPrice;
	string units = mUnits;
	string year = mYear;

	int id;

	if (salesData.size() == 0)
		id = 1;
	else
	{
		auto itr = salesData.rbegin();
		  id = itr->first;
		  id++;
	}

	auto val = make_tuple(item, price, units, year);
	salesData.insert(make_pair<>(id,val));


	UpdateData(false);


	CDialogEx::OnOK();
}
