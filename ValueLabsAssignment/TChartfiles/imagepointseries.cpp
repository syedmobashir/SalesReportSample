// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "imagepointseries.h"

// Dispatch interfaces referenced by this interface
#include "seriespointeritems.h"
#include "pen.h"
#include "brush.h"
#include "teeshadow.h"
#include "teepicture.h"


/////////////////////////////////////////////////////////////////////////////
// CImagePointSeries properties

/////////////////////////////////////////////////////////////////////////////
// CImagePointSeries operations

CSeriesPointerItems CImagePointSeries::GetPointer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x641, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesPointerItems(pDispatch);
}

BOOL CImagePointSeries::GetStairs()
{
	BOOL result;
	InvokeHelper(0x642, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetStairs(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x642, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CImagePointSeries::GetInvertedStairs()
{
	BOOL result;
	InvokeHelper(0x643, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetInvertedStairs(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x643, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CImagePointSeries::GetLinePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x644, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CImagePointSeries::GetLineBrush()
{
	long result;
	InvokeHelper(0x645, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetLineBrush(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x645, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CImagePointSeries::GetClickableLine()
{
	BOOL result;
	InvokeHelper(0x646, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetClickableLine(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x646, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CImagePointSeries::GetLineHeight()
{
	long result;
	InvokeHelper(0x647, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetLineHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x647, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CImagePointSeries::GetDark3D()
{
	BOOL result;
	InvokeHelper(0x648, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetDark3D(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x648, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CBrush1 CImagePointSeries::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x649, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBrush1(pDispatch);
}

BOOL CImagePointSeries::GetColorEachLine()
{
	BOOL result;
	InvokeHelper(0x64a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetColorEachLine(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x64a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CImagePointSeries::GetOutline()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x64b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CImagePointSeries::GetTransparency()
{
	long result;
	InvokeHelper(0x64c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetTransparency(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CTeeShadow CImagePointSeries::GetShadow()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x64d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeShadow(pDispatch);
}

long CImagePointSeries::GetTreatNulls()
{
	long result;
	InvokeHelper(0x64e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetTreatNulls(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CImagePointSeries::GetSmoothed()
{
	BOOL result;
	InvokeHelper(0x64f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetSmoothed(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x64f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CImagePointSeries::GetClickTolerance()
{
	long result;
	InvokeHelper(0x650, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetClickTolerance(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x650, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CImagePointSeries::GetDrawStyle()
{
	long result;
	InvokeHelper(0x651, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetDrawStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x651, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CImagePointSeries::GetInflateMargins()
{
	BOOL result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetInflateMargins(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CImagePointSeries::GetPointerBehind()
{
	BOOL result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetPointerBehind(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CImagePointSeries::GetFastPoint()
{
	BOOL result;
	InvokeHelper(0x6f9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetFastPoint(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6f9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CTeePicture CImagePointSeries::GetImagePoint()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeePicture(pDispatch);
}

BOOL CImagePointSeries::GetImageTransparent()
{
	BOOL result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImagePointSeries::SetImageTransparent(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}