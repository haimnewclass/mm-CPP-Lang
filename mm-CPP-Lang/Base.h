#pragma once
class Base
{
public:
	int num=0;
	int AddNum(int a);
	int Calc();
private:
	int num2;
	int IAmPrivate(int a);
public:
	int num3;	
protected:
	int num4;
	int IAmProtected(int a);

};

