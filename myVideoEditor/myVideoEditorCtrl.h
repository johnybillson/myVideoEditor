#pragma once

// myVideoEditorCtrl.h�: d�claration de la classe du contr�le ActiveX CmyVideoEditorCtrl.


// CmyVideoEditorCtrl�: consultez myVideoEditorCtrl.cpp pour l'impl�mentation.

class CmyVideoEditorCtrl : public COleControl
{
	DECLARE_DYNCREATE(CmyVideoEditorCtrl)

// Constructeur
public:
	CmyVideoEditorCtrl();

// Substitutions
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Impl�mentation
protected:
	~CmyVideoEditorCtrl();

	DECLARE_OLECREATE_EX(CmyVideoEditorCtrl)    // Fabrique de classes et guid
	DECLARE_OLETYPELIB(CmyVideoEditorCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CmyVideoEditorCtrl)     // ID de page de propri�t�s
	DECLARE_OLECTLTYPE(CmyVideoEditorCtrl)		// Nom de type et �tat divers

// Tables des messages
	DECLARE_MESSAGE_MAP()

// Tables de dispatch
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Tables d'�v�nements
	DECLARE_EVENT_MAP()

// ID de dispatch et d'�v�nement
public:
	enum {
	};
};

