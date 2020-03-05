/*
CH08-320143
a6 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>

class Fraction{
private:
	int numerator;
	int denominator;

    int lcm(int a,int b);
    int gcd(int a,int b);

public:
    //constructors
    Fraction(std::string st);
	Fraction();
	//copy constructor
	Fraction(const Fraction&);
	Fraction(int,int);

	//calculation operators
	Fraction operator+(Fraction&);
	Fraction operator-(Fraction&);
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);

	//istream and ostream operator overloading
	friend std::ostream& operator<<(std::ostream&,const Fraction&);
	friend std::istream& operator>>(std::istream&, Fraction&);

	//comparsion operators overloading
	bool operator>(Fraction&);
	bool operator>=(Fraction&);
    bool operator==(Fraction&);
	bool operator!=(Fraction&);
    bool operator<(Fraction&);
	bool operator<=(Fraction&);

	Fraction& operator=(Fraction&);
};

