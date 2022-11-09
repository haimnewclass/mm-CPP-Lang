#include "Week7_Reader.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
Week7_Reader::Week7_Reader(char listName[100])
{
	currLine = 0;
	strcpy_s(ListName, listName);
}

int Week7_Reader::AddLine(char line[100])
{
	if (currLine == 10) return -1;

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