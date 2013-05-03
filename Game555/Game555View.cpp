
// Game555View.cpp : CGame555View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Game555.h"
#endif

#include "Game555Doc.h"
#include "Game555View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGame555View

IMPLEMENT_DYNCREATE(CGame555View, CView)

BEGIN_MESSAGE_MAP(CGame555View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CGame555View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CGame555View 构造/析构

CGame555View::CGame555View()
{
	// TODO: 在此处添加构造代码

}

CGame555View::~CGame555View()
{
}

BOOL CGame555View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CGame555View 绘制

void CGame555View::OnDraw(CDC* /*pDC*/)
{
	CGame555Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CGame555View 打印


void CGame555View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CGame555View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CGame555View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CGame555View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CGame555View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CGame555View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CGame555View 诊断

#ifdef _DEBUG
void CGame555View::AssertValid() const
{
	CView::AssertValid();
}

void CGame555View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGame555Doc* CGame555View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGame555Doc)));
	return (CGame555Doc*)m_pDocument;
}
#endif //_DEBUG


// CGame555View 消息处理程序
