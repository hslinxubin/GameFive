#pragma once


// CLoginDialog �Ի���

class CLoginDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CLoginDialog)

public:
	CLoginDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLoginDialog();

// �Ի�������
	enum { IDD = IDD_CLoginDialog };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

public:

	//0x75, .
	bool BtnLoginStatus;

	//�Ƿ��ס����,0Ϊ��ס����,1Ϊ����ס����
	//bool mIsRememberPassword;

	//0x7C0,��¼������Combox �ؼ��ľ�� hWmd; 
	HWND hWnd_Combox_ServerName;

	//0x0CE0,ͬ������CheckBox,1Ϊѡ��,0Ϊ��ѡ��
	HWND hWnd_CheckBox_Agree;

	//0x0EC8,�Ƿ�ʹ�ô����¼������,1Ϊѡ��,0Ϊ��ѡ��
	HWND hWnd_CheckBox_ProxyLogin;

	//0x16E0,SOCKS5 Radio�ؼ�
	HWND hWnd_Radio_SOCKS5;

	//0x88,�����¼�û����Ƶ��ַ�����ַ
	CString mUserName;	

	//0x92,�����¼�û�������ַ�����ַ
	CString mPassword;

	///String ����ƫ�� -0xC ΪString���ַ����ĳ���
};
