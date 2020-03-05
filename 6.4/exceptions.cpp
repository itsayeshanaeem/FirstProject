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
    cout << "Testing Exceptions" << endl;

    try
    {
        Fraction x(4,'h');
    }

    catch(const char* s)
    {
        cerr << s << endl;
    }

    try
    {
        Fraction y(1,0);
    }
    catch(const char* s)
    {
        cerr << s << endl;
    }
    getchar();
    return 0;
}

