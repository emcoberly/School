# CPTR 141: Homework Assignment #17

## Problem Overview

Your task in this assignment is to write two functions.  The first scans a string for integers and returns the largest one it finds.  The second function takes an array of integers and create a string containing a set representation of those integers.  The prototypes for these functions are given below and can be found in the file `maxFunctions.h`.

```c++
/**************************************************************************************
 * FUNCTION: findMax(string)
 *
 * Precondition:  The parameter is a string that may contain positive integers
 *                in numerical form
 *
 * Postcondition: Returns the largest integer found in the string, or -1 if no
 *                integers are found.
 */
int findMax(string);
```

```c++
/******************************************************************************
 * FUNCTION: getSet(int[], int)
 *
 * Precondition:  The integer array contains the second integer number of values
 *
 * Postcondition: Returns a string that contains the set representation of the array.
 *                An example of the string returned is ""{ 1, 2, 3 }"
 */
string getSet(const int[],int);
```

Implement these functions in the file `maxFunctions.cpp`.


## Solution Specification

1. Implement your two functions in `maxFunctions.cpp` as specified above. Include any needed libraries for file I/O in this file as well.
2. Use string streams to implement each function.
3. Make sure your functions do not produce any output (either with `cout` or with `cerr`).
4. You can use the provided `main()` program in `maxTest.cpp` to test your functions.  To compile and run this test program, select the "Run Code" option with either the `maxTest.cpp` or the `maxFunctions.cpp` file.


## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
