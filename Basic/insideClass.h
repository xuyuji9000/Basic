#pragma once
#include "stdafx.h"
#include "ThePointer.h"

//���Գ�Ա����
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

