/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <iostream>

#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

class Card
{
public:
    //making sure jack queen and king have values 10
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
               JACK = 10, QUEEN = 10, KING = 10};
    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};

    //overloading << operator so can send Card object to standard output
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

    Card(rank r = ACE, suit s = SPADES, bool ifu = true);

    //returns the value of a card, 1 - 11
    int GetValue() const;

    //flips a card; if face up, becomes face down and vice versa
    void Flip();

private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};

#endif // CARD_H_INCLUDED
