/*
CH08-320143
a5 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

class OwnException: public exception//creating the class
{
    public:
        OwnException(string m){};
        ~OwnException()throw(){};

        virtual const char* what() const throw()
         {
             return "Own Exception\n";
         }
    private:
        string message;


};
void functionex(int num)//creating function
{
    switch(num)
    {
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;
    case 3:
        throw true;
        break;
    default:
        throw OwnException("Default Case Exception");
        break;
    }
}

int main()
{
    try
    {
        functionex(1);
    }

    catch (char c)
    {
        cerr << "Caught in main: " << c << endl;
    }
//using cerr to print
    try
    {
        functionex(2);
    }
    catch (int n)
    {
        cerr << "Caught in main: " << n << endl;
    }


    try
    {
        functionex(3);
    }
    catch (bool b)
    {
        cerr << "Caught in main: " << b << endl;
    }

    try
    {
        functionex(4);
    }
    catch (OwnException& ex)
    {
        cerr << "Caught in main: "<< ex.what() << endl;
    }
    return 0;
}
