// LoginDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Game555.h"
#include "LoginDialog.h"
#include "afxdialogex.h"


// CLoginDialog �Ի���

IMPLEMENT_DYNAMIC(CLoginDialog, CDialogEx)

CLoginDialog::CLoginDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLoginDialog::IDD, pParent)
{
	WM_RBUTTONUP
}

CLoginDialog::~CLoginDialog()
{
}

void CLoginDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLoginDialog, CDialogEx)
END_MESSAGE_MAP()


// CLoginDialog ��Ϣ�������
