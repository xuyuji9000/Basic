#include "StdAfx.h"
#include "ThePointer.h"


ThePointer::ThePointer(void)
{
}


ThePointer::~ThePointer(void)
{
}

//验证char*的内容和指向的地址的一致性
void ThePointer::charPointer(void)
{
	char a = 'a';
	char * p = &a;
	cout<<"the char pointer:"<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	//为什么这里地址输出为中文？乱码？
}

void ThePointer::intPointer(void)
{
	int a = 12;
	int * p = &a;
	cout<<"the int point"<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
}

