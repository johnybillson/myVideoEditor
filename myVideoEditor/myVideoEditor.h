#pragma once

// myVideoEditor.h : fichier d'en-tête principal pour myVideoEditor.DLL

#if !defined( __AFXCTL_H__ )
#error "incluez 'afxctl.h' avant d'inclure ce fichier"
#endif

#include "resource.h"       // symboles principaux


// CmyVideoEditorApp : consultez myVideoEditor.cpp pour l'implémentation.

class CmyVideoEditorApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

