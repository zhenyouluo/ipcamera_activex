

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sat Jan 24 15:09:42 2015
 */
/* Compiler settings for IpcameraActivite.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
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


#ifndef __IpcameraActiviteidl_h__
#define __IpcameraActiviteidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DIpcameraActivite_FWD_DEFINED__
#define ___DIpcameraActivite_FWD_DEFINED__
typedef interface _DIpcameraActivite _DIpcameraActivite;

#endif 	/* ___DIpcameraActivite_FWD_DEFINED__ */


#ifndef ___DIpcameraActiviteEvents_FWD_DEFINED__
#define ___DIpcameraActiviteEvents_FWD_DEFINED__
typedef interface _DIpcameraActiviteEvents _DIpcameraActiviteEvents;

#endif 	/* ___DIpcameraActiviteEvents_FWD_DEFINED__ */


#ifndef __IpcameraActivite_FWD_DEFINED__
#define __IpcameraActivite_FWD_DEFINED__

#ifdef __cplusplus
typedef class IpcameraActivite IpcameraActivite;
#else
typedef struct IpcameraActivite IpcameraActivite;
#endif /* __cplusplus */

#endif 	/* __IpcameraActivite_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_IpcameraActivite_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_IpcameraActivite_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IpcameraActivite_0000_0000_v0_0_s_ifspec;


#ifndef __IpcameraActiviteLib_LIBRARY_DEFINED__
#define __IpcameraActiviteLib_LIBRARY_DEFINED__

/* library IpcameraActiviteLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_IpcameraActiviteLib;

#ifndef ___DIpcameraActivite_DISPINTERFACE_DEFINED__
#define ___DIpcameraActivite_DISPINTERFACE_DEFINED__

/* dispinterface _DIpcameraActivite */
/* [uuid] */ 


EXTERN_C const IID DIID__DIpcameraActivite;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6A8B8059-056E-4AD5-A7D4-1B8433D5C495")
    _DIpcameraActivite : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DIpcameraActiviteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DIpcameraActivite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DIpcameraActivite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DIpcameraActivite * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DIpcameraActivite * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DIpcameraActivite * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DIpcameraActivite * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DIpcameraActivite * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DIpcameraActiviteVtbl;

    interface _DIpcameraActivite
    {
        CONST_VTBL struct _DIpcameraActiviteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DIpcameraActivite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DIpcameraActivite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DIpcameraActivite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DIpcameraActivite_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DIpcameraActivite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DIpcameraActivite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DIpcameraActivite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DIpcameraActivite_DISPINTERFACE_DEFINED__ */


#ifndef ___DIpcameraActiviteEvents_DISPINTERFACE_DEFINED__
#define ___DIpcameraActiviteEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DIpcameraActiviteEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DIpcameraActiviteEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("98EBAAD6-18B2-4B10-AFD1-F24483521371")
    _DIpcameraActiviteEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DIpcameraActiviteEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DIpcameraActiviteEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DIpcameraActiviteEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DIpcameraActiviteEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DIpcameraActiviteEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DIpcameraActiviteEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DIpcameraActiviteEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DIpcameraActiviteEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DIpcameraActiviteEventsVtbl;

    interface _DIpcameraActiviteEvents
    {
        CONST_VTBL struct _DIpcameraActiviteEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DIpcameraActiviteEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DIpcameraActiviteEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DIpcameraActiviteEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DIpcameraActiviteEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DIpcameraActiviteEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DIpcameraActiviteEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DIpcameraActiviteEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DIpcameraActiviteEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_IpcameraActivite;

#ifdef __cplusplus

class DECLSPEC_UUID("7153FE74-406D-4686-8922-B8DA32E1D88F")
IpcameraActivite;
#endif
#endif /* __IpcameraActiviteLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


