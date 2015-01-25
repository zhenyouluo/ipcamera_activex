#pragma once
#include "afxwin.h"
#include <IPCDefine.h>
#include <IPCSdkDefines.h>
#include <IPCamera.h>

// CMyipcameraactive 对话框

class CMyipcameraactive : public CDialogEx
{
	DECLARE_DYNAMIC(CMyipcameraactive)

public:
	CMyipcameraactive(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyipcameraactive();
	ipcHandle myipchandle;
	playHandle ipcPlayHandle;

// 对话框数据
	enum { IDD = IDD_MYDIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CButton Get_Device;
	afx_msg void OnBnClickedGetDevice();
	afx_msg void OnBnClickedGetpic();
};
