# CPTR 141: Homework Assignment #14

## Problem Overview

In this assignment you will write and test two functions dealing with arrays. The prototypes for these functions, along with their pre- and post-conditions,  can be found in the provided header file `arrayfun.h`.
The function prototypes are:

* `double mean(int a[], int size); // average = sum / count`
* `double median(int a[],int size); // middle value`
  

The file `arrayfun.cpp`, should contain your implementation of these functions and is the only file that will be graded. However, you should also write a `main()` driver program to test your functions.

The median is the middle value (if the list has an odd number of elements) and the the average or mean of the two middle values if the list has an even number of elements. To calculate the median it will be much easier to have the array sorted. You should look up a sorting algorithm on the Internet to accomplish this.  Feel free to copy the algorithm, just provide a reference in your code to where you found it.

Note that you are writing functions that return values. You are not asked to output anything to the console in these functions (though you should do so in your driver program).

## Solution Specification
Your solution should strive to meet the standards specified below as they form the basis on which it will be graded.

1. You must correctly implement the functions listed above.

2. You must begin your functions with assertions to check the preconditions included with the function prototypes.

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

