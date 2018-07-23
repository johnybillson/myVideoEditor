// myVideoEditorCtrl.cpp�: impl�mentation de la classe du contr�le ActiveX CmyVideoEditorCtrl.

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



// Table d'�v�nements

BEGIN_EVENT_MAP(CmyVideoEditorCtrl, COleControl)
END_EVENT_MAP()



// Pages de propri�t�s

// TODO: ajoutez autant de pages de propri�t�s que n�cessaire. N'oubliez pas d'augmenter le compteur�!
BEGIN_PROPPAGEIDS(CmyVideoEditorCtrl, 1)
	PROPPAGEID(CmyVideoEditorPropPage::guid)
END_PROPPAGEIDS(CmyVideoEditorCtrl)



// Initialisation de la fabrique de classes et du guid

IMPLEMENT_OLECREATE_EX(CmyVideoEditorCtrl, "MYVIDEOEDITOR.myVideoEditorCtrl.1",
	0xe14624ca, 0xf188, 0x4364, 0x8b, 0x51, 0x2, 0xf, 0xdc, 0x70, 0x2a, 0x52)



// ID et version de biblioth�que de types

IMPLEMENT_OLETYPELIB(CmyVideoEditorCtrl, _tlid, _wVerMajor, _wVerMinor)



// ID d'interface

const IID IID_DmyVideoEditor = { 0x1B5BD69B, 0xB625, 0x4DA6, { 0x96, 0x54, 0x4F, 0xFF, 0xE4, 0xB5, 0x29, 0x7 } };
const IID IID_DmyVideoEditorEvents = { 0x38026BD2, 0x15AD, 0x4EBC, { 0x96, 0x4C, 0x54, 0x2D, 0x4A, 0xFF, 0x7, 0x85 } };


// Informations de type du contr�le

static const DWORD _dwmyVideoEditorOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CmyVideoEditorCtrl, IDS_MYVIDEOEDITOR, _dwmyVideoEditorOleMisc)



// CmyVideoEditorCtrl::CmyVideoEditorCtrlFactory::UpdateRegistry -
// Ajoute ou supprime les entr�es de la base de registres pour CmyVideoEditorCtrl

BOOL CmyVideoEditorCtrl::CmyVideoEditorCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: v�rifiez que votre contr�le suit les r�gles du mod�le de thread apartment.
	// Reportez-vous � MFC TechNote 64 pour plus d'informations.
	// Si votre contr�le ne se conforme pas aux r�gles du mod�le apartment, vous
	// devez modifier le code ci-dessous, en modifiant le 6� param�tre de
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
	// TODO: initialisez ici les donn�es de l'instance de votre contr�le.
}



// CmyVideoEditorCtrl::~CmyVideoEditorCtrl - Destructeur

CmyVideoEditorCtrl::~CmyVideoEditorCtrl()
{
	// TODO: nettoyez ici les donn�es de l'instance de votre contr�le.
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

	// TODO: appelez les fonctions PX_ pour chaque propri�t� personnalis�e persistante.
}



// CmyVideoEditorCtrl::OnResetState - R�initialise le contr�le � son �tat par d�faut

void CmyVideoEditorCtrl::OnResetState()
{
	COleControl::OnResetState();  // R�initialise les valeurs par d�faut trouv�es dans DoPropExchange

	// TODO: r�initialisez ici les autres valeurs d'�tat du contr�le.
}



// CmyVideoEditorCtrl::AboutBox - Affiche une bo�te de dialogue "� propos de" � l'utilisateur

void CmyVideoEditorCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MYVIDEOEDITOR);
	dlgAbout.DoModal();
}



// Gestionnaires de messages de CmyVideoEditorCtrl
