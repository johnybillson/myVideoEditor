#pragma once

// myVideoEditorCtrl.h : déclaration de la classe du contrôle ActiveX CmyVideoEditorCtrl.


// CmyVideoEditorCtrl : consultez myVideoEditorCtrl.cpp pour l'implémentation.

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

// Implémentation
protected:
	~CmyVideoEditorCtrl();

	DECLARE_OLECREATE_EX(CmyVideoEditorCtrl)    // Fabrique de classes et guid
	DECLARE_OLETYPELIB(CmyVideoEditorCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CmyVideoEditorCtrl)     // ID de page de propriétés
	DECLARE_OLECTLTYPE(CmyVideoEditorCtrl)		// Nom de type et état divers

// Tables des messages
	DECLARE_MESSAGE_MAP()

// Tables de dispatch
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Tables d'événements
	DECLARE_EVENT_MAP()

// ID de dispatch et d'événement
public:
	enum {
	};
};

