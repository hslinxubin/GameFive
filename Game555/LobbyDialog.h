#pragma once


// CLobbyDialog �Ի���

class CLobbyDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CLobbyDialog)

public:
	CLobbyDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLobbyDialog();
public:
	//0x4C4 ,��Ϸ��¼���ھ��
	CDialog mLoginDialog;

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
