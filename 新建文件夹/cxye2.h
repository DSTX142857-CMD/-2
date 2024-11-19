#pragma once
#include "afxdialogex.h"


// cxye2 对话框

class cxye2 : public CDialogEx
{
	DECLARE_DYNAMIC(cxye2)

public:
	cxye2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~cxye2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	double m_qkje;
	afx_msg void OnBnClickedButton1();
	CString m_tsxx;
};
