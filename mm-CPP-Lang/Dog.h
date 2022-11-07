#pragma once
class Dog
{
public:
	/// <summary>
	///  Properties
	/// </summary>
	char name[100];
	int age;
	int weight;

	
	/// <summary>
	/// Actions
	/// </summary>
	Dog(int aWeight, char aName[100]);

	void Sleeping(int minutes);

	void Barking(int count);

	void Eating(int gram);

	void Playing();
};

