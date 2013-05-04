#pragma once


// CLobbyDialog 对话框

class CLobbyDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CLobbyDialog)

public:
	CLobbyDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLobbyDialog();
public:
	//0x4C4 ,游戏登录窗口句柄
	CDialog mLoginDialog;

// 对话框数据
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
