# CPTR 141: Homework Assignment #13

## Problem Overview

In this assignment you will write an area calculator program that demonstrates function overloading.  Your program will include functions for computing the area of a circle, a rectangle, and a triangle.  The catch is that each function must be named `area` and be differentiated only by the number of parameters in the function call.  Below are the prototypes for your functions.

```c++
/*=====================================================================================
 * FUNCTION: area(radius)
 *   Return the area of a circle of a given radius, using the global costant PI
 *   as part of the computaton
 *    - Precondition: radius is a number representing the radius of a circle
 *    - Postcondition: returns the area of a circle of the given radius or -1 if no such
 *      circle exists (i.e. negative radius)
 */
double area(double);

/*=====================================================================================
 * FUNCTION: area(length, width)
 *   Returns the area of a rectangle of the given length and width
 *    - Precondition: length and width represent the dimensions of a rectangle
 *    - Postcondition: returns the area of a rectangle of the given length and width or  
 *      -1 if no such rectangle exists (i.e. negative lengths)
 */
double area(double,double);

/*=====================================================================================
 * FUNCTION: area(side1, side2, side3)
 *   Returns the area of triangle of side length side1, side2, and side3
 *    - Precondition: side1, side2, and side3 lengths of the triangle sides
 *    - Postcondition: returns the area of a triangle with the given side lengths or 
 *      returns -1 if no such triangle exists (i.e. one or more negative lengths or
 *      the sum of the two smaller lengths is less than the larger legnth)
 */
double area(double,double,double);

```

We will assume you know how to compute the area of a circle given its radius and a rectangle given its length and width.  To compute the area of a triangle given three side lengths, use [Heron's formula](https://en.wikipedia.org/wiki/Heron%27s_formula).

## Solution Specifications

Your program should follow the instructions given in that assignment with the following additions:

* The file `areaFunctions.h` contains the prototypes above as well as a reference to the global constant for Pi.  You should not edit this file as it will be ignored by Submitty.
* Implement your functions in the file  `areaFunctions.cpp`.  This is the only file that will be graded by Submitty.
* You may optionally implement a test driver in the file `area.cpp` to verify that your functions are working as expected.  This file will not be graded by Submitty.

### Compiling and Running Your Program

If you choose to write a test driver, you will need to compile and run your program from the command line.  To do this, open a new terminal and execute the following commands.

```bash
cd ~/workspace/cpp/homework/hw13/
g++ area.cpp areaFunctions.cpp -o area.o
./area.o
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with no errors or warnings
- M -- demonstrates understanding of the needed solution but with minor errors
- R -- should be revised to demonstrate understanding of the needed solution
- N -- no substantive changes made to template, or nothing submitted