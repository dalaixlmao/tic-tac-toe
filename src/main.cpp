#include "./services/gameServices.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c1, c2;
    string n1, n2;
    cout << "Enter piece and name of players" << endl;
    cout << "Player 1:" << endl;
    cin >> c1 >> n1;
    cout << "Player 2:" << endl;
    cin >> c2 >> n2;
    string name1, name2;
    if (c1 == 'x')
    {
        name1 = n1, name2 = n2;
    }
    else
    {
        name2 = n1, name1 = n2;
    }

    gameServices *game = new gameServices(name1, name2);

    while (game->getMoveNumber() < 9)
    {
        cout << "Enter row and col" << endl;
        int row, col;
        cin >> row >> col;
        int currPiece = game->getMoveNumber() % 2 == 0 ? 'x' : 'o';
        bool chk = game->validateMove(row, col);
        if (!chk)
            cout << "Invalid Move" << endl;
        else
        {
            game->makeMove(row, col, currPiece);
        }

        game->displayBoard();
        if (game->checkWin() != "none" || game->getMoveNumber() == 9)
        {
            game->displayGameStatus();
            return 0;
        }
        if (chk)
        {
            game->increaseMoveNumber();
        }
    }

    return 0;
}