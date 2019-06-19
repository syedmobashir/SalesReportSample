// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTextShape;
class CAnnotationCallout;
class CTeeSelected;

/////////////////////////////////////////////////////////////////////////////
// CRectangleTool wrapper class

class CRectangleTool : public COleDispatchDriver
{
public:
	CRectangleTool() {}		// Calls COleDispatchDriver default constructor
	CRectangleTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRectangleTool(const CRectangleTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetPosition();
	void SetPosition(long nNewValue);
	CTextShape GetShape();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	CAnnotationCallout GetCallout();
	long GetTextAlignment();
	void SetTextAlignment(long nNewValue);
	BOOL Clicked(long X, long Y);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	short GetCursor();
	void SetCursor(short nNewValue);
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	// method 'GetBounds' not emitted because of invalid return type or parameter type
	void SetBounds(long Left, long Top, long Right, long Bottom);
	long GetPositionUnits();
	void SetPositionUnits(long nNewValue);
	CTeeSelected GetSelected();
	BOOL GetDragging();
	BOOL GetResizing();
	long ClickedEdge(long X, long Y);
	BOOL GetAllowDrag();
	void SetAllowDrag(BOOL bNewValue);
	BOOL GetAllowResize();
	void SetAllowResize(BOOL bNewValue);
};
