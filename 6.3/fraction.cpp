/*
CH08-320143
a6 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include "fraction.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//parametric constructor
Fraction::Fraction(int top, int bottom)
{
    int x = gcd(top, bottom);

    numerator = top/x;
    denominator = bottom/x;

    if(denominator == 0)
        throw "Invalid Data Or Logical Error";
}

//default constructor
Fraction::Fraction()
{
    numerator = 1;
    denominator = 1;
}

//constructor taking string parameter
Fraction::Fraction(string message)
{
    string hold;
    for(unsigned int i = 0; i < message.length(); i++)
    {
        //seperating at / and converting to integer
        if(message[i] == '/')
        {
            //using atoi to convert string to integer
            numerator = atoi(hold.c_str());
            hold = "";
        }
        else
            hold = hold + message[i];
    }
    //using atoi once again
    denominator = atoi(hold.c_str());
    int temp = gcd(numerator,denominator);
    //throw exception if denominator 0
    if(denominator == 0)
        throw "Invalid Data Or Logical Error";
    else
    {
        numerator = numerator/temp;
        denominator = denominator/temp;
    }
}

//copy constructor
Fraction::Fraction(const Fraction& f)
{
    numerator = f.numerator;
    denominator = f.denominator;

    if(denominator == 0)
    {
        throw "Invalid Data Or Logical Error";
    }
}

//overloading >> operator
istream &operator>>(istream &in,Fraction& f)
{
    cout << "Enter the numerator: ";
    in >> f.numerator;
    cout << "Enter the denominator: ";
    in >> f.denominator;

    //using gcd so fractions are in reduced form
    int temp=f.gcd(f.numerator,f.denominator);
    //throw exception if denominator 0
    if(f.denominator==0)
        throw "Invalid Data Or Logical Error";
    else
    {
        f.numerator = f.numerator/temp;
        f.denominator = f.denominator/temp;
    }
    return in;
}

//overloading << operator
ostream &operator<<(ostream &out,const Fraction &f)
{
    if(f.numerator==0)
        return out;

    out << f.numerator << "/" << f.denominator << endl;
    return out;
}

//overloading = operator
Fraction& Fraction::operator=(Fraction& f)
{
    numerator = f.numerator;
    denominator = f.denominator;

    if(denominator == 0)
        throw "Invalid Data Or Logical Error";

    return *this;
}

//overloading + operator
Fraction Fraction::operator +(Fraction& f)
{
    int lc=lcm(denominator,f.denominator);
    Fraction f1(((numerator*lc/denominator)+(f.numerator*lc/f.denominator)),lc);
    return f1;
}

//overloading - operator
Fraction Fraction::operator -(Fraction &f)
{
    int helper = lcm(denominator,f.denominator);

    Fraction f2(((numerator*helper/denominator)-(f.numerator*helper/f.denominator)),helper);
    return f2;
}

//overloading * operator
Fraction Fraction::operator *(Fraction &f)
{
    Fraction f3(numerator*f.numerator,denominator*f.denominator);
    return f3;
}

//overloading / operator
Fraction Fraction::operator /(Fraction &f)
{
    Fraction f4(numerator*f.denominator,denominator*f.numerator);
    return f4;
}

//overloading < operator
bool Fraction::operator<(Fraction& f)
{
    if((numerator*lcm(denominator,f.denominator)/denominator) < (f.numerator*lcm(denominator,f.denominator)/f.denominator))
        return true;
    else
        return false;
}

//overloading <= operator
bool Fraction::operator<=(Fraction& f)
{
    if((numerator*lcm(denominator,f.denominator)/denominator) <= (f.numerator*lcm(denominator,f.denominator)/f.denominator))
        return true;
    else
        return false;
}

//overloading > operator
bool Fraction::operator>(Fraction& f)
{
    if((numerator*lcm(denominator,f.denominator)/denominator) > (f.numerator*lcm(denominator,f.denominator)/f.denominator))
        return true;
    else
        return false;
}

//overloading >= operator
bool Fraction::operator>=(Fraction& f)
{
    if((numerator*lcm(denominator,f.denominator)/denominator) >= (f.numerator*lcm(denominator,f.denominator)/f.denominator))
        return true;
    else
        return false;
}

//overloading != operator
bool Fraction::operator!=(Fraction& f)
{
    if(numerator!=f.numerator || denominator!=f.denominator)
        return true;
    else
        return false;
}

//overloading == operator
bool Fraction::operator ==(Fraction& f)
{
    if(numerator == f.numerator && denominator == f.denominator)
        return true;
    else
        return false;
}

//gcd method for fraction
int Fraction::gcd(int a,int b)
{
    int result = 1;
    for(int j=1; j<=a && j<=b; j++)
    {
        if(a%j == 0 && b%j == 0)
            result = j;
    }
    return result;
}

//lcm method for fraction
int Fraction::lcm(int x,int y)
{
    return (x*y) / gcd(x,y);
}


