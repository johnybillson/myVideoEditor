

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __myVideoEditoridl_h__
#define __myVideoEditoridl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DmyVideoEditor_FWD_DEFINED__
#define ___DmyVideoEditor_FWD_DEFINED__
typedef interface _DmyVideoEditor _DmyVideoEditor;
#endif 	/* ___DmyVideoEditor_FWD_DEFINED__ */


#ifndef ___DmyVideoEditorEvents_FWD_DEFINED__
#define ___DmyVideoEditorEvents_FWD_DEFINED__
typedef interface _DmyVideoEditorEvents _DmyVideoEditorEvents;
#endif 	/* ___DmyVideoEditorEvents_FWD_DEFINED__ */


#ifndef __myVideoEditor_FWD_DEFINED__
#define __myVideoEditor_FWD_DEFINED__

#ifdef __cplusplus
typedef class myVideoEditor myVideoEditor;
#else
typedef struct myVideoEditor myVideoEditor;
#endif /* __cplusplus */

#endif 	/* __myVideoEditor_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __myVideoEditorLib_LIBRARY_DEFINED__
#define __myVideoEditorLib_LIBRARY_DEFINED__

/* library myVideoEditorLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_myVideoEditorLib;

#ifndef ___DmyVideoEditor_DISPINTERFACE_DEFINED__
#define ___DmyVideoEditor_DISPINTERFACE_DEFINED__

/* dispinterface _DmyVideoEditor */
/* [uuid] */ 


EXTERN_C const IID DIID__DmyVideoEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1B5BD69B-B625-4DA6-9654-4FFFE4B52907")
    _DmyVideoEditor : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DmyVideoEditorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DmyVideoEditor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DmyVideoEditor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DmyVideoEditor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DmyVideoEditor * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DmyVideoEditor * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DmyVideoEditor * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DmyVideoEditor * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DmyVideoEditorVtbl;

    interface _DmyVideoEditor
    {
        CONST_VTBL struct _DmyVideoEditorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DmyVideoEditor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DmyVideoEditor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DmyVideoEditor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DmyVideoEditor_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DmyVideoEditor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DmyVideoEditor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DmyVideoEditor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DmyVideoEditor_DISPINTERFACE_DEFINED__ */


#ifndef ___DmyVideoEditorEvents_DISPINTERFACE_DEFINED__
#define ___DmyVideoEditorEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DmyVideoEditorEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DmyVideoEditorEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("38026BD2-15AD-4EBC-964C-542D4AFF0785")
    _DmyVideoEditorEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DmyVideoEditorEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DmyVideoEditorEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DmyVideoEditorEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DmyVideoEditorEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DmyVideoEditorEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DmyVideoEditorEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DmyVideoEditorEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DmyVideoEditorEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DmyVideoEditorEventsVtbl;

    interface _DmyVideoEditorEvents
    {
        CONST_VTBL struct _DmyVideoEditorEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DmyVideoEditorEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DmyVideoEditorEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DmyVideoEditorEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DmyVideoEditorEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DmyVideoEditorEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DmyVideoEditorEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DmyVideoEditorEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DmyVideoEditorEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_myVideoEditor;

#ifdef __cplusplus

class DECLSPEC_UUID("E14624CA-F188-4364-8B51-020FDC702A52")
myVideoEditor;
#endif
#endif /* __myVideoEditorLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


