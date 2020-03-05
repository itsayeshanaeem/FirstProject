/*
CH08-320143
a2 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

template <class T>
class Node {
    public:
        T info;
        Node *next;
        Node *prev;
    public:
        Node();
        Node(const T&, Node*, Node*);
};
template <class T>
class md {//DOUBLE LINKED LIST CLASS
    public:
        Node <T> *head;
        Node <T> *tail;
        int items;
    public:
        md();
        md(Node <T> *, Node <T> *, int);
        ~md();
        //constructors and destructors

        void push_front(const T&);

        void push_back(const T&);

        T pop_front();

        T pop_back();

        T front() const;

        T back() const;

        int numofelements() const;

        void print() const;
         // service methods

};
#endif
