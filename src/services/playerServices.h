#ifndef PLAYERSERVICES_H
#define PLAYERSERVICES_H
#include "../models/player.h"
#include "../models/board.h"

class playerServices
{
private:
    board* gameBoard;
public:
    playerServices(board* b);
    player* getPlayerByName(string name);
    char getPlayerPiece(string name);
    player* getPlayerByPiece(char c);
    bool isWinning(char c);
    ~playerServices();
};




#endif