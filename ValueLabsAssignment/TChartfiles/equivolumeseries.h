// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CSeriesPointerItems;
class CPen1;
class CBrush1;
class CTeeShadow;
class CValueList;
class CGradient;
class CPointer;

/////////////////////////////////////////////////////////////////////////////
// CEquiVolumeSeries wrapper class

class CEquiVolumeSeries : public COleDispatchDriver
{
public:
	CEquiVolumeSeries() {}		// Calls COleDispatchDriver default constructor
	CEquiVolumeSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CEquiVolumeSeries(const CEquiVolumeSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

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
	long GetCandleStyle();
	void SetCandleStyle(long nNewValue);
	long GetCandleWidth();
	void SetCandleWidth(long nNewValue);
	CValueList GetCloseValues();
	CValueList GetDateValues();
	unsigned long GetDownCloseColor();
	void SetDownCloseColor(unsigned long newValue);
	CValueList GetHighValues();
	CValueList GetLowValues();
	CValueList GetOpenValues();
	BOOL GetShowCloseTick();
	void SetShowCloseTick(BOOL bNewValue);
	BOOL GetShowOpenTick();
	void SetShowOpenTick(BOOL bNewValue);
	unsigned long GetUpCloseColor();
	void SetUpCloseColor(unsigned long newValue);
	long AddCandle(double DateValue, double OpenValue, double HighValue, double LowValue, double CloseValue, LPCTSTR ALabel, unsigned long AColor);
	CPen1 GetHighLowPen();
	long GetColorStyle();
	void SetColorStyle(long nNewValue);
	CGradient GetUpCloseGradient();
	CGradient GetDownCloseGradient();
	unsigned long GetOpenTickColor();
	void SetOpenTickColor(unsigned long newValue);
	unsigned long GetCloseTickColor();
	void SetCloseTickColor(unsigned long newValue);
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	long GetBorderColor();
	void SetBorderColor(long nNewValue);
	BOOL GetDraw3D();
	void SetDraw3D(BOOL bNewValue);
	BOOL GetRemoveGaps();
	void SetRemoveGaps(BOOL bNewValue);
	long GetHighLowColor();
	void SetHighLowColor(long nNewValue);
	long GetBoxFillStyle();
	void SetBoxFillStyle(long nNewValue);
	CValueList GetVolumeValues();
	CPointer GetVolumePointer();
	long GetPointGap();
	void SetPointGap(long nNewValue);
};
