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
    char winnerChar = ' ';
    for (int i = 0; i < theSize; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            if (grid[i][0] == 'X') {
                winnerChar = 'X';
            } else if (grid[i][0] == 'O') {
                winnerChar = 'O';
            }
        } else if (grid[0][i] == grid [1][i] && grid[1][i] == grid[2][i]) {
            if (grid[0][i] == 'X') {
                winnerChar =  'X';
            } else if (grid[i][0] == 'O') {
                winnerChar =  'O';
            }
        } else if (grid[0][0] == grid [1][1] && grid[1][1] == grid[2][2]) {
            if (grid[0][0] == 'X') {
                winnerChar =  'X';
            } else if (grid[0][0] == 'O') {
                winnerChar =  'O';
            }
        } else if (grid[0][2] == grid [1][1] && grid[1][1] == grid[2][0]) {
            if (grid[0][2] == 'X') {
                winnerChar =  'X';
            } else if (grid[0][2] == 'O') {
                winnerChar =  'O';
            }
        } else {
            winnerChar =  '-';
        }
    }
    return winnerChar;
}