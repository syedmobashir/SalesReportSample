// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "teecorners.h"

// Dispatch interfaces referenced by this interface
#include "teecorner.h"


/////////////////////////////////////////////////////////////////////////////
// CTeeCorners properties

/////////////////////////////////////////////////////////////////////////////
// CTeeCorners operations

CTeeCorner CTeeCorners::GetLeftBottom()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCorner(pDispatch);
}

CTeeCorner CTeeCorners::GetLeftTop()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCorner(pDispatch);
}

CTeeCorner CTeeCorners::GetRightBottom()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCorner(pDispatch);
}

CTeeCorner CTeeCorners::GetRightTop()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCorner(pDispatch);
}