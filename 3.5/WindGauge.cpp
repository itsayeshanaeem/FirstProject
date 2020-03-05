/*
CH08-320143
a3 p5.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;
WindGuage::WindGuage()
{
    period=12;
}

WindGuage::~WindGuage()
{
}
int WindGuage::lowest()const
{
    return *min_element(h.begin(),h.end());
}
int WindGuage::average()const
{
    int average;
    int add=0;
    for(int i;i<h.size();i++)
    {
        add=add+h[i];

    }
    average=add/h.size();
    return average;
}
int WindGuage::highest()const
{
    return *max_element(h.begin(),h.end());

}
void WindGuage::print()
{
    cout<<"HIGHEST SPEED: "<<highest()<<endl;
    cout<<"LOWEST SPEED: "<<lowest()<<endl;
    cout<<"AVERAGE SPEED: "<<average()<<endl;
}
void WindGauge::currentWindSpeed(int speed)
{
    //popping first/oldest element of deque
    if(h.size() == period)
        h.pop_front();

    //pushing element
    h.push_back(speed);
}
