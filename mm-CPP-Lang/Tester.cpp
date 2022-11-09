#include "Tester.h"
int  Tester::GetN()
{
	return 1;
}

int Tester::Combine()
{
	return Global();
}



int  TesterBase::Global()
{
	return GetN();
}

int  TesterBase::GetN()
{
	return 11;
}

int  TesterBase::GetNBase()
{
	return 1111;
}
