#include <iostream>
#include <set>
#include <algorithm>
#include "Access.h"
/*
CH08-320143
a4 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;

int main()
{
    Access a1;
    unsigned int c;

    a1.activate(1234);
    a1.activate(9999);
    a1.activate(9876);

    while (1)
    {
        cout<<"enter the access code"<<endl;
        cin>>c;
        if(!a1.isactive(c))
            cout<<"INVALID CODE"<<endl;
            cout<<"Please Enter Again"<<endl;
        else
            cout<<"DOOR OPEN SUCCESSFULLY"<<endl;
            break;
    }

    a.deactivate(c);
    a.deactivate(9999);
    a.activate(1111);
    while (1)
    {
        cout<<"enter the access code"<<endl;
        cin>>c;
        if(!a1.isactive(c))
            cout<<"INVALID CODE"<<endl;
            cout<<"Please Enter Again"<<endl;
        else
            cout<<"DOOR OPEN SUCCESSFULLY"<<endl;
            break;
    }

}
