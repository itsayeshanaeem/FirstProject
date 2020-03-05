#include <iostream>
#include <deque>
#include <algorithm>
/*
CH08-320143
a3 p5.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;

class WindGauge {
    public:

     void WindGuage(int period =12);


    int lowest()const
    {
        return *min_element(h.begin(),h.end());
    }

    int average()const
    {
        int average=0;
        int add=0;

        for(unsigned int i = 0; i < h.size(); i++)
        {
            add += h[i];
        }
        average=add/h.size();
        return average;
    }
    int highest()const
    {
        return *max_element(h.begin(),h.end());

    }

    void dump()
    {
        cout<<"HIGHEST SPEED: "<<highest()<<endl;
        cout<<"LOWEST SPEED: "<<lowest()<<endl;
        cout<<"AVERAGE SPEED: "<<average()<<endl;
    }

    void currentWindSpeed(int speed)
    {
        //popping first/oldest element of deque
        if(h.size() == period)
            h.pop_front();

        //pushing element
        h.push_back(speed);
    }

        private:
            unsigned int period;
            deque <int> h;

    };


int main()
{
    WindGauge d;
    //deque object

    d.currentWindSpeed(15);
    d.currentWindSpeed(16);
    d.currentWindSpeed(12);
    d.currentWindSpeed(15);
    d.currentWindSpeed(15);

    d.dump();
    //calling print function

    d.currentWindSpeed(16);
    d.currentWindSpeed(17);
    d.currentWindSpeed(16);
    d.currentWindSpeed(16);
    d.currentWindSpeed(20);
    d.currentWindSpeed(17);
    d.currentWindSpeed(16);
    d.currentWindSpeed(15);
    d.currentWindSpeed(16);
    d.currentWindSpeed(20);


    d.dump();
     //calling the print function

    return 0;
}
