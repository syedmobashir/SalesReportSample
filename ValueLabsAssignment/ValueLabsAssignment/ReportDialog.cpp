// ReportDialog.cpp : implementation file
//

#include "stdafx.h"
#include "ValueLabsAssignment.h"
#include "ReportDialog.h"
#include "afxdialogex.h"

//--teechart----
#include "series.h"
#include "TeeChartDefines.h"
#include "legend.h"
#include "textshape.h"
//------database----------
#include "mysql.h"
#include <stdlib.h>
#include <sstream>
//-----------------------
#include <fstream>

#pragma warning(suppress : 4996) 
// ReportDialog dialog

IMPLEMENT_DYNAMIC(ReportDialog, CDialogEx)


using namespace std;


ReportDialog::ReportDialog(CWnd* pParent /*=nullptr*/, std::map<int, std::tuple< std::string, std::string, std::string, std::string>>& _salesData)
	: CDialogEx(IDD_DIALOG_REPORT, pParent),salesData(_salesData)
{

}

ReportDialog::~ReportDialog()
{
}

void ReportDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CUSTOM2, grid);
	DDX_Control(pDX, IDC_TCHART1, m_chart);
	DDX_Control(pDX, IDC_RADIO_BARCHART, barRadio);
	DDX_Control(pDX, IDC_RADIO_PIE, pieradio);
}


BEGIN_MESSAGE_MAP(ReportDialog, CDialogEx)
	ON_BN_CLICKED(IDOK, &ReportDialog::OnBnClickedOk)
	ON_BN_CLICKED(IDC_RADIO_BARCHART, &ReportDialog::OnBnClickedRadioBarchart)
	ON_BN_CLICKED(IDC_RADIO_PIE, &ReportDialog::OnBnClickedRadioPie)
	ON_BN_CLICKED(IDC_BUTTON_CSVREPORT, &ReportDialog::OnBnClickedButtonCsvreport)
END_MESSAGE_MAP()


// ReportDialog message handlers


void ReportDialog::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


BOOL ReportDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	//------initilize grid---------------------
	grid.SetRowCount(10);
	grid.SetColumnCount(5);
	grid.SetFixedRowCount(1);
	//--------plot grid------------------------

	grid.SetItemText(0, 0, "ID");
	grid.SetItemText(0, 1, "ITEM");
	grid.SetItemText(0, 2, "PRICE");
	grid.SetItemText(0, 3, "UNITS");
	grid.SetItemText(0, 4, "YEAR");

	if (salesData.size() > 0)
	{
		int i = 1;
	for (auto itr = salesData.begin(); itr != salesData.end(); itr++,i++)
	{
		auto val = itr->second;
		int id = itr->first;
		string item = get<1>(val);

		CString Id;
		Id.Format("%d", id);

		grid.SetItemText(i, 0, Id);
		grid.SetItemText(i, 1, get<0>(val).c_str());
		grid.SetItemText(i, 2, get<1>(val).c_str());
		grid.SetItemText(i, 3, get<2>(val).c_str());
		grid.SetItemText(i, 4, get<3>(val).c_str());
	}		
	}
	grid.ExpandColumnsToFit(TRUE);
	//-----------------------------------------	
	barRadio.SetCheck(true);
	pieradio.SetCheck(false);
	PlotBar();
	//-------------------------------------------
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void ReportDialog::OnBnClickedRadioBarchart()
{
	PlotBar();
}


void ReportDialog::OnBnClickedRadioPie()
{
	PlotPie();
}

void ReportDialog::PlotBar()
{
	barRadio.SetCheck(true);
	pieradio.SetCheck(false);

	m_chart.RemoveAllSeries();
	m_chart.AddSeries(scBar3D);

	for (auto itr = salesData.begin(); itr != salesData.end(); itr++)
	{
		auto val = itr->second;

		CString item = std::get<1>(val).c_str();
		double price = atoi(std::get<2>(val).c_str());
		double units = atoi(std::get<3>(val).c_str());

		m_chart.Series(0).AddXY(price,units,item , RGB(255, 0, 0));
	}

	m_chart.GetLegend().SetVisible(false);
	m_chart.Series(0).SetColor(RGB(255, 0, 0));
	m_chart.Repaint();
}


void ReportDialog::PlotPie()
{
	barRadio.SetCheck(false);
	pieradio.SetCheck(true);

	m_chart.RemoveAllSeries();
	m_chart.AddSeries(scPie);

	for (int i = 0; i < 10; i++)
		m_chart.Series(0).Add(i, "", RGB(i * 10 % 255, 0, 0));


	m_chart.Series(0).SetColor(RGB(255, 0, 0));
	m_chart.Repaint();
}

void ReportDialog::OnBnClickedButtonCsvreport()
{
	ofstream myfile;
	myfile.open("sales.csv");
	
	myfile << "ID" <<"\t"<<"ITEM"<<"\t"<< "PRICE"<<"\t"<<"UNITS"<<"\t"<<"YEAR"<<endl;
	for (auto itr = salesData.begin(); itr != salesData.end(); itr++)
	{
		myfile << itr->first << "\t" << get<0>(itr->second)<<"\t" << get<1>(itr->second)<<"\t" << get<2>(itr->second)<< "\t" << get<3>(itr->second);
			myfile << endl;
	}

	myfile.close();
	ShellExecute(NULL, "open", "sales.csv", NULL, NULL, SW_HIDE);
}


void ReportDialog::LoadFromDataBase()
{
	MYSQL *conn;
	MYSQL_ROW row = nullptr;
	MYSQL_RES *res;


	conn = mysql_init(0);

	conn = mysql_real_connect(conn, "localhost", "root", "password", "testdb", 3306, NULL, 0);
	int qstate;
	stringstream streamobj;

	if (conn)
	{
		streamobj << "successfully connected";
		string query = "SELECT * from test";
		const char *q = query.c_str();
		qstate = mysql_query(conn, q);

		if (!qstate)
		{
			res = mysql_store_result(conn);
			streamobj << endl;
			while (row = mysql_fetch_row(res))
			{
				streamobj << row[0] << "\t" << row[1] << "\t" << row[2];
				streamobj << endl;
			//	myfile << row[0] << "\t" << row[1] << "\t" << row[2] << endl;
			}

		}

		
		
	}

}
BEGIN_EVENTSINK_MAP(ReportDialog, CDialogEx)
	ON_EVENT(ReportDialog, IDC_TCHART1, 8, ReportDialog::OnDblClickTchart1, VTS_NONE)
END_EVENTSINK_MAP()


void ReportDialog::OnDblClickTchart1()
{
	m_chart.ShowEditor(-1);
}
