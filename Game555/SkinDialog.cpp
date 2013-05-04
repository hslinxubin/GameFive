// SkinDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "Game555.h"
#include "SkinDialog.h"
#include "afxdialogex.h"


// CSkinDialog 对话框

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


// CSkinDialog 消息处理程序
