#pragma once


// CCheckUpdateDialog �Ի���

class CCheckUpdateDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CCheckUpdateDialog)
public:
	//IDD = 316



	//0x0AC,��ʾ���ַ���״̬
	CString mDisplayText;

	//0x20,�Ի��������HWND
	HWND  mHwnd;


public:
	CCheckUpdateDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCheckUpdateDialog();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
