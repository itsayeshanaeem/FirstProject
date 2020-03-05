/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include "Hand.h"

#ifndef GENERICPLAYER_H_INCLUDED
#define GENERICPLAYER_H_INCLUDED

class GenericPlayer : public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);

public:
    GenericPlayer(const std::string& name = "");

    virtual ~GenericPlayer();

    //indicates whether or not generic player wants to keep hitting
    virtual bool IsHitting() const = 0;

    //returns whether generic player has busted - has a total greater than 21
    bool IsBusted() const;

    //announces that the generic player busts
    void Bust() const;

protected:
    std::string m_Name;
};

#endif // GENERICPLAYER_H_INCLUDED

