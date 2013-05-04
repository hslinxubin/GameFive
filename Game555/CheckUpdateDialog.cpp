// CheckUpdateDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "Game555.h"
#include "CheckUpdateDialog.h"
#include "afxdialogex.h"


// CCheckUpdateDialog 对话框

IMPLEMENT_DYNAMIC(CCheckUpdateDialog, CDialogEx)

CCheckUpdateDialog::CCheckUpdateDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCheckUpdateDialog::IDD, pParent)
{

}

CCheckUpdateDialog::~CCheckUpdateDialog()
{
}

void CCheckUpdateDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCheckUpdateDialog, CDialogEx)
END_MESSAGE_MAP()


// CCheckUpdateDialog 消息处理程序
