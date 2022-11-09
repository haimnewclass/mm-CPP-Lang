#pragma once
#define MAX_LINES 20
#define MAX_STR 100
class Week7_Reader
{
public:
	Week7_Reader(char listName[MAX_STR]);
	int AddLine(char line[MAX_STR]);
	void Print();
	char ListName[MAX_STR];
	char Lines[MAX_LINES][MAX_STR];
	int GetCurrLine();
private:
	int currLine;
};

