// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CDrawLine;

/////////////////////////////////////////////////////////////////////////////
// CDrawLineList wrapper class

class CDrawLineList : public COleDispatchDriver
{
public:
	CDrawLineList() {}		// Calls COleDispatchDriver default constructor
	CDrawLineList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDrawLineList(const CDrawLineList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CDrawLine GetItems(long Index);
	VARIANT GetControlDefault(long Index);
	void Clear();
	void Delete(long Index);
	long GetCount();
};