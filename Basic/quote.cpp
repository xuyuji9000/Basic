#include "StdAfx.h"
#include "quote.h"


quote::quote(void)
{
}


quote::~quote(void)
{
}

//�������õĻ�������
void quote::DifferFromPointer(void)
{
	int a = 12;
	int &b = a;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<&a<<endl;
	cout<<&b<<endl;
}