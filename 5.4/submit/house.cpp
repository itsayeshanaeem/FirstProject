/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include "House.h"

using namespace std;

House::House(const string& name):
    GenericPlayer(name)
{}

House::~House()
{}

bool House::IsHitting() const
{
    return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
    if (!(m_Cards.empty()))
	{
        m_Cards[0]->Flip();
	}
    else
	{
		cout << "No card to flip!\n";
	}
}
