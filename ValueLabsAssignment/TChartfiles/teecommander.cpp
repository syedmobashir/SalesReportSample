// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "teecommander.h"

// Dispatch interfaces referenced by this interface
#include "TeeCommanderButton.h"
#include "gradient.h"

/////////////////////////////////////////////////////////////////////////////
// CTeeCommander

IMPLEMENT_DYNCREATE(CTeeCommander, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CTeeCommander properties

/////////////////////////////////////////////////////////////////////////////
// CTeeCommander operations

void CTeeCommander::SetChart(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CTeeCommander::SetChartLink(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CTeeCommander::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CTeeCommander::SetChartLinkx64(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL CTeeCommander::GetLabelValues()
{
	BOOL result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetLabelValues(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

unsigned long CTeeCommander::GetColor()
{
	unsigned long result;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CTeeCommander::GetEnabled()
{
	BOOL result;
	InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetEnabled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CTeeCommander::SetEditor(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CTeeCommander::SetPreviewer(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CTeeCommander::SetEditorLink(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CTeeCommander::SetPreviewerLink(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CTeeCommander::GetVertical()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetVertical(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

VARIANT CTeeCommander::GetControls()
{
	VARIANT result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetControls(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

VARIANT CTeeCommander::GetButtons()
{
	VARIANT result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetButtons(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

long CTeeCommander::GetBevelInner()
{
	long result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetBevelInner(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CTeeCommander::GetBevelOuter()
{
	long result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetBevelOuter(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CTeeCommander::GetBevelWidth()
{
	long result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetBevelWidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CTeeCommander::GetBevelOffset()
{
	long result;
	InvokeHelper(0x130, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetBevelOffset(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CTeeCommander::GetBorderStyle()
{
	long result;
	InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetBorderStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CTeeCommander::GetDefaultButton()
{
	long result;
	InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetDefaultButton(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CTeeCommanderButton CTeeCommander::GetButton3D()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonCopy()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonDepth()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x135, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonEdit()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonMove()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonNormal()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonPrint()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonRotate()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonSave()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

CTeeCommanderButton CTeeCommander::GetButtonZoom()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTeeCommanderButton(pDispatch);
}

void CTeeCommander::RepositionControls()
{
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CGradient CTeeCommander::GetGradient()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x13e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGradient(pDispatch);
}

BOOL CTeeCommander::GetFullRotation()
{
	BOOL result;
	InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetFullRotation(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CTeeCommander::GetRotateInertia()
{
	long result;
	InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeCommander::SetRotateInertia(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x140, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CTeeCommander::SetEditorLinkx64(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

void CTeeCommander::SetPreviewerLinkx64(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}
