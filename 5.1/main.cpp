#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
/*CH08-320143
a5 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;


int main()
{   int x=8;
    vector <int> v;
    for(int i=0;i<20;i++)
    {
        v.push_back(x);
    }
    //inserting values inside the vector
    try
    {
        v.at(21);
    }


    catch (const out_of_range &range)
    {
        cerr << "ERROR:OUT OF RANGE: " << range.what() <<endl;
    }
    //using cerr to print

    return 0;
}
