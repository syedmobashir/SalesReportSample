#pragma once


// CInputcustomer dialog

class CInputcustomer : public CDialogEx
{
	DECLARE_DYNAMIC(CInputcustomer)

public:
	CInputcustomer(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CInputcustomer();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
