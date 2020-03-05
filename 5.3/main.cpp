#include <iostream>
/*
CH08-320143
a5 p4.cpp
Ayesha Naeem
myemail@jacobs-university.de
*/
using namespace std;

class Motor
{
public:
    Motor()
    {
        throw("This motor has problems!");
         //throwing exception
    }
};
class Car:public Motor //car class inherits from motor
{
public:
    Car()
    {

        try
        {
            Motor m;
            //here we call motor's cpnstructor
        }
        catch(char const *c)
        {
            throw c;
        }
    };
};
class Garage: public Car
{
//garage class inherits from car
public:
    Garage()
    {
        try
        {
            Car car;

        }
        catch(char const *c)
        {

            throw "The car in this garage has problems with the motor!";
            //throwing exception
        }

    };
};
int main()
{
    try
    {
        Garage garage;
    }
   catch( char const*ca)
   {
       cerr<<ca;
   }

    return 0;
}
