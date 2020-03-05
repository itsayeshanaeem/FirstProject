/*
CH08-320143
a4 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;

#ifndef ACCESS_H_INCLUDED
#define ACCESS_H_INCLUDED


class Access {
    public:
        void activate(unsigned int code);
        void deactivate(unsigned int code);
        bool isactive(unsigned int code) const;
    private:
        set<unsigned int> code;

// add properties and/or method(s) if necessary
};
#endif
