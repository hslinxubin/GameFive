#pragma once


// CCheckUpdateDialog 对话框

class CCheckUpdateDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CCheckUpdateDialog)
public:
	//IDD = 316



	//0x0AC,显示的字符串状态
	CString mDisplayText;

	//0x20,对话框自身的HWND
	HWND  mHwnd;


public:
	CCheckUpdateDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCheckUpdateDialog();

// 对话框数据
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
