/*
CH08-320143
a4 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int>A;
    multiset<int>B;
    int num;

    set<int>::iterator i;
    set<int>::iterator j;

    cin>>num;

    while(num>0)
    {
        A.insert(num);
        B.insert(num);
        //inserting inside the set and multiset
        cin>>num;

    }

    for(i=A.begin();i!=A.end();++i)
    {
        cout<<*i<<" ";

    }

    cout<<endl;

    for(j=B.begin();j!=B.end();++j)
    {
        cout<<*j<<" ";
    }

    cout<<endl;


    A.erase(5);
    B.erase(5);
    //erasing the element 5 from both

    for(set<int>::iterator m=A.begin();m!=A.end();++m)
    {
        cout<<*m<<" ";

    }

    cout<<endl;

    set<int>::iterator b = B.begin();
    while(b!=B.end())
    {
        cout<<*b<<" ";
        b++;
    }

    A.insert(14);
    A.insert(198);
    //inserting more elementsv

    set<int>C;
    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C.begin()));
    for(set<int>::iterator b=C.begin();b!=C.end();++b)
    {
        cout<<*b<<" ";
    }
    cout<<endl;

    set<int>D;
    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(D,D.begin()));
    for(set<int>::iterator b=B.begin();b!=B.end();++b)
    {
        cout<<*b<<" ";
    }
    cout<<endl;

    set<int>E;
    set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(E,E.begin()));
    for(set<int>::iterator b=E.begin();b!=E.end();++b)
    {
        cout<<*b<<" ";
    }



    return 0;
}
