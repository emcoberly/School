#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// function prototypes
void getSetup(int &, int &, char &, char &);
void input(string, int &);
void input(string, char &);
char switchChar(char, char, char);
void printBoard(int, int, char, char);
char printMenu();

// main program
int main() {

  // define variables
  int rows, cols;
  char charOne, charTwo, choice = 'a';

  // main program loop
  do {
    if (choice != 'p') {
      getSetup(rows, cols, charOne, charTwo);
    }
    printBoard(rows, cols, charOne, charTwo);
    choice = printMenu();
    if (choice == 'r') {
      remove("gameBoard.cfg");
    }
  } while (choice != 'x');

  return 0;
}

// get the setup from a config file or user input.
// eventually save user input setup to the config file.
void getSetup(int &rows, int &cols, char &charOne, char &charTwo) {
  ifstream configIn;
  configIn.open("gameBoard.cfg");
  if (configIn.is_open()) {
    configIn >> rows;
    configIn >> cols;
    configIn >> charOne;
    configIn >> charTwo;
  } else {
    input("Enter Number of Rows: ", rows);
    input("Enter Number of Columns: ", cols);
    input("Enter First Character: ", charOne);
    input("Enter Second Character: ", charTwo);
  }
}

// other functions not central to the activity

void input(string prompt, int &temp) {
  cout << prompt;
  cin >> temp;
}

void input(string prompt, char &temp) {
  cout << prompt;
  cin >> temp;
}

char switchChar(char current, char charOne, char charTwo) {
  if (current == charTwo) {
    current = charOne;
  } else {
    current = charTwo;
  }
  return current;
}

void printBoard(int rows, int cols, char charOne, char charTwo) {
  char theChar = charTwo;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      theChar = switchChar(theChar, charOne, charTwo);
      cout << theChar;
    }
    if (cols % 2 == 0) {
      theChar = switchChar(theChar, charOne, charTwo);
    }
    cout << endl;
  }
}

char printMenu() {
  char tempChar;
  cout << endl
       << "Program Menu" << endl
       << "========================" << endl
       << "  (r)enter configuration" << endl
       << "  (p)rint board again" << endl
       << "  e(x)it the program" << endl
       << "Enter Choice: ";
  cin >> tempChar;
  return tempChar;
}
