#include "Week7_Reader.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
Week7_Reader::Week7_Reader(char listName[MAX_STR])
{
	currLine = 0;
	strcpy_s(ListName, listName);
}

int Week7_Reader::AddLine(char line[MAX_STR])
{
	if (currLine == MAX_LINES) return -1;

	strcpy_s(Lines[currLine], line);
	currLine++;
	return 0;
}
void Week7_Reader::Print()
{
	printf("ListName %s\n",ListName);
	for (int i = 0; i < currLine; i++)
	{
		printf("Line-%d-%s\n",i+1, Lines[i]);
	}

	currLine = 0;		
}

int Week7_Reader::GetCurrLine() {
	return currLine;
}