#include "../models/player.h"
#include "../models/board.h"
#include "playerServices.h"
#include <iostream>

playerServices::playerServices(board *b) : gameBoard(b) {}

player *playerServices::getPlayerByName(string name)
{
    if (gameBoard->getPlayer1Name() == name)
        return gameBoard->getPlayer1();
    else if (gameBoard->getPlayer2Name() == name)
        return gameBoard->getPlayer2();
    return nullptr;
}

char playerServices::getPlayerPiece(string name)
{
    if (gameBoard->getPlayer1Name() == name)
        return 'x';
    else if (gameBoard->getPlayer2Name() == name)
        return 'o';
    return '-';
}

player *playerServices::getPlayerByPiece(char c)
{
    if (c == 'x')
        return gameBoard->getPlayer1();
    else
        gameBoard->getPlayer2();
}

bool playerServices::isWinning(char c)
{
    vector<int> x = {0, 1, 2, 0, 1, 2};
    vector<int> y = {0, 1, 2, 2, 1, 0};
    for (int i = 0; i < 3; i++)
    {
        int cnt = 0, cnt2 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (c == gameBoard->getPiece(i + 1, j + 1))
                cnt++;
            if (c == gameBoard->getPiece(j + 1, i + 1))
                cnt2++;
        }
        if (cnt == 3 || cnt2 == 3)
            return true;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (c == gameBoard->getPiece(x[i] + 1, y[i] + 1))
            cnt1++;
        if (c == gameBoard->getPiece(x[i+3] + 1, y[i+3] + 1))
            cnt2++;
    }
    return (cnt1 == 3 || cnt2 == 3);
}
