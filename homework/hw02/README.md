# CPTR 141: Homework Assignment #2

## Problem Overview

You have been hired by a mathematically disinclined friend to write a program to help make change.  The program should accept the cost of an item and the amount paid, both in decimal form, and then provide the number of $20 bills, $10 bills, $5 bills, $1 bills, quarters, dimes, nickels, and pennies that should be returned as change.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use floating-point variables to accept your inputs
2. You must return the fewest pieces of money possible to make correct change.  For example, if your change is $0.50, you should return two quarters, not five dimes.
3. You must format your code using Ctrl+Shift+I or the "Format Document" command in your development environment.
4. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.  Note that the dollar signs ($) are part of the program prompt -- they are not entered by the user.

```
Enter the cost in dollars and cents: $13.59
Enter the amount paid in dollars and cents: $45.00

Your change is:
  - twenty-dollar bills: 1
  - ten-dollar bills: 1
  - five-dollar bills: 0
  - one-dollar bills: 1
  - quarters: 1
  - dimes: 1
  - nickels: 1
  - pennies: 1
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
