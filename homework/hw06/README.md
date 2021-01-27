# CPTR 141: Homework Assignment #6

## Problem Overview
Computer security is a major issue with data breaches causing major headaches to consumers and companies alike, and costing an estimated average of $3.92 million per occurrence in 2019.   While there is little that individuals can do to prevent large-scale data breaches, using secure unique passwords for each account can limit the damage caused by such a breach.

In this homework assignment you will write a strong password checker  for a password of realistic length.  For the purposes of this assignment, we will consider a password to be strong if it is:

* more than 10 characters in length
* contains at least one digit (0-9)
* contains at least one lower-case letter (a-z)
* contains at least one upper-case letter (A-Z)
* contains at least one non-alphanumeric character (not one of the above)
* does not have any consecutive repeated characters (e.g. ``aa`` or ``11``).
  

Your program should perform the following steps:

1. Prompt the user to enter their proposed password.
2. Check the entered password and:
    - if it meets the above conditions, the user is told that it has been accepted.
    - if it does not meet one or more of the above conditions, the user is told that it has been rejected.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You **must ** use a loop of some sort (`while`, `do-while`, or `for`).
2. Your solution should be able to handle any length of password.
3. Your solution should be efficient, using loops to avoid repeating code whenever possible.
4. Your code **must** produce the same output as the included sample program, ``solution.o``.  Run this program several times trying different passwords to make sure you understand what the output should look like.  To run the program, open a new terminal and type:

`./student141/homework/hw06/solution.o`

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted