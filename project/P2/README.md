# CPTR 141: Project #1

## Problem Overview
Your first project is to write a C++ program to implement the so-called "Russian Peasant" or "Ancient Egyptian" multiplication algorithm.  While the algorithm is probably not familiar to you, just think of it as an alternative to the multiplication process you earned in elementary school.  If you are interested in more information on why the algorithm works, you can find it [on wikipedia](http://en.wikipedia.org/wiki/Ancient_Egyptian_multiplication) and [other sites](http://www.cut-the-knot.org/Curriculum/Algebra/PeasantMultiplication.shtml).

Here is how the algorithm works.  Suppose you wish to multiply two integers, ``A`` and ``B`` together (no decimals allowed). 

* You would first write the values of ``A`` and ``B`` side-by-side in two columns.
* Then you create a new row with twice the previous value in the ``A`` column, and half the previous value (truncated) in the ``B`` column.
*  Continue this doubling/halving   step until the value in the ``B`` column is zero.
*  Finally, add up all of the values in the ``A`` column that go with an odd value in the ``B`` column.  That sum will be the product of the original ``A`` and ``B`` values.

Here is an example using relatively small values of ``A=34`` and ``B=19``.

<style>
  #alg th {
    border-bottom: 1px solid black;
  }
  #alg th:not(:last-child), #alg td:not(:last-child) {
    border-right: 1px solid black;
  }
  #alg td, #alg th {
    padding: 5px;
  }
  .odd { background-color: lightgreen; }
</style>
<table cols="2" cellspacing="0" cellpadding="0" id="alg">
  <tr>
    <th>A</th>
    <th>B</th>
    <th>Comment</th>
  </tr>
  <tr>
    <td class="odd">34</td>
    <td class="odd">19</td>
    <td>Since 19 is odd, we will add 34 to the product</td>
  </tr>
  <tr>
    <td class="odd">68</td>
    <td class="odd">9</td>
    <td>Since 9 is odd, we will add 68 to the product</td>
  </tr>
  <tr>
    <td>136</td>
    <td>4</td>
    <td>Since 4 is even, we will ignore the 136</td>
  </tr>
  <tr>
    <td>272</td>
    <td>2</td>
    <td>Since 2 is even, we will ignore the 272</td>
  </tr>
  <tr>
    <td class="odd">544</td>
    <td class="odd">1</td>
    <td>Since 1 is odd, add 544 and since 1/2 == 0, we stop</td>
  </tr>  
</table>


The rows shaded in <span class="odd">light green</span> are the ones with odd values in the ``B`` column, so we add the ``A`` column values together to get:   

```
34 + 68 + 544 = 646
```

Thus, the product of 39 and 19 is 646.  Check it out with other numbers.  It will work every time!

## Solution Specification
Your solution should strive to meet the standards specified below as they form the basis on which it will be graded.

1. Your program must prompt the user for two integers in some easy-to-follow fashion and perform appropriate validation checks on the user input.  It should work for both positive and negative numbers, but start with positives only.

2. You should then show how the algorithm proceeds in some fashion.  A table, similar to the first two columns of the one above, might be a nice way to do that but be creative!

3. Create a log file in which you save details of the algorithm's computation, similar to the comments in the table above.  Again, be creative!

4. After the result of one computation is displayed, ask the user if they wish to perform another computation or exit the program.  Again, perform validation checks on the user input and then act on it as appropriate.

5. Since this is a project, you have a lot of freedom in how you choose to accomplish the task.  However, you are expected to make use of the following concepts somewhere in your program.

    * Appropriately named variables
    * C++ computation (addition, multiplication, division, etc.)
    * At least one Boolean expression
    * At least one branching statement (``if``, ``if-else``, ``if-else-if``, and/or ``switch``)
    * At least one iteration statement (``while``, ``do-while``, and/or ``for``)
    * Console input/output and file output using streams

## Code Review and Grading
Before you can turn in your project, you must participate in a [code review](https://en.wikipedia.org/wiki/Code_review) with your instructor or TA.  This [walk-through](https://en.wikipedia.org/wiki/) style review is a guided-tour of your source code in which you describe how you implemented the various features, explain why you made the choices you did, and solicit constructive input which might help improve your final product.  

Once your final product has been turned in, it will be graded according to the following rubric.

<style>
  #grade td, #grade th {
    padding: 2px;
    border: 1px solid black;
  }
</style>

<table id="grade" cellspacing="0">
  <tr>
    <th style="width: 5%"></th>
    <th style="width: 23.75%">Algorithm</th>
    <th style="width: 23.75%">User Interaction</th>
    <th style="width: 23.75%">Use of Required Concepts</th>
    <th style="width: 23.75%">Coding Style</th>
  </tr>
  <tr>
    <th>E</th>
    <td>Performs correctly for all integer inputs</td>
    <td>Excellently formatted output and handles input errors well</td>
    <td>All required concepts included</td>
    <td>Code is well commented and readable</td>
  </tr>
  <tr>
    <th>M</th>
    <td>Works correctly for all positive integers</td>
    <td>Good formatting and handles most input errors</td>
    <td>All required concepts included</td>
    <td>Code is sparsely commented or over-commented but mostly readable</td>
  </tr>
  <tr>
    <th>R</th>
    <td>An attempt to implement the algorithm was made, but was not successful</td>
    <td>Basic user interaction with little or no input validation</td>
    <td>Some required concepts were used, but not all</td>
    <td>Comments are sparse or non-existent and the code is very hard to follow</td>
  </tr>
  <tr>
    <th>N</th>
    <td>No attempt at implementing the algorithm is evident</td>
    <td>No user interaction or input validation</td>
    <td>Only one or two required concepts were included</td>
    <td>Comments are lacking and/or code is unreadable</td>
  </tr>
</table>