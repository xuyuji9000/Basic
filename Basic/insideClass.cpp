#include "StdAfx.h"
#include "insideClass.h"


insideClass::insideClass(void)
{
	cout<<"the default constructor"<<endl;
}

//��Ա������ʹ��֮ǰ����ͨ������Ĺ��캯���Ĳ����б��ʼ��
insideClass::insideClass(ThePointer i):p(i)
{
	cout<<"the constructor with the class member"<<endl;
}

insideClass::~insideClass(void)
{
}
