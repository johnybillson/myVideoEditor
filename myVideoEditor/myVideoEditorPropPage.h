#pragma once

// myVideoEditorPropPage.h : déclaration de la classe de page de propriétés CmyVideoEditorPropPage.


// CmyVideoEditorPropPage : consultez myVideoEditorPropPage.cpp pour l'implémentation.

class CmyVideoEditorPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CmyVideoEditorPropPage)
	DECLARE_OLECREATE_EX(CmyVideoEditorPropPage)

// Constructeur
public:
	CmyVideoEditorPropPage();

// Données de boîte de dialogue
	enum { IDD = IDD_PROPPAGE_MYVIDEOEDITOR };

// Implémentation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

// Tables des messages
protected:
	DECLARE_MESSAGE_MAP()
};

