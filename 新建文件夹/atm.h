//ATM 类：包含ATM机的功能，如登录、查询余额和取款。
#pragma once
#include"user.h"
#include<iostream>
#include<string>
using namespace std;
class ATM
{
private:
	CString inpwd;
	CString innum;
	double qkje;
public:
	ATM(CString num1, CString pwd1, double money1)
		:u(num1, pwd1, money1)
	{}
	User u;
	void setinpwd(CString in)
	{
		inpwd = in;
	}
	void setinnum(CString inn)
	{
		innum = inn;
	}
	int login()
	{
		if (u.getpassword() == inpwd && u.getnum() == innum)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	double getqkje()
	{
		return qkje;
	}
	CString withdraw(double m)
	{
		
		if (u.getmoney() < m)
		{
			return (CString)"余额不足";
		}
		else
		{
			qkje = m;
			double m1 = u.getmoney() - m;
			u.setmoney(m1);
			return (CString)"取款成功";
		}
	}





};
