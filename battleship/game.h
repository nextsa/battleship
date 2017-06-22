#ifndef GAME_H
#define GAME_H

#include "player.h"
#pragma once
class Game{
    Player *user, *bot;
    int player;  /* 0 -user, 1 - AI */
public:
    Game(Player &, Player &);
    int whoGoes();
    bool playerMove();
};


#endif // GAME_H
