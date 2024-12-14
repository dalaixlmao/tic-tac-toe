#include "board.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

board::board(string name1, string name2)
{
    x = new player(name1, 'x');
    o = new player(name2, 'o');
    vector<char> c = {'-', '-', '-'};
    grid = {c, c, c};
}

char board::getPiece(int row, int col) { return grid[row - 1][col - 1]; }

string board::getPlayer1Name() { return x->getName(); }

string board::getPlayer2Name() { return o->getName(); }

void board::setPiece(int row, int col, char c) { grid[row - 1][col - 1] = c; }

void board::displayBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}

player *board::getPlayer1() { return x; }

player *board::getPlayer2() { return o; }
