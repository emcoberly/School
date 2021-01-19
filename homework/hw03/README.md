# CPTR 141: Homework Assignment #3

## Problem Overview

In this assignment, you will write a paycheck calculator for an individual paycheck.  Your calculator will work as follows:

1. Prompt the user for the number of hours worked in the week and the number of dependents the employee has.

2. Calculate and display the gross pay (before withholdings), withholdings (taxes, insurance, etc.), and net pay (gross pay minus withholdings) taking the following into account:

    * The employee is paid at a fixed rate of $18.50 an hour for regular hours (up to 40 in the week).
    *  Any hours over 40 are paid at one and one-half times the regular rate. 
    * The following withholdings are deducted from the gross pay:
        * 6.2% of gross pay for Social Security
        * 1.45% of gross pay for Medicare
        * 15% (less 1% for each dependent) of gross pay for Federal Income Tax
        * A flat $10 health care contribution
    

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use the ``const`` modifier to mark constants where appropriate

2. A single ``if-else`` statement is already defined for you.  You must leave that statement as written (modifying only the code between the curly braces) and you may not add any other branching statements.

3. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.

```
Enter the number of hours worked: 45
Enter the number of dependents: 4

Your gross pay is: $878.75
The withholdings are: $173.89
So that your net pay is: $704.86
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted