// myVideoEditorCtrl.cpp : implémentation de la classe du contrôle ActiveX CmyVideoEditorCtrl.

#include "stdafx.h"
#include "myVideoEditor.h"
#include "myVideoEditorCtrl.h"
#include "myVideoEditorPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CmyVideoEditorCtrl, COleControl)



// Table des messages

BEGIN_MESSAGE_MAP(CmyVideoEditorCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Table de dispatch

BEGIN_DISPATCH_MAP(CmyVideoEditorCtrl, COleControl)
	DISP_FUNCTION_ID(CmyVideoEditorCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// Table d'événements

BEGIN_EVENT_MAP(CmyVideoEditorCtrl, COleControl)
END_EVENT_MAP()



// Pages de propriétés

// TODO: ajoutez autant de pages de propriétés que nécessaire. N'oubliez pas d'augmenter le compteur !
BEGIN_PROPPAGEIDS(CmyVideoEditorCtrl, 1)
	PROPPAGEID(CmyVideoEditorPropPage::guid)
END_PROPPAGEIDS(CmyVideoEditorCtrl)



// Initialisation de la fabrique de classes et du guid

IMPLEMENT_OLECREATE_EX(CmyVideoEditorCtrl, "MYVIDEOEDITOR.myVideoEditorCtrl.1",
	0xe14624ca, 0xf188, 0x4364, 0x8b, 0x51, 0x2, 0xf, 0xdc, 0x70, 0x2a, 0x52)



// ID et version de bibliothèque de types

IMPLEMENT_OLETYPELIB(CmyVideoEditorCtrl, _tlid, _wVerMajor, _wVerMinor)



// ID d'interface

const IID IID_DmyVideoEditor = { 0x1B5BD69B, 0xB625, 0x4DA6, { 0x96, 0x54, 0x4F, 0xFF, 0xE4, 0xB5, 0x29, 0x7 } };
const IID IID_DmyVideoEditorEvents = { 0x38026BD2, 0x15AD, 0x4EBC, { 0x96, 0x4C, 0x54, 0x2D, 0x4A, 0xFF, 0x7, 0x85 } };


// Informations de type du contrôle

static const DWORD _dwmyVideoEditorOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CmyVideoEditorCtrl, IDS_MYVIDEOEDITOR, _dwmyVideoEditorOleMisc)



// CmyVideoEditorCtrl::CmyVideoEditorCtrlFactory::UpdateRegistry -
// Ajoute ou supprime les entrées de la base de registres pour CmyVideoEditorCtrl

BOOL CmyVideoEditorCtrl::CmyVideoEditorCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: vérifiez que votre contrôle suit les règles du modèle de thread apartment.
	// Reportez-vous à MFC TechNote 64 pour plus d'informations.
	// Si votre contrôle ne se conforme pas aux règles du modèle apartment, vous
	// devez modifier le code ci-dessous, en modifiant le 6è paramètre de
	// afxRegApartmentThreading en 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_MYVIDEOEDITOR,
			IDB_MYVIDEOEDITOR,
			afxRegApartmentThreading,
			_dwmyVideoEditorOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CmyVideoEditorCtrl::CmyVideoEditorCtrl - Constructeur

CmyVideoEditorCtrl::CmyVideoEditorCtrl()
{
	InitializeIIDs(&IID_DmyVideoEditor, &IID_DmyVideoEditorEvents);
	// TODO: initialisez ici les données de l'instance de votre contrôle.
}



// CmyVideoEditorCtrl::~CmyVideoEditorCtrl - Destructeur

CmyVideoEditorCtrl::~CmyVideoEditorCtrl()
{
	// TODO: nettoyez ici les données de l'instance de votre contrôle.
}



// CmyVideoEditorCtrl::OnDraw - Fonction de dessin

void CmyVideoEditorCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: remplacez le code suivant par votre code de dessin.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CmyVideoEditorCtrl::DoPropExchange - Prise en charge de la persistance

void CmyVideoEditorCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: appelez les fonctions PX_ pour chaque propriété personnalisée persistante.
}



// CmyVideoEditorCtrl::OnResetState - Réinitialise le contrôle à son état par défaut

void CmyVideoEditorCtrl::OnResetState()
{
	COleControl::OnResetState();  // Réinitialise les valeurs par défaut trouvées dans DoPropExchange

	// TODO: réinitialisez ici les autres valeurs d'état du contrôle.
}



// CmyVideoEditorCtrl::AboutBox - Affiche une boîte de dialogue "À propos de" à l'utilisateur

void CmyVideoEditorCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MYVIDEOEDITOR);
	dlgAbout.DoModal();
}



// Gestionnaires de messages de CmyVideoEditorCtrl
