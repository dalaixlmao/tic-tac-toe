#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class player
{
private:
    string name;
    char piece;

public:
    player(string name, char piece);
    string getName();
    char getPiece();
    void setPiece(char c);
    ~player();
};

#endif