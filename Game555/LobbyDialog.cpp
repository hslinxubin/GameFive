// LobbyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Game555.h"
#include "LobbyDialog.h"
#include "afxdialogex.h"


// CLobbyDialog �Ի���

IMPLEMENT_DYNAMIC(CLobbyDialog, CDialogEx)

CLobbyDialog::CLobbyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLobbyDialog::IDD, pParent)
{

}

CLobbyDialog::~CLobbyDialog()
{
}

void CLobbyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLobbyDialog, CDialogEx)
END_MESSAGE_MAP()


// CLobbyDialog ��Ϣ�������
