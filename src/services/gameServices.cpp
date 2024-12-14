#include "gameServices.h"
#include "boardServices.h"
#include "playerServices.h"
#include "../models/board.h"
#include "../models/player.h"
#include <iostream>

int gameServices::getMoveNumber()
{
    return moveNumber;
}

void gameServices::increaseMoveNumber()
{
    moveNumber++;
}

bool gameServices::validateMove(int row, int col) { return boardService->validateMove(row, col); }

void gameServices::makeMove(int row, int col, char piece) { boardService->makeMove(row, col, piece); }

void gameServices::displayBoard() { boardService->displayBoard(); }

gameServices::gameServices(string name1, string name2)
{
    gameBoard = new board(name1, name2);
    boardService = new boardServices(gameBoard);
    playerService = new playerServices(gameBoard);
    moveNumber = 0;
}

string gameServices::checkWin()
{
    if (playerService->isWinning('x'))
        return gameBoard->getPlayer1Name();
    else if (playerService->isWinning('o'))
        return gameBoard->getPlayer2Name();
    return "none";
}

void gameServices::displayGameStatus()
{
    if (playerService->isWinning('x'))
        cout << gameBoard->getPlayer1Name() << " won!" << endl;
    else if (playerService->isWinning('o'))
        cout << gameBoard->getPlayer2Name() << " won!" << endl;
    else
        cout << "Game ended in a DRAW!" << endl;
}
