#include <iostream>
#include <list>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <stdlib.h>
/*
CH08-320143
a3 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;

int main()
{
    list<int>A;
    list<int>B;
    //creating 2 lists
    int num;
    ofstream f;
    std::list<int>::iterator it;

    cin>>num;

    while(num>0)
    {
        A.push_back(num);
        B.push_front(num);
        cin>>num;
        //pushing integers in front and back of lists

    }


    for(list<int>::iterator i=A.begin();i!=A.end();i++)
    {
            cout<<*i<<" ";


    }
    /*
    f.open("listB.txt",ios::out);
    if (f.good())
    {

        for(list<int>::iterator i=B.begin();i!=B.end();i++)
        {
            f<<*i<<" ";
        }
    }
    else
        cout<<"ERROR IN OPENING FILE";
    cout<<endl;
    */
//printing to file
    list<int>::iterator a;
    A.splice(A.end(),A,a);


//moving the elements
    for(list<int>::iterator i=A.begin();i!=A.end();++i)
    {
        if (i==(-- A.end()))
            cout<<*i;
        else
            cout<<*i<<",";
    }
    cout<<endl;
     for(list<int>::iterator i=B.begin();i!=B.end();i++)
    {
        if (i==(--B.end()))
            cout<<*i;
        else
            cout<<*i<<",";
    }
    cout<<endl;

    A.merge(B);
    A.sort();
//merging the lists and sorting it
     for(list<int>::iterator i=A.begin();i!=A.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
