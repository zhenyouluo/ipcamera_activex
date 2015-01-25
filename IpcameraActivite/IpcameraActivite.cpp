// IpcameraActivite.cpp : CIpcameraActiviteApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "IpcameraActivite.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CIpcameraActiviteApp theApp;

const GUID CDECL _tlid = { 0xC577E561, 0x7AE8, 0x4A82, { 0x98, 0xF8, 0x4A, 0x32, 0x3, 0x71, 0x2F, 0x5 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CIpcameraActiviteApp::InitInstance - DLL 初始化

BOOL CIpcameraActiviteApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: 在此添加您自己的模块初始化代码。
	}

	return bInit;
}



// CIpcameraActiviteApp::ExitInstance - DLL 终止

int CIpcameraActiviteApp::ExitInstance()
{
	// TODO: 在此添加您自己的模块终止代码。

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
