#include "Dog.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)
void Dog::Barking(int count)
{
	weight -= 2 * count;
}

void Dog::Eating(int gram)
{
	weight += gram;
}

Dog::Dog(int aWeight, char aName[100])
{
	weight = aWeight;
	strcpy(name, aName);
}


void Dog::Sleeping(int minutes)
{
	weight -= minutes;
}

void Dog::Playing()
{
	weight -= 1;
}
