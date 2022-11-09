#include "Week7_ReaderRunner.h"

void Week7_ReaderRunner::Run()
{
	char str[] = "blabla";
	// Allocate 10 objects
	for (int i = 0; i < COUNT; i++)
	{
		list[i] = new Week7_Reader(str);
	}

	// Insert Lines each list
	for (int currList = 0; currList < COUNT; currList++)
	{
		for (int currLine = 0; currLine < 5; currLine++)
		{
			// add line j for item i in list
			list[currList]->AddLine(str);
		}
	}


	// Print
	for (int i = 0; i < COUNT; i++)
	{
		list[i]->Print();
	}

	// Deallocate
	for (int i = 0; i < COUNT; i++)
	{
		delete list[i];
	}
}