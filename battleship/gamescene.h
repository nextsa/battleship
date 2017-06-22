#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <iomanip>
#include <iostream>
using namespace std;
/*
struct Board
{
    int board[10][10] = { };
    string p1Board[11][11] = { { " ", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" },
                               { "A", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "B", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "C", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "D", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "E", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "F", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "G", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "H", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "I", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " },
                               { "J", " ", " ", " ", " ", " ", " ", " ", " ", " ", " " } };

};*/

class GameScene
{
public:
    GameScene();
    void initializeBoard();
    void printBoard();
    int size = 10;
    int board[10][10] = { };

    const int emptyCell = 0;
    const int shipCell = 1;
    const int missedShot = 2;
    const int rightShot = 3;

};

#endif // GAMESCENE_H
