/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include "GenericPlayer.h"

#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED

class House : public GenericPlayer
{
public:
    House(const std::string& name = "House");

    virtual ~House();

    //indicates whether house is hitting - will always hit on 16 or less
    virtual bool IsHitting() const;

    //flips over first card
    void FlipFirstCard();
};

#endif // HOUSE_H_INCLUDED

