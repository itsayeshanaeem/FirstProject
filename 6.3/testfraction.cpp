/*
CH08-320143
a6 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "fraction.h"
using namespace std;

int main()
{
    //trying test cases and catching exceptions
    try
    {
        Fraction f(4,0);
    }

    catch (const char* s)
    {
        cout << s << endl;
    }

    try
    {

        Fraction f1(2,5);
    }

    catch (const char* s)
    {
        cout << s << endl;
    }

    //strings as parameters
    try
    {

        Fraction f2("-4/5");
    }

    catch (const char* s)
    {
        cout << s << endl;
    }

    try
    {

        Fraction f3("15/0");
    }
    catch (const char* s)
    {
        cout << s << endl;
    }

    try
    {

        Fraction f4("x%/y");
    }

    catch (const char* s)
    {
        cout << s << endl;
    }

    Fraction f5,f6(3,2);
    cout << "other frac is 3/2" << endl;
    //testing input and operators
    try
    {
        cout << "Enter f5: ";
        cin >> f5;
        cout << "Sum: " << f5+f6<< endl;
        cout << "Difference: " << f5-f6 << endl;
        cout << "Product: " << f5*f6 << endl;
        cout << "Division: " << f5/f6 << endl;
        if(f5 == f6)
            cout << "f5 equals f6" << endl;

        if(f5 != f6)
            cout << "f5 does not equal f6" << endl;

        if(f5 <= f6)
            cout << "f5 is less than or equal to f6" << endl;

        if(f5 >= f6)
            cout << "f5 is greater than or equal to f6" << endl;

        if(f5 > f6)
            cout << "f5 is greater than f6" << endl;

        if(f5 < f6)
            cout << "f5 is less than f6" << endl;
    }
    catch(const char* s)
    {
        cout << s << endl;
    }

    cout << "Fraction2: " << f5 << endl;

    return 0;
}

