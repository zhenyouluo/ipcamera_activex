#pragma once
#include "myipcameraactive.h"

// IpcameraActiviteCtrl.h : CIpcameraActiviteCtrl ActiveX 控件类的声明。


// CIpcameraActiviteCtrl : 有关实现的信息，请参阅 IpcameraActiviteCtrl.cpp。

class CIpcameraActiviteCtrl : public COleControl
{
	DECLARE_DYNCREATE(CIpcameraActiviteCtrl)

// 构造函数
public:
	CIpcameraActiviteCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CIpcameraActiviteCtrl();

	DECLARE_OLECREATE_EX(CIpcameraActiviteCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CIpcameraActiviteCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CIpcameraActiviteCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CIpcameraActiviteCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
	CMyipcameraactive mycamera_dalog;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

