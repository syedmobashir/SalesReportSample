// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CThemesList wrapper class

class CThemesList : public COleDispatchDriver
{
public:
	CThemesList() {}		// Calls COleDispatchDriver default constructor
	CThemesList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CThemesList(const CThemesList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void ApplyFromChartLink(long Chart);
	void ApplyFromTee(LPCTSTR FileName);
	void ApplyFromChartLinkx64(const VARIANT& Chartx64);
};