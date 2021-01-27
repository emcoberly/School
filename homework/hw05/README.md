# CPTR 141: Homework Assignment #5

## Problem Overview
Your task in this assignment is to implement the famous game Rock-Paper-Scissors-Lizard-Spock.  If you are not familiar with the rules of this game, consider the graphic shown below:

![RPSLS Game](https://cdn.instructables.com/FIU/AIWE/I7Q0TCUT/FIUAIWEI7Q0TCUT.MEDIUM.jpg)

A summary of these rules is:
* Rock crushes lizard and crushes scissors
* Paper covers rock and disproves Spock
* Scissors cuts paper and decapitates lizard
* Lizard eats paper and poisons Spock
* Spock smashes scissors and vaporizes rock

Your program should perform the following steps:

1. Prompt the user for a random seed and use that to seed the random number generator

2. Display the list of options as shown below and prompt the user for their choice.

3. Tell the user what the computer chose and what the result is (i.e. a tie, the user won, or the user lost).

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must used the pseudo-random number generator in C++ (both the  ``srand(seed)`` and ``rand()`` commands).

2. You must check the user input to make sure that it is valid and send a message to standard error if it is not.

3. You must make use of branching statements (``if``, ``if-else``, and/or ``switch``) and Boolean expressions to determine the outcome of the game.

4. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.

```html
Enter a random seed: 6233

The computer has chosen and so must you.
  0) Rock
  1) Paper
  2) Scissors
  3) Lizard
  4) Spock
Make your choice: 3
The computer chose Scissors -- you lose!
```

or 

```html
Enter a random seed: 2

The computer has chosen and so must you.
  0) Rock
  1) Paper
  2) Scissors
  3) Lizard
  4) Spock
Make your choice: 0
The computer chose Rock -- it's a tie!  
```

or

```html
Enter a random seed: 3

The computer has chosen and so must you.
  0) Rock
  1) Paper
  2) Scissors
  3) Lizard
  4) Spock
Make your choice: 2
The computer chose Paper -- you win!	  
```

or

```html
Enter a random seed: 2340

The computer has chosen and so must you.
  0) Rock
  1) Paper
  2) Scissors
  3) Lizard
  4) Spock
Make your choice: 8
Invalid choice.  Please enter a number between 0 and 4.
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted