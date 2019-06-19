#pragma once
#include "..\MFCGridfiles\GridCtrl.h"
#include "..\TChartfiles\tchart.h"

#include <map>
#include <tuple>
// ReportDialog dialog

class ReportDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ReportDialog)

public:
	ReportDialog(CWnd* pParent, std::map<int, std::tuple< std::string, std::string, std::string, std::string>>&salesData);   // standard constructor
	virtual ~ReportDialog();

// Dialog Data
//#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_REPORT };
//#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();

	CTChart m_chart;
	CGridCtrl grid;

	afx_msg void OnBnClickedRadioBarchart();
	afx_msg void OnBnClickedRadioPie();
	void PlotBar();
	void PlotPie();
	CButton barRadio;
	CButton pieradio;
	afx_msg void OnBnClickedButtonCsvreport();
	void LoadFromDataBase();
	std::map<int, std::tuple< std::string, std::string, std::string, std::string>>&salesData;
	DECLARE_EVENTSINK_MAP()
	void OnDblClickTchart1();
};
