/*************************************************************************
 *
 * HW15: Using 2D arrays to implement a tic-tac-toe game
 *
 * File Name:  tttFunctions.h
 * Course:     CPTR 141
 *
 */

// constant size of the board
const int NUM_ROWS = 3;
const int NUM_COLS = 3;

/*=====================================================================================
 * FUNCTION: getWinner(grid,size)
 *  Determine if a a 2D array of characters represents a winning board in
 * tic-tac-toe.
 *    - Precondition: grid is a 2-D array of chars containing 'X', or 'O', or '
 * '.
 *    - Postcondition: returns the winning character ('X' or 'O') or ' ' if no
 * winner but empty slots remain, or '-' if no winner and the board is full.
 */
char getWinner(char[][NUM_ROWS], int = NUM_COLS);
