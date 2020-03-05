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

    cout << "Testing Operators" << endl;

    if (f1>f2)
        cout << "f1 is greater than f2" << endl;
    if(f1>=f2)
        cout << "f1 is greater than or equal to f2" << endl;
    if(f1<f2)
        cout << "f1 is less than f2" << endl;
    if(f1<=f2)
        cout << "f1 is less than or equal to f2" << endl;
    if(f1==f2)
        cout << "f1 is equal to f2" << endl;
    if(f1!=f2)
        cout << "f1 is not equal to f2" << endl;

    getchar();

    return 0;
}
