

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Jul 23 22:29:46 2018
 */
/* Compiler settings for myVideoEditor.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_myVideoEditorLib,0x18D4BAA0,0x7B00,0x4C47,0xA3,0xC7,0x91,0x5C,0x7C,0x1C,0x21,0x1D);


MIDL_DEFINE_GUID(IID, DIID__DmyVideoEditor,0x1B5BD69B,0xB625,0x4DA6,0x96,0x54,0x4F,0xFF,0xE4,0xB5,0x29,0x07);


MIDL_DEFINE_GUID(IID, DIID__DmyVideoEditorEvents,0x38026BD2,0x15AD,0x4EBC,0x96,0x4C,0x54,0x2D,0x4A,0xFF,0x07,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_myVideoEditor,0xE14624CA,0xF188,0x4364,0x8B,0x51,0x02,0x0F,0xDC,0x70,0x2A,0x52);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



