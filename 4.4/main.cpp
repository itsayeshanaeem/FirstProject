/*
CH08-320143
a4 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

#ifndef ACCESS_H_INCLUDED
#define ACCESS_H_INCLUDED


class Access {
    public:
        void activate(unsigned int code);
        void deactivate(unsigned int code);
        bool isactive(unsigned int code) const;
    private:
        set<unsigned int> codeset;
        //defining set of ints

// add properties and/or method(s) if necessary
};
#endif
void Access::activate(unsigned int code)
{
    codeset.insert(code);
}
void Access::deactivate(unsigned int code)
{
    codeset.erase(code);

}
bool Access::isactive(unsigned int code) const
{
    if (codeset.find(code) !=codeset.end())
        //checking is the code exists inside the set
        return true;
    else
        return false;
}int main()
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
        if ( !a1.isactive(c))
            //if the code doesnt exist re eneter
        {
            cout<<"INVALID CODE"<<endl;
            cout<<"Please Enter Again"<<endl;
        }
        else{


            cout<<"DOOR OPEN SUCCESSFULLY"<<endl;
            break;

            }
    }

    a1.deactivate(c);
    a1.deactivate(9999);
    a1.activate(1111);
    while (1)
    {
        cout<<"enter the access code again"<<endl;
        cin>>c;
        if (!a1.isactive(c))
        {
            cout<<"INVALID CODE"<<endl;
            cout<<"Please Enter Again"<<endl;

        }
        else{


            cout<<"DOOR OPEN SUCCESSFULLY"<<endl;
            break;

            }
    }
    return 0;

}


