// cxye1.cpp: 实现文件
//

#include "pch.h"
#include "20241117.h"
#include "afxdialogex.h"
#include "cxye1.h"
#include"user.h"
#include"atm.h"
#include"cxye2.h"

extern ATM a1;
// cxye1 对话框
IMPLEMENT_DYNAMIC(cxye1, CDialogEx)

cxye1::cxye1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_xsxx1(_T(""))
	, m_xsxx2(0)
{

}

cxye1::~cxye1()
{
}

void cxye1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, m_xsxx1);
	DDX_Text(pDX, IDC_EDIT1, m_xsxx2);
}


BEGIN_MESSAGE_MAP(cxye1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &cxye1::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &cxye1::OnBnClickedButton2)
END_MESSAGE_MAP()


// cxye1 消息处理程序


void cxye1::OnBnClickedButton1()//查询余额
{
	UpdateData(TRUE);
	m_xsxx1 = a1.u.getnum();
	m_xsxx2= a1.u.getmoney();
	UpdateData(FALSE);
	// TODO: 在此添加控件通知处理程序代码
}


void cxye1::OnBnClickedButton2()//取款
{
	INT_PTR nRes; // 用于保存DoModal函数的返回值

	cxye2 cxye22; // 构造对话框类CTipDlg的实例

	nRes = cxye22.DoModal(); // 弹出对话框

	
}



