#if !defined(AFX_CHARTGRIDCOLS_H__62252D49_1806_4AA9_B8DB_C536FE065569__INCLUDED_)
#define AFX_CHARTGRIDCOLS_H__62252D49_1806_4AA9_B8DB_C536FE065569__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CChartGridCols wrapper class

class CChartGridCols : public COleDispatchDriver
{
public:
	CChartGridCols() {}		// Calls COleDispatchDriver default constructor
	CChartGridCols(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChartGridCols(const CChartGridCols& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCol();
	void SetCol(long nNewValue);
	long GetCount();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHARTGRIDCOLS_H__62252D49_1806_4AA9_B8DB_C536FE065569__INCLUDED_)