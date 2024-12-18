# Tic Tac Toe Game

This is a simple implementation of the classic Tic Tac Toe game in C++. It uses Object-Oriented Programming (OOP) principles to manage the game logic, players, and board state. This project is modularized into components for better maintainability and extensibility.

## Features
- Supports two players.
- Players can input their names and pieces (X or O).
- Validates player moves to prevent overwriting existing moves.
- Displays the board after each move.
- Determines the winner or declares a draw.
- Modular codebase with separate responsibilities for players, board, and game logic.

---

## Folder Structure
```
src/
|— main.cpp                 # Entry point of the application
|— models/
    |— board.h            # Header file for the Board class
    |— board.cpp          # Implementation file for the Board class
    |— player.h           # Header file for the Player class
    |— player.cpp         # Implementation file for the Player class
|— services/
    |— boardServices.h    # Header file for BoardServices class
    |— boardServices.cpp  # Implementation file for BoardServices class
    |— playerServices.h   # Header file for PlayerServices class
    |— playerServices.cpp # Implementation file for PlayerServices class
    |— gameServices.h     # Header file for GameServices class
    |— gameServices.cpp   # Implementation file for GameServices class
```

---

## Prerequisites
Make sure you have the following installed:
- C++ compiler (e.g., GCC)
- Make (optional, for building)

---

## How to Run

1. Clone the repository:
```bash
https://github.com/dalaixlmao/tic-tac-toe.git
cd tic-tac-toe
```

2. Compile the program:
```bash
g++ src/main.cpp src/models/*.cpp src/services/*.cpp -o tic_tac_toe
```

3. Run the program:
```bash
./tic_tac_toe
```

---

## How to Play
1. Input the piece and name for Player 1 (e.g., `x Alice`).
2. Input the piece and name for Player 2 (e.g., `o Bob`).
3. Players take turns entering their moves by specifying the row and column numbers (1-based indexing).
4. The program validates the moves and updates the board.
5. The game ends when one player wins or all cells are filled, resulting in a draw.

---

## Classes and Responsibilities

### Models
#### `player`
- Manages player data, including:
  - Name
  - Game piece (X or O)
- Methods:
  - `getName()`: Returns the player's name.
  - `getPiece()`: Returns the player's piece.
  - `setPiece(char)`: Sets the player's piece.

#### `board`
- Represents the game board and handles the grid state.
- Methods:
  - `getPiece(int, int)`: Returns the piece at a given row and column.
  - `setPiece(int, int, char)`: Sets a piece at a given row and column.
  - `displayBoard()`: Displays the current board state.
  - `getPlayer1Name()`, `getPlayer2Name()`: Get player names.

### Services
#### `boardServices`
- Provides utilities for managing the board, including move validation.
- Methods:
  - `validateMove(int, int)`: Checks if a move is valid.
  - `makeMove(int, int, char)`: Updates the board with a move.

#### `playerServices`
- Offers helper methods related to player interactions.
- Methods:
  - `getPlayerByName(string)`: Retrieves a player by their name.
  - `getPlayerByPiece(char)`: Retrieves a player by their game piece.
  - `isWinning(char)`: Determines if a player has won.

#### `gameServices`
- Manages the overall game logic and state.
- Methods:
  - `validateMove(int, int)`: Validates a move.
  - `makeMove(int, int, char)`: Executes a move.
  - `checkWin()`: Checks the game's winning condition.
  - `displayBoard()`: Displays the board.
  - `displayGameStatus()`: Displays the winner or a draw message.

---

## Example Game Session
```plaintext
Enter piece and name of players
Player 1:
x Alice
Player 2:
o Bob

Enter row and col
1 1
X - -
- - -
- - -

Enter row and col
1 2
X O -
- - -
- - -

Enter row and col
2 2
X O -
- X -
- - -

Enter row and col
3 2
X O -
- X -
- O -

Enter row and col
3 3
X O -
- X -
- O X

Alice won!
```

---

## Future Enhancements
- Add support for custom board sizes.
- Implement an AI opponent.
- Allow players to save and resume games.

---