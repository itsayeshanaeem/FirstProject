/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include "Hand.h"
#include "GenericPlayer.h"

#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

class Deck : public Hand
{
public:
    Deck();

    virtual ~Deck();

    //create a standard deck of 52 cards
    void Populate();

    //shuffle cards
    void Shuffle();

    //deal one card to a hand
    void Deal(Hand& aHand);

    //give additional cards to a generic player
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif // DECK_H_INCLUDED
