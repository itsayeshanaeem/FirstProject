/*
CH08-320143
a2 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;
// Implementation of the Node class
template <class T>
Node <T> :: Node() {
    next = NULL;
    prev = NULL;
}

template <class T>
Node <T> :: Node(const T& in, Node *n, Node *p) {
    info = in;
    next = n;
    prev = p;
}
// Implementing Doubly Linked List
template <class T>
md <T> :: md() {
    tail = head = NULL;
    items = 0;
}

// constructor
template <class T>
md <T> :: md(Node <T> *front, Node <T> *rear, int items) {
    head = front;
    tail = rear;
    this->items = items;
}
template <class T>
md <T> :: ~md() {
    Node <T> *extra;
    while (head != NULL) {
        extra = head->next;
        delete head;
        head = extra;
    }
}

// pushing the number to front of list
template <class T>
void md <T> :: push_front(const T& in) {
    if (items != 0) {
        head = new Node <T> (in, head, NULL);
        head->next->prev = head;
    }
    else {
        head = tail = new Node <T> (in);
    }
    items++;
}

// push the number to back of list
template <class T>
void md <T> :: push_back(const T& in) {
    if (items != 0) {
        tail = new Node <T> (in, NULL, tail);
        tail->prev->next = tail;
    }
    else {
        head = tail = new Node <T> (in);
    }
    items++;
}

// pops the number in the front
template <class T>
T md <T> :: pop_front() {
    if (items == 1) {
        T num;
        num = head->info;

        delete head;
        head = tail = NULL;
        items--;

        return num;
    }
    else if (items != 0) {
        T num;
        num = head->info;

        Node <T> *p;
        p = head->next;
        delete head;
        head = p;
        items--;

        return num;
    }
    else {
        cerr << "Stack Underflow" << endl;
        return -1;
    }
}

// pops the number in the back
template <class T>
T md <T> :: pop_back() {
    if (items == 1) {
        T num;
        num = tail->info;

        delete tail;
        head = tail = NULL;
        items--;

        return num;
    }
    else if (items != 0) {
        T num;
        num = tail->info;

        tail = tail->prev;
        delete tail->next;
        tail->next = NULL;
        items--;

        return num;
    }
    else {
        cerr << "Stack Underflow" << endl;
        return -1;
    }
}

// gets element at the front
template <class T>
T md <T> :: front() const {
    return head->info;
}

// gets element at the back
template <class T>
T md <T> :: back() const {
    return tail->info;
}

// tells the number of elements
template <class T>
int md <T> :: numofelements() const{
    return items;
}

// prints
template <class T>
void md <T> :: print() const {
    Node <T> *extra;
    cout << "All elements: ";
    for (extra = head; extra; extra = extra->next) {
        cout << extra->info << " ";
    }
    cout << endl;
}

int main()
{
    md <int> D;

    D.push_front(10);
    D.push_back(9);
    D.push_front(2);
    D.push_back(7);
    cout<<"NUM OF ELEMENTS "<<D.numofelements()<<endl;
    cout<<"FIRST ELEMENT "<<D.front()<<endl;
    cout<<"LAST  ELEMENT "<<D.back()<<endl;

    D.print();

    cout << "Popped FIRST number: " << D.pop_front() << endl;
    cout << "Popped LAST number: " << D.pop_back() << endl;

    D.print();

}

