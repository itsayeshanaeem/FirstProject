#include <iostream>
#include <list>
#include <algorithm>
#include <random>
#include <time.h>
#include <cstdlib>
/*
CH08-320143
a4 p2.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;

int main()

{   srand(time(NULL));
    list<int>x;
    int i;
    i=x.size();
    while(i<6)
    {
        int a=rand() % 49 + 1;
        x.push_front(a);
        x.unique();
        i=x.size();

    }

    x.sort();
    cout << "list has ";
  for (list<int>::iterator i=x.begin(); i!=x.end();++i)
   {
       cout << *i<<" ";
   }
  cout <<endl;

    return 0;
}
