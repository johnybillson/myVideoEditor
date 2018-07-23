// myVideoEditorPropPage.cpp : implémentation de la classe de la page de propriétés CmyVideoEditorPropPage.

#include "stdafx.h"
#include "myVideoEditor.h"
#include "myVideoEditorPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CmyVideoEditorPropPage, COlePropertyPage)



// Table des messages

BEGIN_MESSAGE_MAP(CmyVideoEditorPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialisation de la fabrique de classes et du guid

IMPLEMENT_OLECREATE_EX(CmyVideoEditorPropPage, "MYVIDEOEDITOR.myVideoEditorPropPage.1",
	0x2befa5e8, 0xf879, 0x4a84, 0x86, 0xc, 0x55, 0x40, 0xfe, 0xe2, 0x43, 0x68)



// CmyVideoEditorPropPage::CmyVideoEditorPropPageFactory::UpdateRegistry -
// Ajoute ou supprime des entrées de la base de registres pour CmyVideoEditorPropPage

BOOL CmyVideoEditorPropPage::CmyVideoEditorPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MYVIDEOEDITOR_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CmyVideoEditorPropPage::CmyVideoEditorPropPage - Constructeur

CmyVideoEditorPropPage::CmyVideoEditorPropPage() :
	COlePropertyPage(IDD, IDS_MYVIDEOEDITOR_PPG_CAPTION)
{
}



// CmyVideoEditorPropPage::DoDataExchange - Transfère les données entre la page et les propriétés

void CmyVideoEditorPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// Gestionnaires de messages de CmyVideoEditorPropPage
