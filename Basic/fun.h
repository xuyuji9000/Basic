#pragma once
class fun
{
public:
	fun(void);
	~fun(void);

	void fucPara(int a = 1, int b = 2, int c = 3);
	void aboutConst(int a,int b) const;
	void aboutAnotherConst(int a, int b) const;
protected:
private:
	int i;
	
};

