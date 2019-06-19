
// ValueLabsAssignmentDoc.h : interface of the CValueLabsAssignmentDoc class
//


#pragma once
#include <map>

class CValueLabsAssignmentDoc : public CDocument
{
protected: // create from serialization only
	CValueLabsAssignmentDoc() noexcept;
	DECLARE_DYNCREATE(CValueLabsAssignmentDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CValueLabsAssignmentDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	std::map<int, std::tuple< std::string, std::string, std::string, std::string>> salesmap;

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS

	//
public :
	std::map<int, std::tuple< std::string, std::string, std::string, std::string>>& GetSalesDataforModification()
	{		return	salesmap;
	}


};
