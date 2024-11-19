// cxye3.cpp: 实现文件
//

#include "pch.h"
#include "20241117.h"
#include "afxdialogex.h"
#include "cxye3.h"
#include"user.h"
#include"atm.h"
extern ATM a1;
// cxye3 对话框

IMPLEMENT_DYNAMIC(cxye3, CDialogEx)

cxye3::cxye3(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, m_num(_T(""))
	, m_qkje1(0)
	, m_ye(0)
{

}

cxye3::~cxye3()
{
}

void cxye3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_num);
	DDX_Text(pDX, IDC_EDIT3, m_qkje1);
	DDX_Text(pDX, IDC_EDIT1, m_ye);
}
BEGIN_MESSAGE_MAP(cxye3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &cxye3::OnBnClickedButton1)
END_MESSAGE_MAP()







void cxye3::OnBnClickedButton1()
{
	UpdateData(TRUE);
	m_num=  a1.u.getnum();
	m_qkje1 =  a1.getqkje();
	m_ye = a1.u.getmoney();
	UpdateData(FALSE);
	// TODO: 在此添加控件通知处理程序代码
}
