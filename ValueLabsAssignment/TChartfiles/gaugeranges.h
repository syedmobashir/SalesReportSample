// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CGaugeRange;

/////////////////////////////////////////////////////////////////////////////
// CGaugeRanges wrapper class

class CGaugeRanges : public COleDispatchDriver
{
public:
	CGaugeRanges() {}		// Calls COleDispatchDriver default constructor
	CGaugeRanges(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGaugeRanges(const CGaugeRanges& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CGaugeRange GetItems(long Index);
	long Add(double StartValue, double EndValue, unsigned long Color);
};