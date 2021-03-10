/****************************************************************************
 * HW17: Functions for Max String Stream
 *
 * File Name:  maxFunctions.h
 * Name:       ?
 * Course:     CPTR 141
 */

#include <string>
using namespace std;

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

/******************************************************************************
 * FUNCTION: getSet(int[], int)
 *
 * Precondition:  The integer array contains the second integer number of values
 *
 * Postcondition: Returns a string that contains the set representation of the array.
 *                An example of the string returned is ""{ 1, 2, 3 }"
 */
string getSet(const int[],int);