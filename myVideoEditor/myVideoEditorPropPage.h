#pragma once

// myVideoEditorPropPage.h�: d�claration de la classe de page de propri�t�s CmyVideoEditorPropPage.


// CmyVideoEditorPropPage�: consultez myVideoEditorPropPage.cpp pour l'impl�mentation.

class CmyVideoEditorPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CmyVideoEditorPropPage)
	DECLARE_OLECREATE_EX(CmyVideoEditorPropPage)

// Constructeur
public:
	CmyVideoEditorPropPage();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_PROPPAGE_MYVIDEOEDITOR };

// Impl�mentation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

// Tables des messages
protected:
	DECLARE_MESSAGE_MAP()
};

