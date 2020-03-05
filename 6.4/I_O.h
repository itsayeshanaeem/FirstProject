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

    Fraction f1,f2(10,20);

    cout << "Testing I/O Operators" << endl;

    cout << "Input fraction f1: ";
    cin >> f1;

    cout << "Fraction f1: " << f1 << endl;
    cout << "Fraction f2: " << f2 << endl;

    return 0;
}


