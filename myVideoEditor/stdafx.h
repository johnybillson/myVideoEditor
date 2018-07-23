#pragma once

// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclure les en-t�tes Windows rarement utilis�s
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // certains constructeurs CString seront explicites
#define _ATL_NO_AUTOMATIC_NAMESPACE             // �viter les conflits de noms de classe

#include <afxctl.h>         // Prise en charge MFC pour les contr�les ActiveX
#include <afxext.h>         // extensions MFC
#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // Prise en charge MFC pour les contr�les communs Internet Explorer�4
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // Prise en charge des MFC pour les contr�les communs Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

// Supprimez les deux includes ci-dessous si vous souhaitez utiliser les
//  classes de base de donn�es MFC
#ifndef _WIN64

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>                      // classes de base de donn�es ODBC MFC
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>                     // classes de base de donn�es DAO MFC
#endif // _AFX_NO_DAO_SUPPORT

#endif // _WIN64

