// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "point3dseries.h"

// Dispatch interfaces referenced by this interface
#include "valuelist.h"
#include "brush.h"
#include "pen.h"
#include "pointer.h"


/////////////////////////////////////////////////////////////////////////////
// CPoint3DSeries properties

/////////////////////////////////////////////////////////////////////////////
// CPoint3DSeries operations

long CPoint3DSeries::AddXYZ(double AX, double AY, double AZ, LPCTSTR AXLabel, unsigned long Value)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_BSTR VTS_I4;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		AX, AY, AZ, AXLabel, Value);
	return result;
}

double CPoint3DSeries::MaxZValue()
{
	double result;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

double CPoint3DSeries::MinZValue()
{
	double result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
	return result;
}

long CPoint3DSeries::GetTimesZOrder()
{
	long result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetTimesZOrder(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CValueList CPoint3DSeries::GetZValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

double CPoint3DSeries::GetZValue(long Index)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		Index);
	return result;
}

void CPoint3DSeries::SetZValue(long Index, double newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 Index, newValue);
}

CBrush1 CPoint3DSeries::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x83, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBrush1(pDispatch);
}

CPen1 CPoint3DSeries::GetPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

void CPoint3DSeries::AddArrayXYZ(const VARIANT& XArray, const VARIANT& YArray, const VARIANT& ZArray)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x87, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &XArray, &YArray, &ZArray);
}

void CPoint3DSeries::AddArrayGrid(long NumX, long NumZ, const VARIANT& XZArray)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT;
	InvokeHelper(0xc9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumX, NumZ, &XZArray);
}

long CPoint3DSeries::CalcZPos(long ValueIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ValueIndex);
	return result;
}

void CPoint3DSeries::AddArrayXYZColor(const VARIANT& XArray, const VARIANT& YArray, const VARIANT& ZArray, const VARIANT& Colors)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &XArray, &YArray, &ZArray, &Colors);
}

long CPoint3DSeries::AddPalette(double Value, unsigned long Color)
{
	long result;
	static BYTE parms[] =
		VTS_R8 VTS_I4;
	InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Value, Color);
	return result;
}

unsigned long CPoint3DSeries::GetStartColor()
{
	unsigned long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetStartColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CPoint3DSeries::GetEndColor()
{
	unsigned long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetEndColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CPoint3DSeries::GetPaletteSteps()
{
	long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetPaletteSteps(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CPoint3DSeries::GetUsePalette()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetUsePalette(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CPoint3DSeries::GetUseColorRange()
{
	BOOL result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetUseColorRange(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CPoint3DSeries::ClearPalette()
{
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPoint3DSeries::CreateDefaultPalette(long NumSteps)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x13, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 NumSteps);
}

unsigned long CPoint3DSeries::GetSurfacePaletteColor(double Y)
{
	unsigned long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Y);
	return result;
}

unsigned long CPoint3DSeries::GetMidColor()
{
	unsigned long result;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetMidColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x21, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CPoint3DSeries::CreateRangePalette()
{
	InvokeHelper(0x22, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CPoint3DSeries::GetPaletteStyle()
{
	long result;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetPaletteStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x23, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CPoint3DSeries::GetUsePaletteMin()
{
	BOOL result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetUsePaletteMin(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

double CPoint3DSeries::GetPaletteMin()
{
	double result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetPaletteMin(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

double CPoint3DSeries::GetPaletteStep()
{
	double result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetPaletteStep(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CPoint3DSeries::InvertPalette()
{
	InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CPoint3DSeries::AddCustomPalette(const VARIANT& colorArray)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x131, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &colorArray);
}

long CPoint3DSeries::GetLegendEvery()
{
	long result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetLegendEvery(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPoint3DSeries::CountLegendItems()
{
	long result;
	InvokeHelper(0x133, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::LoadPaletteFromFile(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x134, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void CPoint3DSeries::SavePaletteToFile(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x135, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

double CPoint3DSeries::GetDepthSize()
{
	double result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetDepthSize(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CPointer CPoint3DSeries::GetPointer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPointer(pDispatch);
}

CPen1 CPoint3DSeries::GetLinePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CPen1 CPoint3DSeries::GetBaseLine()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

long CPoint3DSeries::GetLineTransparency()
{
	long result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPoint3DSeries::SetLineTransparency(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}
