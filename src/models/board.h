#ifndef BOARD_H
#define BOARD_H

#include "player.h"
#include <vector>

class board
{
private:
    player *x;
    player *o;
    vector<vector<char>> grid;
    /* data */
public:
    board(string name1, string name2);
    char getPiece(int row, int col);
    string getPlayer1Name();
    string getPlayer2Name();
    void displayBoard();
    player* getPlayer1();
    player* getPlayer2();
    void setPiece(int row, int col, char c);
    ~board();
};

#endif