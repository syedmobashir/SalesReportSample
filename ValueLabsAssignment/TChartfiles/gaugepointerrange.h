// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;
class CGradient;
class CTeeShadow;
class CTeeEmboss;
class CTeePicture;

/////////////////////////////////////////////////////////////////////////////
// CGaugePointerRange wrapper class

class CGaugePointerRange : public COleDispatchDriver
{
public:
	CGaugePointerRange() {}		// Calls COleDispatchDriver default constructor
	CGaugePointerRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGaugePointerRange(const CGaugePointerRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CBrush1 GetBrush();
	BOOL GetDraw3D();
	void SetDraw3D(BOOL bNewValue);
	long GetHorizontalSize();
	void SetHorizontalSize(long nNewValue);
	long GetVerticalSize();
	void SetVerticalSize(long nNewValue);
	BOOL GetInflateMargins();
	void SetInflateMargins(BOOL bNewValue);
	CPen1 GetPen();
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	void DrawPointer(const VARIANT& DC, BOOL Is3D, long px, long py, long tmpHoriz, long tmpVert, unsigned long AColor, long AStyle);
	CGradient GetGradient();
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CTeeShadow GetShadow();
	BOOL GetFullGradient();
	void SetFullGradient(BOOL bNewValue);
	long GetDepth();
	void SetDepth(long nNewValue);
	CTeeEmboss GetEmboss();
	CTeePicture GetPicture();
	double GetSizeFloat();
	void SetSizeFloat(double newValue);
	long GetSizeUnits();
	void SetSizeUnits(long nNewValue);
	long GetGaugeStyle();
	void SetGaugeStyle(long nNewValue);
	double GetEndValue();
	void SetEndValue(double newValue);
	double GetStartValue();
	void SetStartValue(double newValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	BOOL GetSpiralled();
	void SetSpiralled(BOOL bNewValue);
};
