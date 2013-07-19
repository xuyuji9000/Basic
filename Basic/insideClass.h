#pragma once
#include "stdafx.h"
#include "ThePointer.h"

//测试成员对象
class insideClass
{
public:
	insideClass(void);
	insideClass(ThePointer i);
	~insideClass(void);

protected:
private:
	ThePointer p;
};

