#include "StdAfx.h"
#include "insideClass.h"


insideClass::insideClass(void)
{
	cout<<"the default constructor"<<endl;
}

//成员对象在使用之前必须通过该类的构造函数的参数列表初始化
insideClass::insideClass(ThePointer i):p(i)
{
	cout<<"the constructor with the class member"<<endl;
}

insideClass::~insideClass(void)
{
}
