#pragma once


// CSkinDialog �Ի���

class CSkinDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CSkinDialog)

public:
	CSkinDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSkinDialog();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
