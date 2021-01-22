# CPTR 141: Homework Assignment #4

## Problem Overview
Your task in this assignment is to create a grade calculator for a class with the following grading system:

  *  The term average is made up of:
        * 45% test average
        * 35% homework average
        * 20% participation average
  * Term averages are converted to letter grades as follows: ranges are:
    * An A is earned for a term average of 90% or higher
    * A B is earned for a term average between 80% and 89.9%
    * A C is earned for a term average between 70% and 79.9%
    * A D is earned for a term average between 60% and 69.9%
    * An F is earned for aterm average of less than 60%.
  * If a student has a term average and a test average in the A range at the end of the course, he or she does not need to take the final exam.

 Your program should perform the following steps:

 1. Prompt the user for their test, homework, and participation average as a percent (i.e. the user would enter 91.3 for 91.3%).
 2. Report an error if any of these is negative or more than 100% and terminate the program.
 3. Assuming all entries are valid, print out the final letter grade and tell the user if they need to take the final exam.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must make use of the ``if`` and/or ``if-else`` branching statements.
2. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.

```
Enter your test, homework, and participation averages separated by spaces: 82.5 93.7 99.0
You have a B in the class and you must take the final.
```

or

```
Enter your test, homework, and participation averages separated by spaces: 95.3 89.2 100
You have an A in the class and do not need to take the final.
```

or 

```
Enter your test, homework, and participation averages separated by spaces: 89.5 98.2 94.3
You have an A in the class and you must take the final.
```

or

```
Enter your test, homework, and participation averages separated by spaces: -20.3 54.3 106.8
All averages must be between 0 and 100.
```

**Note:** You have been provided with a compiled version of the solution to this assignment.  That program is named ``solution.o`` and can be executed by opening a new terminal and running the command ``./homework/hw04/solution.o`` in your Cloud9 workspace.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) according to the rubric shown below.

<table id="grade" cellspacing="0">
  <tr>
    <th style="width: 5%"></th>
    <th style="width: 31.6%">Submitty Tests</th>
    <th style="width: 31.6%">Branching</th>
    <th style="width: 31.6%">Coding Style</th>
  </tr>
  <tr>
    <th>E</th>
    <td>Passes all tests, no compiler warnings</td>
    <td>If and/or if-else statements are used to cleanly and efficiently direct the flow of program execution.</td>
    <td>Code is well commented and readable, appropriate whitespace is used</td>
  </tr>
  <tr>
    <th>M</th>
    <td>Minor formatting issues (spaces, newlines, etc) or compiler warnings</td>
    <td>If and/or if-else statements are used to achieve the desired results, but they are overly complex and/or inefficient</td> 
    <td>Code is sparsely commented or over-commented but mostly readable</td>
  </tr>
  <tr>
    <th>R</th>
    <td>Fails one or more tests with major formatting or accuracy issues and/or compiler warnings.</td>
    <td>While an attempt is made to use branching statements, the logic is incorrect or incomplete or something other than an if and/or if-else statement is used.</td>
    <td>Comments are sparse or non-existent and the code is very hard to follow</td>
  </tr>
  <tr>
    <th>N</th>
    <td>Fails to compile and/or no attempt to pass the tests is evident.</td>
    <td>No attempt is made to use branching statements</td>
    <td>Comments are completely lacking and/or code is unreadable</td>
  </tr>
</table>
