#ifndef BOARDSERVICES_H
#define BOARDSERVICES_H

#include "../models/player.h"
#include "../models/board.h"

class boardServices
{
private:
    board *gameBoard;
    /* data */
public:
    boardServices(board *b);
    bool validateMove(int row, int col);
    void makeMove(int row, int col, char piece);
    void displayBoard();
    ~boardServices();
};

#endif