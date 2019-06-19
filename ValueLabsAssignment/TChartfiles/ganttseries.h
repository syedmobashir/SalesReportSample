// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CSeriesPointerItems;
class CPen1;
class CBrush1;
class CTeeShadow;
class CValueList;
class CMarksCallout;

/////////////////////////////////////////////////////////////////////////////
// CGanttSeries wrapper class

class CGanttSeries : public COleDispatchDriver
{
public:
	CGanttSeries() {}		// Calls COleDispatchDriver default constructor
	CGanttSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGanttSeries(const CGanttSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

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
	CPen1 GetConnectingPen();
	CValueList GetEndValues();
	CValueList GetStartValues();
	CValueList GetNextTask();
	long AddGantt(double AStart, double AEnd, double AY, LPCTSTR SomeLabel);
	long AddGanttColor(double AStart, double AEnd, double AY, LPCTSTR AXLabel, unsigned long Value);
	CMarksCallout GetCallout();
};