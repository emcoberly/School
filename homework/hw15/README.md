# CPTR 141: Homework Assignment #15

## Problem Overview

[Tic-tac-toe](https://en.wikipedia.org/wiki/Tic-tac-toe) is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3×3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game. Consider the following square:

<table style="margin: auto; width: 200px;">
  <tr>
    <td style="text-align:center;background:white;">O</td>
    <td style="text-align:center;background:white;"> </td>
    <td style="text-align:center;background:white;">X</td>
  </tr><tr>
    <td style="text-align:center;background:white;"> </td>
    <td style="text-align:center;background:white;">O</td>
    <td style="text-align:center;background:white;">O</td>
  </tr><tr>
    <td style="text-align:center;background:white;">X</td>
    <td style="text-align:center;background:white;">X</td>
    <td style="text-align:center;background:white;">X</td>
  </tr>
</table>
In this example, player *X* wins because there are three X's in the bottom row. The prototype for your function (included in `tttFunctions.h`) is:

```c++
/*=====================================================================================
 * FUNCTION: getWinner(grid,size)
 *  Determine if a a 2D array of characters represents a winning board in tic-tac-toe.
 *    - Precondition: grid is a 2-D array of chars containing 'X', or 'O', or ' '.
 *    - Postcondition: returns the winning character ('X' or 'O') or ' ' if no winner
 *        but empty slots remain, or '-' if no winner and the board is full.
 */
char getWinner(char grid[][SIZE], int theSize = SIZE);
```

You should implement this function in the file `tttFunctions.cpp`. Your solution to this problem must meet the following criteria.

## Solution Specification

1. Your ``getWinner()`` function must correctly identify the winner, if any, of a 3 x 3 array of characters, checking that:

    * Any row, column, or diagonal contains three of `X` or `O` characters.
    * If there is a winner, return the character which wins (`X` or `O`).
    * If the game is a draw (full board with no winner), return the hyphen character (`-`).
    * If there is no winner and there are still empty spaces on the board, return a space character (` `).
2. A full implementation of the game which uses your `getWinner()` function can be found in the file `tttGame.cpp`.  You can use this to test your function (while also enjoying the game).

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

