# CPTR 141: Homework Assignment #8

## Problem Overview

In this assignment you will write a program to collect two sets of lowercase alphabet characters from the user, and then display the intersection of the two sets.  Recall that the intersection of a pair of sets is the set of objects that are in both the first set **and** the second set.  For example:

* The intersection of sets { a, b, c } and { e, d, c, b } is the set { b, c }
* The intersection of sets { a, b } and { x, y, z } is the empty set, { }


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must make use of two vectors of characters to collect user input -- one for the first set and one for the second.
2. Your program must collect both sets from the user as follows:
   * Prompt the user for the elements of the set one at a time on a separate line.
   * If the user enters anything other than a lowercase alphabet character, display an error message (except for the following case).
   * Allow the user to enter `!` to indicate that there are no more values for a set.
3. After both sets have been entered, the program displays the intersection of the two sets in the same order as the elements appear in the first set. 
4. Then, the user is prompted to ask if they wish to enter another pair of sets.  If they say yes, they are sent back to the beginning and asked to enter two new sets.
5. Finally, your output **must** match the output of the included program, ``solution.o``.  Run this program several times using different options to make sure you understand what that output should look like. To run the program, you can enter a full path to the executable in a terminal:

`./student141/homework/hw08/solution.o`

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

