#include <iostream>
#include <deque>
#include <algorithm>
/*
CH08-320143
a3 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

using namespace std;

int main()
{
    deque<float>A;
    float num;

    cin>>num;
    while (num!=0)
    {   if(num>0)
            A.push_back(num);
        else
            A.push_front(num);

        cin>>num;

    }

    for(unsigned int i=0;i<A.size();++i)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
    //printing an empty line

    deque<float>::iterator i;
    for (i=A.begin();i<A.end()-1;++i)
    {
        //statement to know where to put 0
        if (*i<0 && *(++i)>0)
            A.insert(i,0);
    }

    for(unsigned int i=0;i<A.size();++i)
    {
        if(i<A.size()-1)
            cout<<A[i]<<";";
        else
            cout<<A[i];


    }
    return 0;
}
