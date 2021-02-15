/****************************************************************************
 *
 * hw09: Print the skip counting and whenter one number is a factor of another
 *
 * File Name:  printCounting.cpp
 * Name:       Eddie Coberly
 * Course:     CPTR 141
 *
 */

#include <iostream>
using namespace std;

// function definitions

void printSkipCount(int num1, int num2) {
  for (int i = 1; i <= num2 / num1; i++) {
    cout << num1 * i << endl;
  }
}

void printFactor(int num1, int num2) {
  if (num2 % num1 == 0) {
    cout << "Yes, " << num1 << " is a factor of " << num2 << endl;
  } else {
    cout << "No, " << num1 << " is not a factor of " << num2 << endl;
  }
}

// main program

int main() {

  int firstNumber, secondNumber;
  char countType, doAgain;

  // we will do this until the user is done
  do {

    // collect the numbers from the user
    do {
      cout << "Enter a positive integer: ";
      cin >> firstNumber;
      if (firstNumber < 1) {
        cout << "Error! Invalid number." << endl;
      }
    } while (firstNumber < 1);

    do {
      cout << "Enter another positive integer: ";
      cin >> secondNumber;
      if (secondNumber < 1) {
        cout << "Error! Invalid number." << endl;
      }
    } while (secondNumber < 1);

    // ask for the type of sum
    do {

      cout << "What should I do with these two numbers?" << endl;
      cout << "  - (s)kip counting" << endl;
      cout << "  - (f)actor detection" << endl;
      cout << "Enter choice: ";
      cin >> countType;
      cout << endl;

      if (countType != 's' && countType != 'f') {
        cout << "Error! Invalid selection." << endl;
      }

    } while (countType != 's' && countType != 'f');

    // Make the function call
    switch (countType) {
    case 's':
      printSkipCount(firstNumber, secondNumber);
      break;
    case 'f':
      printFactor(firstNumber, secondNumber);
      break;
    }

    // should we do this again?
    cout << "Try Again? (y/n): ";
    cin >> doAgain;

  } while (doAgain == 'y');

  return 0;
}