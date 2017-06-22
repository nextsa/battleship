#include "player.h"

void Player::drawPlayerShip(char &x, int &y, int &sz)
{
    ShipsPosition ship;
    ship.x_coord = x;
    ship.y_coord = y;
    ship.size = sz;

    int s = 0;
    while (s < maxShips)
    {
        GameScene gS;

        if (gS.board[ship.x_coord][ship.y_coord] != gS.shipCell)
        {
            s++;
            for (int i = 0; i < ship.size; i++)
            {
                gS.board[x + i][y] = gS.shipCell;
            }
        }
    }
}
void Player::drawAIShip()
{
   GameScene gS;
   ShipsPosition ship;

   int s = 0;
   while (s < maxShips)
   {
       ship.x_coord = rand() % gS.size;
       ship.y_coord = rand() % gS.size;
       ship.size = rand() % 4;
       if (gS.board[ship.x_coord][ship.y_coord] != gS.shipCell)
       {
           for (int i = 0; i < ship.size; i++)
           {
               gS.board[x + i][y] = gS.shipCell;
           }
           s++;
       }
    }
}

