#include <string>
#include "player.h"
using namespace std;

player::player(string name, char piece) : name(name), piece(piece) {}
string player::getName() { return name; }
char player::getPiece() { return piece; }
void player::setPiece(char c) { piece = c; }