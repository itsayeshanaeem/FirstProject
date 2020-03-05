#include <iostream>
#include <vector>
#include <algorithm>
/*
CH08-320143
a4 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/


using namespace std;

int main()
{
    vector<int>x;
    for(int i=1;i<31;i++)
    {
        x.push_back(i);
    }
    x.push_back(5);
    reverse(x.begin(),x.end());
    //using reverse to reverse the order of vector
    for (vector<int>::iterator i =x.begin();i!= x.end();++i)
        {
                cout<<*i<<" ";

        }
    cout<<endl;
    //using iterator to print the values
    replace(x.begin(),x.end(),5,129);\
    //using replace to replace 5 and 129
     for (vector<int>::iterator i =x.begin();i!= x.end();++i)
        {
                cout<<*i<<" ";

        }











    return 0;
}
