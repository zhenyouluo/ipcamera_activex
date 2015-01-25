#pragma once

// IpcameraActivitePropPage.h : CIpcameraActivitePropPage 属性页类的声明。


// CIpcameraActivitePropPage : 有关实现的信息，请参阅 IpcameraActivitePropPage.cpp。

class CIpcameraActivitePropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CIpcameraActivitePropPage)
	DECLARE_OLECREATE_EX(CIpcameraActivitePropPage)

// 构造函数
public:
	CIpcameraActivitePropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_IPCAMERAACTIVITE };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedGetpic();
};

