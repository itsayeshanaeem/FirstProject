/*
CH08-320143
a2 p3.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

template <class T>
class Stack
{
private:
    int t;
    int size;
    T *Array;

public:
    Stack();
    //default constructor

    ~Stack();
    //destructor

    Stack(const Stack&);
    //copy constrcutor

    Stack(int);
    //constructor with parameter

    T back(void);
    //data on top of stack

    int getNumEntries();

    bool push(T);
    //push function

    bool pop(T&);
    //pop function
    int getSize();
    //returns size
    void resize(int s);
    //resizes


};
#endif
