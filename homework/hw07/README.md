# CPTR 141: Homework Assignment #7

## Problem Overview

Your goal in this assignment is to write a program that generates multiplication tables. Your program will prompt the user for the maximum value for each of two operands.

For example:

* if the user enters ``5 3`` then the output would be:

```
   *     1   2   3   4   5
  ____ ___ ___ ___ ___ ___
   1 |   1   2   3   4   5
   2 |   2   4   6   8  10
   3 |   3   6   9  12  15
```

## Solution Specification

Your solution to this problem must meet the following criteria.

1. Use nested `for` loops to generate the table requested by the user.
2. Use appropriate error checking to ensure that the numbers entered are between 1 and 10.
3. Numbers are right-justified using [`setw()`](http://www.cplusplus.com/reference/iomanip/setw/?kw=setw).
5. Your code **must** produce the same output as the included program, ``solution.o``.  To run the program, right click on the file and pick *Run Code*.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

