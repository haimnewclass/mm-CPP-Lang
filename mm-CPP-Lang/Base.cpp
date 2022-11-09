#include "Base.h"

int Base::AddNum(int aNum)
{
	num = aNum;

	num = num + Calc();

	return num;
}

int Base::Calc()
{
	return 999;
}

int Base::IAmProtected(int aNum)
{
	num = aNum;

	return 0;
}


int Base::IAmPrivate(int aNum)
{
	num = aNum;

	return 0;
}

