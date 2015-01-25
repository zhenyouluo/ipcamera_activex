// IpcameraActivitePropPage.cpp : CIpcameraActivitePropPage 属性页类的实现。

#include "stdafx.h"
#include "IpcameraActivite.h"
#include "IpcameraActivitePropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CIpcameraActivitePropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CIpcameraActivitePropPage, COlePropertyPage)
	ON_BN_CLICKED(IDC_Get_pic, &CIpcameraActivitePropPage::OnBnClickedGetpic)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CIpcameraActivitePropPage, "IPCAMERAACTIVI.IpcameraActiviPropPage.1",
	0x9468a36c, 0xdf8d, 0x4315, 0x90, 0xe7, 0x7e, 0x1a, 0xeb, 0x5, 0x98, 0x80)

// CIpcameraActivitePropPage::CIpcameraActivitePropPageFactory::UpdateRegistry -
// 添加或移除 CIpcameraActivitePropPage 的系统注册表项

BOOL CIpcameraActivitePropPage::CIpcameraActivitePropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_IPCAMERAACTIVITE_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CIpcameraActivitePropPage::CIpcameraActivitePropPage - 构造函数

CIpcameraActivitePropPage::CIpcameraActivitePropPage() :
	COlePropertyPage(IDD, IDS_IPCAMERAACTIVITE_PPG_CAPTION)
{
}

// CIpcameraActivitePropPage::DoDataExchange - 在页和属性间移动数据

void CIpcameraActivitePropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CIpcameraActivitePropPage 消息处理程序


void CIpcameraActivitePropPage::OnBnClickedGetpic()
{
	// TODO: 在此添加控件通知处理程序代码
}
