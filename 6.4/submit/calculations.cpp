/*
CH08-320143
a6 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>
#include <cstdio>
#include "fractions.h"
using namespace std;

int main()
{

    Fraction f1(10,20);
    Fraction f2(5,10);
    Fraction f3(5, 5);
    Fraction f4(25, 100);

    cout << "Testing Operators" << endl;

    if ((f1+f2) == f3)
        cout << "f1+f2 is equal to f3" << endl;
    if((f1-f2) == f3)
        cout << "f1-f2 is equal to f3" << endl;
    if((f1*f2) == f4)
        cout << "f1*f2 is equal to f4" << endl;
    if((f1/f2) == f3)
        cout << "f1/f2 is equal to f3" << endl;
    getchar();
    return 0;
}

