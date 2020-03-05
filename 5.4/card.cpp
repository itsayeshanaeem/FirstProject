/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
#include "Card.h"

//function prototypes
std::ostream& operator<<(std::ostream& os, const Card& aCard);

Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{}

int Card::GetValue() const
{
	int value;

	//value zero if face is not up
	if (!m_IsFaceUp)
    {
        value = 0;
    }
    //value according to rank
    else
    {
        value = m_Rank;
    }

	return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}

//overloads << operator so Card object can be sent to cout
std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
                            "10", "J", "Q", "K"};
    const std::string SUITS[] = {"c", "d", "h", "s"};

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}
