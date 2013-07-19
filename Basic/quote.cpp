#include "StdAfx.h"
#include "quote.h"


quote::quote(void)
{
}


quote::~quote(void)
{
}

//测试引用的基本属性
void quote::DifferFromPointer(void)
{
	int a = 12;
	int &b = a;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<&a<<endl;
	cout<<&b<<endl;
}