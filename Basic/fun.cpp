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

//����const������ʹ��
void fun::aboutConst(int a, int b)const
{
	a += b;
	cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
}

void fun::aboutAnotherConst(int a, int b)const
{

}