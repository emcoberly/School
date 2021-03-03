/*************************************************************************
 *
 * HW15: Using 2D arrays to implement a tic-tac-toe game
 *
 * File Name:  tttGame.cpp
 * Course:     CPTR 141
 *
 */

#include "tttFunctions.h"
#include <iostream>
using namespace std;

// functions defined in this file
void initializeBoard(char[][NUM_COLS], int = NUM_ROWS);
void printBoard(char[][NUM_COLS], int = NUM_ROWS);
void getMove(char, int &, int &);
void makeMove(char, int &, int &, char[][NUM_COLS], int = NUM_ROWS);

int main() {

  char board[NUM_ROWS][NUM_COLS];
  char player, winner, playAgain;
  short int numPlayers;

  cout << "Welcome to Tic-Tac-Toe (CPTR 141 Edition)" << endl << endl;

  do {

    // get the number of players (1 or 2)
    do {
      cout << "How many players (1/2)?";
      cin >> numPlayers;
      if (!((numPlayers == 1) || (numPlayers == 2))) {
        cout << "ERROR: Enter 1 or 2" << endl;
      }
    } while (!((numPlayers == 1) || (numPlayers == 2)));

    // set up and print initial board
    initializeBoard(board);
    cout << endl;
    printBoard(board);
    cout << endl;

    // begin main game loop
    player = 'X';
    do {

      // step 1: get a valid move from player or computer
      int row, col;
      if (player == 'X' || numPlayers == 2) {
        do {
          getMove(player, row, col);
          if (board[row][col] != ' ') {
            cout << "That space is taken" << endl;
          }
        } while (board[row][col] != ' ');
      } else {
        makeMove(player, row, col, board);
      }

      // step 2: place move on board and switch player
      board[row][col] = player;
      player = (player == 'X') ? 'O' : 'X';

      // step 3: print the board
      cout << endl;
      printBoard(board);
      cout << endl;

      // step 4: check for winner or draw
      winner = getWinner(board, NUM_ROWS);

    } while (winner == ' ');

    // announce winner
    if (winner != '-') {
      cout << "Congratulations player " << winner << "!";
    } else {
      cout << "The game is a draw";
    }
    cout << endl << endl;

    // prompt to play again
    cout << "Play again (y/n)? ";
    cin >> playAgain;
    playAgain = toupper(playAgain);

  } while (playAgain == 'Y');

  cout << endl << "Thanks for playing!" << endl;

  return 0;
}

// initialize the game board by setting all values to ' '
void initializeBoard(char board[][NUM_COLS], int rows) {
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < NUM_COLS; col++) {
      board[row][col] = ' ';
    }
  }
  return;
}

// print out the game board
void printBoard(char board[][NUM_COLS], int rows) {
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < NUM_COLS; col++) {
      cout << ' ' << board[row][col];
      if (col < NUM_COLS - 1) {
        cout << " |";
      }
    }
    cout << endl;
    if (row < rows - 1) {
      cout << "---+---+---" << endl;
    }
  }
  return;
}

// get a move from the user
void getMove(char player, int &row, int &col) {

  // get a valid row and column
  do {
    cout << "Player " << player
         << " -- Enter row and column separated by space: ";
    cin >> row;
    cin >> col;
    if (row <= 0 || col <= 0 || row > NUM_ROWS || col > NUM_COLS) {
      cout << "ERROR: Enter numbers between 1 and " << NUM_ROWS << endl;
    }
  } while (row <= 0 || col <= 0 || row > NUM_ROWS || col > NUM_COLS);

  // subtract one for zero-based indexing
  row--;
  col--;

  return;
}

// generate a computer move using min/max algorithm (this one is for data
// structures!)
int minSearch(char board[][NUM_COLS], int rows = NUM_ROWS);

int score(char board[][NUM_COLS], int rows = NUM_ROWS) {
  if (getWinner(board, rows) == 'X') {
    return 10;
  }
  if (getWinner(board, rows) == 'O') {
    return -10;
  } else
    return 0;
}

int maxSearch(char board[][NUM_COLS], int rows = NUM_ROWS) {
  if (getWinner(board, rows) != ' ') {
    return score(board, rows);
  } else {
    int row, col;
    int minScore = -1000;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < NUM_COLS; j++) {
        if (board[i][j] == ' ') {
          board[i][j] = 'X';
          int tempScore = minSearch(board);
          if (tempScore >= minScore) {
            minScore = tempScore;
            row = i;
            col = j;
          }
          board[i][j] = ' ';
        }
      }
    }
    return minScore;
  }
}

int minSearch(char board[][NUM_COLS], int rows) {
  if (getWinner(board, rows) != ' ') {
    return score(board, rows);
  } else {
    int row, col;
    int maxScore = 1000;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < NUM_COLS; j++) {
        if (board[i][j] == ' ') {
          board[i][j] = 'O';
          int tempScore = maxSearch(board);
          if (tempScore <= maxScore) {
            maxScore = tempScore;
            row = i;
            col = j;
          }
          board[i][j] = ' ';
        }
      }
    }
    return maxScore;
  }
}

void makeMove(char player, int &row, int &col, char board[][NUM_COLS],
              int rows) {
  int maxScore = 100;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < NUM_COLS; j++) {
      // get score if we go here
      if (board[i][j] == ' ') {
        board[i][j] = player;
        int tempMax = maxSearch(board);
        if (tempMax <= maxScore) {
          maxScore = tempMax;
          row = i;
          col = j;
        }
        board[i][j] = ' ';
      }
    }
  }
}