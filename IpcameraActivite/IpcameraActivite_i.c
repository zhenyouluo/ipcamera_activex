

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, LIBID_IpcameraActiviteLib,0xC577E561,0x7AE8,0x4A82,0x98,0xF8,0x4A,0x32,0x03,0x71,0x2F,0x05);


MIDL_DEFINE_GUID(IID, DIID__DIpcameraActivite,0x6A8B8059,0x056E,0x4AD5,0xA7,0xD4,0x1B,0x84,0x33,0xD5,0xC4,0x95);


MIDL_DEFINE_GUID(IID, DIID__DIpcameraActiviteEvents,0x98EBAAD6,0x18B2,0x4B10,0xAF,0xD1,0xF2,0x44,0x83,0x52,0x13,0x71);


MIDL_DEFINE_GUID(CLSID, CLSID_IpcameraActivite,0x7153FE74,0x406D,0x4686,0x89,0x22,0xB8,0xDA,0x32,0xE1,0xD8,0x8F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



