// mm-CPP-Lang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Week7_Reader.h"
#include <iostream>
#include "Dog.h"
#include "Base.h"
#include "Week7_ReaderRunner.h"
#include "Tester.h"
#include "ItemPriceEilat.h"
#include "Child.h"
int main()
{
    int num;

    ItemPriceEilat eilatItem;
    num = eilatItem.Calc(100);

    Base b;
    b.AddNum(10);
    num = b.Calc();

    Child child;
    child.AddNum(123);
    num = child.AddNum(12);
    
    Base b1;
    b1 = child;
     

    Week7_ReaderRunner runner;
    runner.Run();



    char str[] = "Shoping";
    Week7_Reader r1(str);

    char str2[] =  "111111";

    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.AddLine(str);
    r1.GetCurrLine();

    for (size_t i = 0; i < 12; i++)
    {
        r1.AddLine(str);
    }
   
    r1.Print();

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
   

    Tester* t = new Tester();

    int g = ((TesterBase*)t)->GetN();

    g = ((TesterBase*)t)->Global();

    g = t->GetN();

    g = t->Global();

    g = t->Combine();


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
