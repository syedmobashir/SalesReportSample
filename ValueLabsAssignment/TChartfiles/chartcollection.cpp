// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "chartcollection.h"

// Dispatch interfaces referenced by this interface
#include "subchartchart.h"
#include "subchart.h"


/////////////////////////////////////////////////////////////////////////////
// CChartCollection properties

/////////////////////////////////////////////////////////////////////////////
// CChartCollection operations

CSubChartChart CChartCollection::AddChart(LPCTSTR AName)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		AName);
	return CSubChartChart(pDispatch);
}

CSubChart CChartCollection::GetItems(long Index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		Index);
	return CSubChart(pDispatch);
}

void CChartCollection::Clear()
{
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CChartCollection::Delete(long AIndex)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 AIndex);
}

long CChartCollection::GetCount()
{
	long result;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}