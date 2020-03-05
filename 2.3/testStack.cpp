/*
CH08-320143
a2 p3.cpp
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


template <class T>
int Stack<T>::getSize()
{
    return size;
}

template <class T>
void Stack<T>::resize(int s)
{
    Stack<T> extra(size);
    //using an extra array
    for(int i =0;i<size;i++)
    {
        extra.Array[i]=Array[i];
    }
    extra.t=t;

    //if new size is more than the old one
    if (s>size)
    {
        delete Array;
        Array=new T[s];
        size=s;
        t=-1;
        for (int i=0; i <=extra.t;i++)
        {
            Array[i]=extra.Array[i];
            t++;
        }
    }
    //if new size is smaller
    else
    {
        //if number of elements in old were more than total size of new
        if (t>=s)
        {
            delete Array;
            Array=new T[size];
            size= s;
            t = -1;
            for (int i = 0; i<s; i++)
            {
                Array[i] =extra.Array[i];
                t++;
            }
        }
        //if number of elements in old were less than or equal to total size of new
        else
        {
            delete Array;
            Array = new T[s];
            size=s;
            t = -1;
            for (int j= 0; j <=extra.t; j++)
            {
                Array[j] =extra.Array[j];
                t++;
            }
        }
    }
    delete extra.Array;
}

int main ()
{
    Stack<double>st(10);
    double x;
    int news;

    st.push(2.6);
    st.push(10.7);
    st.push(6.5);
    //pushing the values

    cout<<"SIZE IS: "<<st.getSize()<<endl;
    //printing the size

    cout<<"ENTER THE NEW SIZE"<<endl;
    cin>>news;
    st.resize(news);
    cout<<"NEW SIZE IS: "<<st.getSize()<<endl;

    cout<<"NUMBER OF ENTRIES: "<<st.getNumEntries()<<endl;
    //using function getnumentries
    cout<<"TOP ELEMENT OF STACK IS: "<<st.back()<<endl;
    //checking the back function
    if (st.pop(x));
    cout<<"POPPED ELEMEMT IS: "<<x<<endl;
    //checking the pop function

    return 0;
}
