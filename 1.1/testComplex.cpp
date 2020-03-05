/*
CH08-320143
a1 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
#include <fstream>//stream class to read and write to files
#include <stdlib.h>
#include <string>
#include <vector>



using namespace std;

int main()

{
    ifstream file1;
    ifstream file2;
    ofstream file3;

    Complex a;
    Complex b;
    Complex c;

    file1.open("in1.txt",ios::in);
    if (file1.is_open())
    {
        file1 >> a;
    }
    file2.open("in2.txt",ios::in);
    if (file2.is_open())
    {
        file2 >> b;
    }
    //reading from the files
    file3.open("output.txt",ios::out);
    if (file3.is_open())
    {
        c=a+b;
        cout<<"Sum is: "<<endl;
        cout<<c;
        file3<<c;

        c=a-b;
        cout<<"Difference is: "<<endl;
        cout<<c;
        file3<<c;

        c=a*b;
        cout<<"Product is"<<endl;
        cout<<c;
        file3<<c;
        //writing to the file and printing on the screen
    }
    file1.close();
    file2.close();
    file3.close();
    //closing files
   return 0;

}
