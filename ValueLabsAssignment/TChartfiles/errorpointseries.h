// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CSeriesPointerItems;
class CPen1;
class CBrush1;
class CTeeShadow;
class CErrors;

/////////////////////////////////////////////////////////////////////////////
// CErrorPointSeries wrapper class

class CErrorPointSeries : public COleDispatchDriver
{
public:
	CErrorPointSeries() {}		// Calls COleDispatchDriver default constructor
	CErrorPointSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CErrorPointSeries(const CErrorPointSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CSeriesPointerItems GetPointer();
	BOOL GetStairs();
	void SetStairs(BOOL bNewValue);
	BOOL GetInvertedStairs();
	void SetInvertedStairs(BOOL bNewValue);
	CPen1 GetLinePen();
	long GetLineBrush();
	void SetLineBrush(long nNewValue);
	BOOL GetClickableLine();
	void SetClickableLine(BOOL bNewValue);
	long GetLineHeight();
	void SetLineHeight(long nNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	CBrush1 GetBrush();
	BOOL GetColorEachLine();
	void SetColorEachLine(BOOL bNewValue);
	CPen1 GetOutline();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CTeeShadow GetShadow();
	long GetTreatNulls();
	void SetTreatNulls(long nNewValue);
	BOOL GetSmoothed();
	void SetSmoothed(BOOL bNewValue);
	long GetClickTolerance();
	void SetClickTolerance(long nNewValue);
	long GetDrawStyle();
	void SetDrawStyle(long nNewValue);
	BOOL GetInflateMargins();
	void SetInflateMargins(BOOL bNewValue);
	BOOL GetPointerBehind();
	void SetPointerBehind(BOOL bNewValue);
	BOOL GetFastPoint();
	void SetFastPoint(BOOL bNewValue);
	long Add(double AX, double AY, double ALeft, double ARight, double ATop, double ABottom, LPCTSTR AXLabel, unsigned long Value);
	CErrors GetErrors();
};
