#pragma once
class TesterBase
{
public:
	int a;
public:
	int Global();
	int GetNBase();
	int GetN();
};



class Tester:public TesterBase
{
public:
	int a;
public:
	int GetN();
public:
	int Combine();
};


