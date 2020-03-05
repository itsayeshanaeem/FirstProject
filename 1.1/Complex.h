/*
CH08-320143
a1 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>

class Complex
{

private:
	float real;
	float imaginary;

public:

    //default constructor
    Complex();
    //constructor with parameters
	Complex(float, float);
	//destructor
	~Complex();

	//setters
    void setReal(float nreal);
    void setImag(float nimaginary);

    //getters
    float getReal();
    float getImag();

    //declaring methods
	Complex conj();

    friend std::ostream& operator <<(std::ostream &,const Complex &);
    friend std::istream& operator >>(std::istream &,Complex &);
    Complex & operator =(const Complex &);
    Complex operator +(const Complex &);
    Complex operator -(const Complex &);
    Complex operator *(const Complex &);
    //overloading operators


};

