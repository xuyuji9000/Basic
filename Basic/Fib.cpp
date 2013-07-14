#include "stdafx.h"

#include "Fib.h"
#include <iostream>
using namespace std;


Fib::Fib(void)
{
}


Fib::~Fib(void)
{
}
//fibonacci function
//有关数组的传入，应该整个数组传入，而不是一个数组的长度单独传入
void Fib::setArray(int a[])
{
	int i = sizeof(a) / sizeof(int);
	
	if(i <= 0)
	{
		cout<<"Negative Number and zero are not acceptable"<<endl;
	}
	else if(i = 1)
	{
		int a[1] = {1};
	}
	else if(i = 2)
	{
		int a[2] = {1,1};
	}
	else if(i > 2&&i <= 99)
	{
		a[0] = 1;
		a[1] = 1;
		for(int j = 2;j <= i - 1;j++)
		{
			a[j] = a[j - 2] + a[j - 1];
		}
		for(int k = 0;k <= i - 1;k++)
		{
		cout<<a[k]<<endl;
		}
	}
	else if(i > 99)
	{
		int a ;
		a = 10000;
		cout<<a<<endl;
		cout<<"the array is so big that I can't hold it"<<endl;
	};
}