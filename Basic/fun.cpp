#include "StdAfx.h"
#include "fun.h"


fun::fun(void)
{
}


fun::~fun(void)
{
}

void fun::fucPara(int a, int b, int c)
{
	
}

//测试const函数的使用
void fun::aboutConst(int a, int b)const
{
	a += b;
	cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}

void fun::aboutAnotherConst(int a, int b)const
{

}