// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTools;

/////////////////////////////////////////////////////////////////////////////
// CToolList wrapper class

class CToolList : public COleDispatchDriver
{
public:
	CToolList() {}		// Calls COleDispatchDriver default constructor
	CToolList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CToolList(const CToolList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long Add(long ToolClass);
	CTools GetItems(long Index);
	VARIANT GetControlDefault(long Index);
	void Clear();
	void Delete(long Index);
	long GetCount();
	void SetActive(BOOL bNewValue);
	void Exchange(long Index1, long Index2);
	void ShowGallery();
};