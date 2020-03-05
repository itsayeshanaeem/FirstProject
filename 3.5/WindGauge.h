/*
CH08-320143
a3 p5.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <deque>
class WindGauge {
    public:
        WindGauge(int period = 12);
        ~WindGuage();
        void currentWindSpeed(int speed);
        int highest() const;
        int lowest() const;
        int average() const;
        void dump();
        print();
    private:
        unsigned int period;
        deque<int>h;

};
