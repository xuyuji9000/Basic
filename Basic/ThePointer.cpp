#include "StdAfx.h"
#include "ThePointer.h"


ThePointer::ThePointer(void)
{
}


ThePointer::~ThePointer(void)
{
}

//��֤char*�����ݺ�ָ��ĵ�ַ��һ����
void ThePointer::charPointer(void)
{
	char a = 'a';
	char * p = &a;
	cout<<"the char pointer:"<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	//Ϊʲô�����ַ���Ϊ���ģ����룿
}

void ThePointer::intPointer(void)
{
	int a = 12;
	int * p = &a;
	cout<<"the int point"<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
}

