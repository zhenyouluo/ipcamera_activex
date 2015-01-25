// IpcameraActiviteCtrl.cpp : CIpcameraActiviteCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "IpcameraActivite.h"
#include "IpcameraActiviteCtrl.h"
#include "IpcameraActivitePropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CIpcameraActiviteCtrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CIpcameraActiviteCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CIpcameraActiviteCtrl, COleControl)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CIpcameraActiviteCtrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CIpcameraActiviteCtrl, 1)
	PROPPAGEID(CIpcameraActivitePropPage::guid)
END_PROPPAGEIDS(CIpcameraActiviteCtrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CIpcameraActiviteCtrl, "IPCAMERAACTIVITE.IpcameraActiviteCtrl.1",
	0x7153fe74, 0x406d, 0x4686, 0x89, 0x22, 0xb8, 0xda, 0x32, 0xe1, 0xd8, 0x8f)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CIpcameraActiviteCtrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DIpcameraActivite = { 0x6A8B8059, 0x56E, 0x4AD5, { 0xA7, 0xD4, 0x1B, 0x84, 0x33, 0xD5, 0xC4, 0x95 } };
const IID IID_DIpcameraActiviteEvents = { 0x98EBAAD6, 0x18B2, 0x4B10, { 0xAF, 0xD1, 0xF2, 0x44, 0x83, 0x52, 0x13, 0x71 } };

// 控件类型信息

static const DWORD _dwIpcameraActiviteOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CIpcameraActiviteCtrl, IDS_IPCAMERAACTIVITE, _dwIpcameraActiviteOleMisc)

// CIpcameraActiviteCtrl::CIpcameraActiviteCtrlFactory::UpdateRegistry -
// 添加或移除 CIpcameraActiviteCtrl 的系统注册表项

BOOL CIpcameraActiviteCtrl::CIpcameraActiviteCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_IPCAMERAACTIVITE,
			IDB_IPCAMERAACTIVITE,
			afxRegApartmentThreading,
			_dwIpcameraActiviteOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CIpcameraActiviteCtrl::CIpcameraActiviteCtrl - 构造函数

CIpcameraActiviteCtrl::CIpcameraActiviteCtrl()
{
	InitializeIIDs(&IID_DIpcameraActivite, &IID_DIpcameraActiviteEvents);
	// TODO: 在此初始化控件的实例数据。
}

// CIpcameraActiviteCtrl::~CIpcameraActiviteCtrl - 析构函数

CIpcameraActiviteCtrl::~CIpcameraActiviteCtrl()
{
	// TODO: 在此清理控件的实例数据。
}

// CIpcameraActiviteCtrl::OnDraw - 绘图函数

void CIpcameraActiviteCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;
	mycamera_dalog.MoveWindow(rcBounds,TRUE);
	// TODO: 用您自己的绘图代码替换下面的代码。

	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
}

// CIpcameraActiviteCtrl::DoPropExchange - 持久性支持

void CIpcameraActiviteCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CIpcameraActiviteCtrl::OnResetState - 将控件重置为默认状态

void CIpcameraActiviteCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}


// CIpcameraActiviteCtrl 消息处理程序


int CIpcameraActiviteCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	mycamera_dalog.Create(IDD_MYDIALOG,this);
		return 0;
}
