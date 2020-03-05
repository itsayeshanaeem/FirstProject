/*
CH08-320143
a4 p5.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name,dob,input;
    ifstream myfile ("data.txt"); // opening file //
    map<string,string> dictionary;// declaring map //
    cout<<"Input key" <<endl;
    getline(cin, input);       // input key //
    if (myfile.is_open())
    {
        while (!myfile.eof())   // until end of file //
        {
            getline(myfile,name);
            getline(myfile,dob);
            dictionary[name]=dob;  // inserting into map //

        }

        if (dictionary.find(input)!= dictionary.end()) // if name found //
        {
            cout << input<<" =" << dictionary[input] << endl;
        }
        else
        {
            cout<<"Name not found!"<<endl;  // if not //
        }
        myfile.close();
    }

    else cout << "Unable to open file";
}
