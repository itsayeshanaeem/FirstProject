/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include "GenericPlayer.h"

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");

    virtual ~Player();

    //returns whether or not the player wants another hit
    virtual bool IsHitting() const;

    //announces that the player wins
    void Win() const;

    //announces that the player loses
    void Lose() const;

    //announces that the player pushes
    void Push() const;
};

#endif // PLAYER_H_INCLUDED

