/*
CH08-320143
a5 p6.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
#include <vector>
#include "House.h"
#include "Deck.h"
#include "Player.h"

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game
{
public:
    Game(const std::vector<std::string>& names);

    ~Game();

    //plays the game of blackjack
    void Play();

private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;
};

#endif // GAME_H_INCLUDED

