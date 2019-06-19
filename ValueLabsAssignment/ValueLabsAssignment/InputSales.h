#pragma once
#include <map>
#include <tuple>

// InputSales dialog

class InputSales : public CDialogEx
{
	DECLARE_DYNAMIC(InputSales)

public:
	InputSales(CWnd* pParent , std::map<int, std::tuple< std::string, std::string, std::string, std::string>>&_salesData);   // standard constructor
	virtual ~InputSales();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_SALES };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString mItem;
	CString mPrice;
	CString mUnits;
	CString mYear;
	std::map<int, std::tuple< std::string, std::string, std::string, std::string>>&salesData;
};
