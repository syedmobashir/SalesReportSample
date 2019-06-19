// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;
class CGradient;
class CTeePicture;
class CColorLineTool;

/////////////////////////////////////////////////////////////////////////////
// CColorBandTool wrapper class

class CColorBandTool : public COleDispatchDriver
{
public:
	CColorBandTool() {}		// Calls COleDispatchDriver default constructor
	CColorBandTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CColorBandTool(const CColorBandTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetAxis();
	void SetAxis(const VARIANT& newValue);
	CBrush1 GetBrush();
	CPen1 GetPen();
	double GetEndValue();
	void SetEndValue(double newValue);
	double GetStartValue();
	void SetStartValue(double newValue);
	BOOL GetDrawBehind();
	void SetDrawBehind(BOOL bNewValue);
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	CGradient GetGradient();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	BOOL Clicked(long X, long Y);
	BOOL GetResizeStart();
	void SetResizeStart(BOOL bNewValue);
	BOOL GetResizeEnd();
	void SetResizeEnd(BOOL bNewValue);
	CPen1 GetStartLinePen();
	CPen1 GetEndLinePen();
	BOOL GetDrawBehindAxes();
	void SetDrawBehindAxes(BOOL bNewValue);
	short GetCursor();
	void SetCursor(short nNewValue);
	CTeePicture GetPicture();
	BOOL GetAllowDrag();
	void SetAllowDrag(BOOL bNewValue);
	BOOL GetNoLimitDrag();
	void SetNoLimitDrag(BOOL bNewValue);
	CColorLineTool GetStartLine();
	CColorLineTool GetEndLine();
};
