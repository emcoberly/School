/*************************************************************************
 *
 * HW15: Using 2D arrays to implement a tic-tac-toe game
 *
 * File Name:  tttFunctions.cpp
 * Course:     CPTR 141
 *
 */

#include "tttFunctions.h"
#include <iostream>
using namespace std;

char getWinner(char grid[][NUM_ROWS], int theSize) {
  int turns = 0;
  for (int i = 0; i < theSize; i++) {
    for (int j = 0; j < theSize; j++) {
      if (grid[i][j] != ' ') {
        turns++;
      }
    }
  }
  if (turns > 4) {
    if (grid[1][1] == grid[0][0] && grid[1][1] == grid[2][2] ||
        grid[1][1] == grid[0][2] && grid[1][1] == grid[2][0] ||
        grid[1][1] == grid[1][0] && grid[1][1] == grid[1][2] ||
        grid[1][1] == grid[0][1] && grid[1][1] == grid[2][1]) {
      // Win passes through middle
      return grid[1][1];
    } else if (grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2] ||
               grid[0][0] == grid[1][0] && grid[0][0] == grid[2][0]) {
      // Win passes through top left
      return grid[0][0];
    } else if (grid[2][2] == grid[2][1] && grid[2][2] == grid[2][0] ||
               grid[2][2] == grid[1][2] && grid[2][2] == grid[0][2]) {
      // Win passes through top right
      return grid[2][2];
    } else {
      return '-';
    }
  } else {
    return ' ';
  }
}