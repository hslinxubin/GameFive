#pragma once


// CLoginDialog 对话框

class CLoginDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDialog)

public:
	CLoginDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLoginDialog();

// 对话框数据
	enum { IDD = IDD_CLoginDialog };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:

	//0x75, .
	bool BtnLoginStatus;

	//是否记住密码,0为记住密码,1为不记住密码
	//bool mIsRememberPassword;

	//0x7C0,登录服务器Combox 控件的句柄 hWmd; 
	HWND hWnd_Combox_ServerName;

	//0x0CE0,同意条款CheckBox,1为选中,0为非选中
	HWND hWnd_CheckBox_Agree;

	//0x0EC8,是否使用代理登录服务器,1为选中,0为非选中
	HWND hWnd_CheckBox_ProxyLogin;

	//0x16E0,SOCKS5 Radio控件
	HWND hWnd_Radio_SOCKS5;

	//0x88,保存登录用户名称的字符串地址
	CString mUserName;	

	//0x92,保存登录用户密码的字符串地址
	CString mPassword;

	///String 类型偏移 -0xC 为String的字符串的长度
};
