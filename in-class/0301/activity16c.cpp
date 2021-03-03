#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLS = 3;

// initialize the game board to spaces
void initBoard(char board[][NUM_COLS], int rows);

// print the game board
void printBoard(char board[][NUM_COLS], int rows);

// prompt player `turn' for row/col of play
void getMove(char turn, int &row, int &col);

// check if single array is all the same char
bool isWinningRow(char row[], int size, char &winner);

// check if a board has a winning row/col/diagonal
bool isWinningBoard(char board[][NUM_COLS], 
                    int rows, char &winner);
             
int main() {
  char board[NUM_ROWS][NUM_COLS];
  char winner,playAgain;
  int row, col;
  do { 
    char turn = 'O';
    initBoard(board,NUM_ROWS);
    do {
      if(turn == 'X') turn = 'O'; else turn = 'X';
      printBoard(board,NUM_ROWS);
      do {
        getMove(turn,row,col);
      } while( board[row][col] != ' ');
      board[row][col] = turn;
    } while(!isWinningBoard(board,NUM_ROWS,winner));
    printBoard(board,NUM_ROWS);
    if (winner != 'D') {
      cout << "Congrats player " << winner << endl;
    } else {
      cout << "It's a draw!" << endl;
    }
    cout << "Play again (y/n)? ";
    cin >> playAgain;
  } while (playAgain == 'y');
}

void initBoard(char board[][NUM_COLS],int rows) {
  // set all entries in board to spaces
  for (int i=0; i < rows; i++) {
    for (int j=0; j < NUM_COLS; j++) {
      board[i][j] = ' ';
    }
  }
  return;
}

void printBoard(char board[][NUM_COLS],int rows) {
  // print board entries with separaters for rows/cols
  for (int i=0; i < rows; i++) {
    for (int j=0; j < NUM_COLS; j++) {
      cout << setw(2) << board[i][j];
      if (j < NUM_COLS-1) cout << " |";
    }
    if (i < NUM_ROWS-1) {
       cout << endl;
      for (int k=0; k<NUM_COLS-1; k++) {
        cout << "---+";
      }
      cout << "---" << endl;
    }
  }
  cout << endl;
  return;
}
   
void getMove(char turn, int &row, int &col) {
  // prompt with player and get row and column coords
  do {
    cout << "Player " << turn << "'s Turn" << endl;
    cout << "Enter row (1-" << NUM_ROWS << ") "
         << "and column (1-" << NUM_COLS << "): ";
    cin >> row >> col;
    // adjust for 0-indexed array
    row--;
    col--;
  } while( row < 0 || row >= NUM_ROWS || col < 0 || col >= NUM_COLS );
  return;
}

bool isWinningRow(char row[], int size, char &winner) {
  // if the first entry is not blank and all are equal, winner!
  bool foundWinner = true;
  winner = row[0];
  if(winner == ' ') foundWinner = false;
  for(int i=0; i<size; i++) {
    if (row[i] != winner) {
      foundWinner = false;
    }
  }
  return foundWinner;  
}

bool isWinningBoard(char board[][NUM_COLS], int rows, char &winner) {
  // check for winning rows
  for (int i=0; i < rows; i++) {
    if (isWinningRow(board[i],rows,winner)) {
      return true;
    }
  }
  // check for winning columns
  char tmpRow[NUM_ROWS];
  for (int i=0; i < NUM_COLS; i++) {
    for (int j=0; j < rows; j++ ) {
      tmpRow[j] = board[i][j];
    }   
    if (isWinningRow(tmpRow,rows,winner)) {
      return true;
    }
  }
  // check main diagonal
  for (int i=0; i<rows; i++) {
    tmpRow[i] = board[i][i];
  }
  if (isWinningRow(tmpRow,rows,winner)) {
    return true;  
  }
  // check other diagonal
  for (int i=0; i<rows; i++) {
    tmpRow[i] = board[i][NUM_COLS-i-1];
  }
  if (isWinningRow(tmpRow,rows,winner)) {
    return true;
  }
  // check for draw
  bool full = true;
  winner = 'D';
  for (int i=0; i < rows; i++) {
    for (int j=0; j < NUM_COLS; j++) {
      if (board[i][j] == ' ') {
        full = false;
      }
    }
  }
  return full;
}