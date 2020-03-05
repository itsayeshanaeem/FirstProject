
/*
CH08-320143
a4 p4.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;
void Access::activate(unsigned int code)
{
    code.insert(code);
}
void Access::deactivate(unsigned int code)
{
    code.erase(code);

}
bool Access::isactive(unsigned int code) const
{
    if (code.find(code) !=code.end())
        return true;
    else
        return false;
}
