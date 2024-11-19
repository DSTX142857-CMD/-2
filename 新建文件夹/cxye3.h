#pragma once
#include "afxdialogex.h"


// cxye3 对话框

class cxye3 : public CDialogEx
{
	DECLARE_DYNAMIC(cxye3)

public:
	cxye3(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~cxye3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_num;
	double m_qkje1;
	double m_ye;
	afx_msg void OnBnClickedButton1();
};
