#ifndef PLAYER_H
#define PLAYER_H
#pragma once
#include "gamescene.h"
#include "ship.h"

class Player
{
public:
    Player();
    void drawPlayerShip();

    void drawAIShip();
/*    void setCoord(int &shipSize, int &x, int &y);
    void placeShips();
    void makeShot();
private:
    int m_shipSize = 0;
    int m_x = 0;
    int m_y = 0;*/
};

#endif // PLAYER_H
