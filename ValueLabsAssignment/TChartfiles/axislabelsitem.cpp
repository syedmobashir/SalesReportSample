// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "axislabelsitem.h"

// Dispatch interfaces referenced by this interface
#include "customtextshape.h"


/////////////////////////////////////////////////////////////////////////////
// CAxisLabelsItem properties

/////////////////////////////////////////////////////////////////////////////
// CAxisLabelsItem operations

double CAxisLabelsItem::GetValue()
{
	double result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CAxisLabelsItem::SetValue(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString CAxisLabelsItem::GetText()
{
	CString result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CAxisLabelsItem::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CAxisLabelsItem::GetLabelPos()
{
	long result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CAxisLabelsItem::SetLabelPos(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CCustomTextShape CAxisLabelsItem::GetFormat()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCustomTextShape(pDispatch);
}
