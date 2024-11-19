// cxye2.cpp: 实现文件


#include "pch.h"
#include "20241117.h"
#include "afxdialogex.h"
#include "cxye2.h"
#include"user.h"
#include"atm.h"
#include"cxye3.h"
extern ATM a1;

// cxye2 对话框

IMPLEMENT_DYNAMIC(cxye2, CDialogEx)

cxye2::cxye2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, m_qkje(0)
	, m_tsxx(_T(""))
{

}

cxye2::~cxye2()
{
}

void cxye2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_qkje);
	DDX_Text(pDX, IDC_EDIT2, m_tsxx);
}


BEGIN_MESSAGE_MAP(cxye2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &cxye2::OnBnClickedButton1)
END_MESSAGE_MAP()


// cxye2 消息处理程序


void cxye2::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	m_tsxx = a1.withdraw(m_qkje);
	UpdateData(FALSE);
	if (m_tsxx == "取款成功")
	{
		INT_PTR nRes; // 用于保存DoModal函数的返回值

		cxye3 cxye33; // 构造对话框类CTipDlg的实例

		nRes = cxye33.DoModal(); // 弹出对话框
		if (IDCANCEL == nRes)
		{
			return;
		}
	}
	
	
}
