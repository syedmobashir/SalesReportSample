// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPDFExport wrapper class

class CPDFExport : public COleDispatchDriver
{
public:
	CPDFExport() {}		// Calls COleDispatchDriver default constructor
	CPDFExport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFExport(const CPDFExport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	void SaveToFile(LPCTSTR FileName);
	VARIANT SaveToStream();
};
