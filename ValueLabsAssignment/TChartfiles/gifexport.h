// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CGIFExport wrapper class

class CGIFExport : public COleDispatchDriver
{
public:
	CGIFExport() {}		// Calls COleDispatchDriver default constructor
	CGIFExport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGIFExport(const CGIFExport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

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
	long GetCompression();
	void SetCompression(long nNewValue);
	long GetDitherMode();
	void SetDitherMode(long nNewValue);
	long GetColorReduction();
	void SetColorReduction(long nNewValue);
};
