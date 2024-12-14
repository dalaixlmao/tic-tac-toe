#include "boardServices.h"
#include "../models/player.h"
#include "../models/board.h"
using namespace std;

boardServices::boardServices(board *b) : gameBoard(b) {}

bool boardServices::validateMove(int row, int col) { return gameBoard->getPiece(row, col) == '-'; }

void boardServices::makeMove(int row, int col, char piece) { gameBoard->setPiece(row, col, piece); }

void boardServices::displayBoard() { gameBoard->displayBoard();}