#include<iostream>
/*
CH08-320143
a1 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B:  public virtual A//using virtual inheritance
{
public:
  B()  { setX(10); }
};

class C:  public virtual A
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    return 0;

}
//Since print function was in class A
//complier didnt know which subobject to create when
//print command was given
//so i added virtual while inheriting A in B and C so
//one subobject is created
