// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "javascriptexport.h"

// Dispatch interfaces referenced by this interface
#include "strings.h"


/////////////////////////////////////////////////////////////////////////////
// CJavaScriptExport properties

/////////////////////////////////////////////////////////////////////////////
// CJavaScriptExport operations

long CJavaScriptExport::GetWidth()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CJavaScriptExport::SetWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CJavaScriptExport::GetHeight()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CJavaScriptExport::SetHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CJavaScriptExport::SaveToFile(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

VARIANT CJavaScriptExport::SaveToStream()
{
	VARIANT result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CString CJavaScriptExport::GetSourceScriptPath()
{
	CString result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CJavaScriptExport::SetSourceScriptPath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CJavaScriptExport::GetChartName()
{
	CString result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CJavaScriptExport::SetChartName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CJavaScriptExport::GetCanvasName()
{
	CString result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CJavaScriptExport::SetCanvasName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL CJavaScriptExport::GetDoFullPage()
{
	BOOL result;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CJavaScriptExport::SetDoFullPage(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CJavaScriptExport::SaveToHTML5File(LPCTSTR FileName, long AWidth, long AHeight)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4 VTS_I4;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName, AWidth, AHeight);
}

CStrings CJavaScriptExport::GetCustomCode()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CStrings(pDispatch);
}
