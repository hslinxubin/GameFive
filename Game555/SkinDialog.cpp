// SkinDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Game555.h"
#include "SkinDialog.h"
#include "afxdialogex.h"


// CSkinDialog �Ի���

IMPLEMENT_DYNAMIC(CSkinDialog, CDialogEx)

CSkinDialog::CSkinDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSkinDialog::IDD, pParent)
{

}

CSkinDialog::~CSkinDialog()
{
}

void CSkinDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSkinDialog, CDialogEx)
END_MESSAGE_MAP()


// CSkinDialog ��Ϣ�������
