// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;
class CBrush1;

/////////////////////////////////////////////////////////////////////////////
// CHorizHistogramSeries wrapper class

class CHorizHistogramSeries : public COleDispatchDriver
{
public:
	CHorizHistogramSeries() {}		// Calls COleDispatchDriver default constructor
	CHorizHistogramSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHorizHistogramSeries(const CHorizHistogramSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPen1 GetLinesPen();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CPen1 GetLinePen();
	CBrush1 GetBrush();
	double GetYOrigin();
	void SetYOrigin(double newValue);
	BOOL GetUseYOrigin();
	void SetUseYOrigin(BOOL bNewValue);
};
