// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "deltapointseries.h"

// Dispatch interfaces referenced by this interface
#include "seriespointeritems.h"
#include "pen.h"
#include "brush.h"
#include "teeshadow.h"
#include "teepicture.h"


/////////////////////////////////////////////////////////////////////////////
// CDeltaPointSeries properties

/////////////////////////////////////////////////////////////////////////////
// CDeltaPointSeries operations

CSeriesPointerItems CDeltaPointSeries::GetPointer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x641, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSeriesPointerItems(pDispatch);
}

BOOL CDeltaPointSeries::GetStairs()
{
	BOOL result;
	InvokeHelper(0x642, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetStairs(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x642, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDeltaPointSeries::GetInvertedStairs()
{
	BOOL result;
	InvokeHelper(0x643, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetInvertedStairs(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x643, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CDeltaPointSeries::GetLinePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x644, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CDeltaPointSeries::GetLineBrush()
{
	long result;
	InvokeHelper(0x645, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetLineBrush(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x645, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDeltaPointSeries::GetClickableLine()
{
	BOOL result;
	InvokeHelper(0x646, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetClickableLine(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x646, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CDeltaPointSeries::GetLineHeight()
{
	long result;
	InvokeHelper(0x647, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetLineHeight(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x647, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDeltaPointSeries::GetDark3D()
{
	BOOL result;
	InvokeHelper(0x648, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetDark3D(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x648, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CBrush1 CDeltaPointSeries::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x649, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBrush1(pDispatch);
}

BOOL CDeltaPointSeries::GetColorEachLine()
{
	BOOL result;
	InvokeHelper(0x64a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetColorEachLine(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x64a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CDeltaPointSeries::GetOutline()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x64b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CDeltaPointSeries::GetTransparency()
{
	long result;
	InvokeHelper(0x64c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetTransparency(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CTeeShadow CDeltaPointSeries::GetShadow()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x64d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeShadow(pDispatch);
}

long CDeltaPointSeries::GetTreatNulls()
{
	long result;
	InvokeHelper(0x64e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetTreatNulls(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x64e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDeltaPointSeries::GetSmoothed()
{
	BOOL result;
	InvokeHelper(0x64f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetSmoothed(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x64f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CDeltaPointSeries::GetClickTolerance()
{
	long result;
	InvokeHelper(0x650, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetClickTolerance(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x650, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CDeltaPointSeries::GetDrawStyle()
{
	long result;
	InvokeHelper(0x651, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetDrawStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x651, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CDeltaPointSeries::GetInflateMargins()
{
	BOOL result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetInflateMargins(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDeltaPointSeries::GetPointerBehind()
{
	BOOL result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetPointerBehind(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CDeltaPointSeries::GetFastPoint()
{
	BOOL result;
	InvokeHelper(0x6f9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetFastPoint(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6f9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CTeePicture CDeltaPointSeries::GetImagePoint()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeePicture(pDispatch);
}

BOOL CDeltaPointSeries::GetImageTransparent()
{
	BOOL result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetImageTransparent(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CTeePicture CDeltaPointSeries::GetEqualImage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeePicture(pDispatch);
}

CTeePicture CDeltaPointSeries::GetGreaterImage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeePicture(pDispatch);
}

long CDeltaPointSeries::GetImageStyle()
{
	long result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CDeltaPointSeries::SetImageStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CTeePicture CDeltaPointSeries::GetLowerImage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeePicture(pDispatch);
}
