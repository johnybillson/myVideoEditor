// myVideoEditor.cpp : implémentation de CmyVideoEditorApp et inscription de DLL.

#include "stdafx.h"
#include "myVideoEditor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CmyVideoEditorApp theApp;

const GUID CDECL _tlid = { 0x18D4BAA0, 0x7B00, 0x4C47, { 0xA3, 0xC7, 0x91, 0x5C, 0x7C, 0x1C, 0x21, 0x1D } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CmyVideoEditorApp::InitInstance - Initialisation de la DLL

BOOL CmyVideoEditorApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: ajoutez ici votre propre code d'initialisation de module.
	}

	return bInit;
}



// CmyVideoEditorApp::ExitInstance - Fin de la DLL

int CmyVideoEditorApp::ExitInstance()
{
	// TODO: ajoutez ici votre propre code d'arrêt de module.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Ajoute des entrées à la base de registres

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Supprime des entrées de la base de registres

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
