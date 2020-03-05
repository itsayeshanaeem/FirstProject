/*
CH08-320143
a2 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/


#include <iostream>
#include <cmath>
//#include "Complex.h"

using namespace std;

template <class T>
int array_search(T A[],int size,T element)//function
{
    if(size< 0)
    {

        return -1;
    }

    else
    {

        for (int i=0;i< size; i++)
        {

            if(A[i] == element)
                return i+1;
        }

    return -1;
    }
}

int main()
{
    int a1[] = {10, 20, 30, 40};
    double a2[] = {11.1, 22.3, 45.6};
    //Complex a3[] ={Complex(5,2),Complex(9,3)};
    //array of int, double and complex


    cout << array_search<int>(a1,4,5) << endl;
    cout << array_search<double>(a2,3,45.6) << endl;
    //cout << array_search<Complex>(a3,2,Complex(9,3)) <<endl;


    return 0;
}
