/*
CH08-320143
a1 p2.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    ifstream file1;
    ofstream file2;


    file2.open("concatn.txt",ios::out|ios::binary);//
    //opening the file for printing the concatenation result
    if(!file2.good())//checking if it successfully opened
    {
        cout<<"Cant open File"<<endl;
    }

    int n;
    cin>>n;
    //taking input for the number of files
    char name[50];

    for(int i=0;i<n;i++)
    {
        cin>>name;
        file1.open(name,ios::in|ios::binary);
        //opening the file to read binary
        if (file1.is_open())
        {
                file1.seekg (0,file1.end);
                //checking the end of file
                int length = file1.tellg();
                //storing the length of file in length
                file1.seekg(0,file1.beg);
                char * buffer = new char [length];
                //allocating memory and checking for the allocation
                if (buffer ==NULL)
                    exit(1);
                file1.read(buffer,length);
                //reading from the file
                file2.write(buffer,length);
                //writing the result to other file
                file2<<"\r\n";
                //seprator
                file1.clear();
                file1.close();
                delete[] buffer;

        }
        else
        {
            cout<<"Error cant open the file"<<endl;
        }
    }
    file2.close();
    return 0;
}
