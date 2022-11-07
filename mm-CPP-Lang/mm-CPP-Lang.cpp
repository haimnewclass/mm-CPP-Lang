// mm-CPP-Lang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"
int main()
{
    char n1[] = "Kazablan";
    char n2[] = "Lassi";
    Dog Kaza(40000,n1);
    Dog Lassi(25000, n2);


    Kaza.weight = 40000;
    strcpy_s(Kaza.name, n1);

    Dog* dyndyn = new Dog(23000, n2);
    
    Kaza.Eating(170);
    Kaza.Sleeping(30);
    for (size_t i = 0; i < 10; i++)
    {
        Kaza.Playing();
    }

    Lassi.weight = 25000;
    Lassi.Playing();
   
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
