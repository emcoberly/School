# CPTR 141: Homework Assignment #10

## Problem Overview

For this assignment you will write three functions to finish a very simple "dungeon crawler" style game.  In the game, a player and a dragon appear at random points on a 3x3 game-board consisting of 9 "rooms" numbered 1-9 starting in the top-left corner as shown:

```
1 2 3
4 5 6
7 8 9
```

The player and dragon can both move north, south, east, or west.  If the player and dragon move into the same square, then the game is over.  The player's score is the number of times he or she was able to move while avoiding the dragon.

To functions required to finish the game are:

* A function to get a valid direction from the user (input can be "n" for north, "s" for south, "e" for east,  "w" for west, or "r" for random).
* A function to move from a given room in a given direction (if the player or dragon runs into a wall, they will stay in the same room.
* A function to print out the game-board, showing each room and the locations of the player and dragon as shown below.  On this map the dragon is in room 3 and the player is in room 7.

```
..D
...
P..
```

## Solution Specification

Your solution to this problem must meet the following criteria.

1. You must write function definitions for the prototypes of the following functions that already exists in the file ``dungeonCrawl.cpp``.  You **may not** change the code in the ``main()`` function or in the existing ``randomDirection()`` function. 

    * `char getValidDirection();`
    * `int move(int, char);`
    * `void printMap(int, int);`
2. Your code **must** produce the same output as the included sample program, ``solution.o``.  Run this program several times trying different random seeds and entries to make sure you understand what the output should look like. 

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

