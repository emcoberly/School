/*************************************************************************
 *
 * In-Class Exercises:  Test two nested loops
 *
 * File Name: loopNested.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // example #1: independent loops
  int row, col;

  for (row = 1; row <= 5; row++) {
    for (col = 1; col <= 5; col++) {
      cout << " \t" << row * col;
    }
    cout << endl;
  }

  // example #2: correlated loops
  int i, j;

  for (i = 0; i < 6; i++) {
    for (j = 0; j <= i; j++) {
      cout << " * ";
    }
    cout << endl;
  }
   
  return 0;
   
}