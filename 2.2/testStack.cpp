/*
CH08-320143
a2 p2.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>
#include "Stack.h"
#include <cstdlib>


using namespace std;

template<class T>
Stack<T>::Stack()
{
    size=10;
    Array=new T[10];
    t=-1;

}

template <class T>
Stack<T>::~Stack()
{
    delete Array;
}
template <class T>
Stack<T>::Stack(const Stack &a)
{
    size=a.size;
    t=a.t;
    Array=new T[size];
    for(int i=0;i<size;i++)
    {
        Array[i]=a.Array[i];
    }

}

template <class T>
Stack<T>::Stack(int x)
{
    size=x;
    Array=new T[x];
    t=-1;

}
template <class T>
bool Stack<T>::push(T a)
{
    if (t == size - 1)
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        Array[++t] = a;
        cout<<a<<" pushed into stack\n";
        return true;
    }

}

template <class T>
bool Stack<T>::pop(T &a)
{
    if (t < -1)
    {
        cout << "Stack Underflow";
        return false;
    }
    else
    {
        a = Array[t--];
        return true;
    }
}
template <class T>
T Stack<T>::back()
{
    if (t==-1)
       {
        cout << "No element in list" << endl;
        exit(1);
        }
    else
        return Array[t];
}

template <class T>
int Stack<T>::getNumEntries()
{   int x;
    x=t+1;
    return x;
}
int main ()
{
    Stack<int>st(10);
    int x;

    st.push(2);
    st.push(10);
    st.push(6);
    //pushing the values

    cout<<"NUMBER OF ENTRIES: "<<st.getNumEntries()<<endl;
    //using function getnumentries
    cout<<"TOP ELEMENT OF STACK IS: "<<st.back()<<endl;
    //checking the back function
    st.pop(x);
    cout<<"POPPED ELEMEMT IS:"<<x<<endl;
    //checking the pop function






    return 0;
}
