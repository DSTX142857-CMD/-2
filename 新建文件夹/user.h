//User �ࣺ�����û��Ļ�����Ϣ�����û������������
#pragma once
#include<iostream>
#include<string>
using namespace std;
class User
{
private:
	CString UserNum;
	CString PassWord;
	double Money;
public:
	User(CString num, CString pwd, double money)
		:
		UserNum(num),
		PassWord(pwd),
		Money(money)
	{
	}

	void setnum(CString num)
	{
		UserNum = num;
	}

	CString getnum()
	{
		return UserNum;
	}


	void setpassword(CString pwd)
	{
		PassWord = pwd;
	}

	CString getpassword()
	{
		return PassWord;
	}

	double getmoney()
	{
		return Money;
	}


	void setmoney(double m)
	{
		Money = m;
	}

};
