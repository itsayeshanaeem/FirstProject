/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include "Hand.h"
#include "Card.h"
#include <vector>

using namespace std;

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}

void Hand::Clear()
{
    //iterate through vector, freeing all memory on the heap
    vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    //clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
    //counter for counting aces
	int total = 0, counter = 0;

    vector<Card*>::const_iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        //counting aces
        if ((*iter)->GetValue() == 1)
            counter++;
        total = total + (*iter)->GetValue();
    }
    //if the total value is less than or equal to 21
    //when we consider ace as 11, then keep ace as 11
    //otherwise use value 1 for ace
    if ((counter*10)+total <= 21)
        total = total + (counter*10);

    return total;
}
