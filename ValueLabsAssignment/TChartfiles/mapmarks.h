// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMapMarks wrapper class

class CMapMarks : public COleDispatchDriver
{
public:
	CMapMarks() {}		// Calls COleDispatchDriver default constructor
	CMapMarks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMapMarks(const CMapMarks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	BOOL GetCentroid();
	void SetCentroid(BOOL bNewValue);
	long GetTextStyle();
	void SetTextStyle(long nNewValue);
	BOOL GetUpperCase();
	void SetUpperCase(BOOL bNewValue);
};
