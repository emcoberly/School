# CPTR 141: Homework Assignment #12

## Problem Overview

Your goal in this assignment is to write a two functions to assist with computing the length and midpoint of the line segment connecting points (x1,y1) and (x2,y2).  You will use the following prototypes for your function:

```c++
/*---------------------------------------------------------------------------
 * Prompts the user for a numbered point, in the first parameter, in the form
 *  (x,y) and validates the input before returning it in second and third
 *  parameters.
 */
void getPoint(int, double&, double&);


/*--------------------------------------------------------------------------
 * Takes points (x1,y1), from the first two parameters, and (x2,y2), from the
 *   second two parameters, and computes the x and y coordinates of the 
 *   midpoint returning them in the fifth and sixth parameter.  The finds
 *   the length of the line segment and returns it as the function value.
 */
double lineInfo(double, double, double, double, double&, double&);
```

You should also write a short ``main()`` program to coordinate asking the user for the two points, passing that information on to the ``lineInfo()`` function, and displaying the output.
​	

## Solution Specification

Your solution to this problem must meet the following criteria.

1. You must define the two functions given above and they must meet the given specifications.
2. Your program must correctly handle any input errors.
3. Your code **must** produce the same output as the included sample program, ``solution.o``.  Run this program several times trying different inputs to make sure you understand what the output should look like.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted