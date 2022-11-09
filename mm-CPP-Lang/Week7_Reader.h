#pragma once
class Week7_Reader
{
public:
	Week7_Reader(char listName[100]);
	int AddLine(char line[100]);
	void Print();
	char ListName[100];
	char Lines[10][100];
	int currLine;
};

