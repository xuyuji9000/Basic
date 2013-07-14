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

/*
设置指针指向数组的首项，
然后通过与int类型加减操作，
实现对数组元素的操作
*/

void ThePointer::outputIntAndDouble(void)
{
	int *p1,a[10] = {0,1,2,3,4,5,6,7,8,9};
	double *p2,b[10] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
	p1 = &a[0];
	p2 = &b[0];
	for(int i = 0;i <= 9;i++)
	{
		cout<<p1 + i<<" "<<*(p1 +i)<<" "<<p2 + i<<" "<<*(p2 + i)<<endl;
	};
}

//通过指向数组首尾的指针相减的方式获得数组的长度
void ThePointer::AssignmentBetweenPointers(void)
{
	int a[10];
	int *p1,*p2;
	p1 = &a[0];
	p2 = &a[9];
	cout<<p2 - p1 + 1<<endl;
}

void ThePointer::compareAddAndAddAdd(void)
{
	int *p1,*p2;
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	p1 = &a[2];
	p2 = &a[2];
	cout<<"this is the origin p1:"<<p1<<endl;
	cout<<"this is the origin p2:"<<p2<<endl;
	p1 + 1;
	cout<<"this is p1:"<<p1<<endl;
	p2++;
	cout<<"this is p2:"<<p2<<endl;
}