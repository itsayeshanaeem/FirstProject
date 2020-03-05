/*
CH08-320143
a1 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
#include <cmath> // for taking square
#include "Complex.h"
#include <fstream>

using namespace std;

//setters
void Complex::setReal(float real)
{
	this->real = real;
}
void Complex::setImag(float imaginary)
{
	this->imaginary = imaginary;
}

//getters
float Complex::getReal()
{
    return real;
}

float Complex::getImag()
{
    return imaginary;
}

//default constructor
Complex::Complex()
{
	real = 0;
	imaginary = 0;

}

//constructor with parameters
Complex::Complex(float real, float imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

//conjugate method
Complex Complex::conj()
{

    Complex x;
    x.real = real;
    x.imaginary = -imaginary;

    return x;

}

//destructor
Complex::~Complex(){}

//print method

std::ostream& operator <<(std::ostream &out,const Complex &x)
{
    if (x.imaginary)
    {
		out << noshowpos << x.real << showpos << x.imaginary << "i" << endl;//for sign
	}
	else
	{
		out << noshowpos << x.real << endl;  //if no imaginary part
	}
	return out;

}
std::istream& operator >>(std::istream &in,Complex &x)
{
    in >> x.real;
    in >> x.imaginary;
    return in;
}
Complex& Complex::operator =(const Complex&x)
{
    this->real=x.real;
    this->imaginary=x.imaginary;
    return *this;

}
Complex Complex::operator +(const Complex &x){
    Complex z;
    z.real=real+x.real;
    z.imaginary=imaginary+x.imaginary;
    return z;
}
Complex Complex::operator -(const Complex &x)
{
    Complex z;
    z.real=real-x.real;
    z.imaginary=imaginary-x.imaginary;
    return z;

}
Complex Complex::operator *(const Complex &x){

    Complex z;

    z.real = real*x.real - imaginary*x.imaginary;
    z.imaginary = real*x.imaginary + imaginary*x.real;

    return x;

}
