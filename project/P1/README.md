# CPTR 141: Project #1

## Problem Overview

Writing a computer program is more about solving a problem than about memorizing commands for a specific language. In this project, you will demonstrate your ability to solve a problem by breaking it down into smaller steps and writing instructions on how to complete those smaller steps. You will not, however, actually write any code on the computer.

Suppose you are given two rods: one is 4 units in length and the other is 9 units in length. The rods have no other markings on them, so you can't measure anything other than this length. You can, however, mark the beginning and end of a rod on some solid surface, like a table, then move it to use it again. Your goal is to measure out exactly 7 units.

Your task is to describe a solution as a sequence of discrete steps and to record the length at the conclusion of each step. An example might look like this:

1. Start at position 0
2. Use the 9 unit rod to measure 9 to the right
3. Mark the position
4. Use the 5 unit rod to measure 5 to the left from the position marked in 3
5. Mark the position
6. You now have marked a 4 unit length from the start position


## Solution Specification

Your solution to this problem outlined above must meet the following criteria. The exact steps you use complete this are up to you. Be creative!

1. You must describe a sequence of operations that will result in measuring a total of exactly 7 units. 

2. Your description must be easy to follow and only use the allowed steps: 

   - starting from a known location (initially 0), 	
   - select either the long or short rod, 	
   - place one end on the known location, and 	
   - mark a new location (either larger or smaller than the prior). 

3. Those wishing to earn an E must additionally describe a general process for obtaining 7 units given any two rods for which the individual lengths of the two rods have no common factors (i.e. 5 and 8 would work, but 6 and 8 would not). This is also called being relatively prime or [coprime](https://en.wikipedia.org/wiki/Coprime_integers).  It can be proven that if *a* and *b* are coprime, then there exist integers *x* and *y* such that *ax* + *by* = 1 (see [Bézout's identity](https://en.wikipedia.org/wiki/Bézout's_identity)). You may assume this fact (without having to prove it) in describing your general algorithm.

   So the problem generalizes to asking you to write an *algorithm* (not an *expression*) to find *x* and *y* for *ax* + *by* = *c* for any positive integer *c* where *a* and *b* are coprime. Your algorithm can have loops, assignments, and conditionals. Hint: if *a* and *b* are both positive, then either *x* or *y* must be negative (but not both).

4. You may use the Internet as a source for your ideas, but: 

   - You must cite any source you use to help you solve the problem. 	
   - You must write the sequence of instructions yourself, not copy it from a source. 	
   - You may not ask a fellow student for the solution to the problem (although you may discuss general strategies).

The primary goal is simple, clear, and correct instructions; efficiency is, at most, a secondary goal. Thus, more weighings with simpler instructions are to be preferred over fewer weighings with more complicated instructions. Other statements of this problem you might find on the internet may have different goals.


## Grading

Your project will be assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E — solves both the specific problem (a.k.a 7 from 4 and 9) and the general problem (a.k.a 7 from m and n) by providing clear, efficient, and accurate instructions that are consistent with those given above. 
- M — solves the specific problem only, but does so using clear, efficient, and accurate instructions consistent with those above *OR* solves both problems, but does not use clear and efficient instructions (although the instructions are still accurate and consistent). 
- R — fails to solve either problem using clear, efficient, and accurate instructions that are consistent with those given above. 
- N — no substantive instructions are submitted by the due date.