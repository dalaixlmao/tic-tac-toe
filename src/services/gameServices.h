#ifndef GAMESERVICES_H
#define GAMESERVICES_H

#include "../models/player.h"
#include "../models/board.h"
#include "playerServices.h"
#include "boardServices.h"
class gameServices
{
private:
    /* data */
    board *gameBoard;
    boardServices *boardService;
    playerServices *playerService;
    int moveNumber;

public:
    gameServices(string name1, string name2);
    bool validateMove(int row, int col);
    void makeMove(int row, int col, char peice);
    string checkWin();
    void displayBoard();
    void displayGameStatus();
    int getMoveNumber();
    void increaseMoveNumber();
    ~gameServices();
};

#endif