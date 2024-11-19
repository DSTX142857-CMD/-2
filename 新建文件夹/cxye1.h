#pragma once
#include "afxdialogex.h"


// cxye1 对话框

class cxye1 : public CDialogEx
{
	DECLARE_DYNAMIC(cxye1)

public:
	cxye1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~cxye1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_xsxx1;
	afx_msg void OnBnClickedButton1();
	double m_xsxx2;
	afx_msg void OnBnClickedButton2();
};
