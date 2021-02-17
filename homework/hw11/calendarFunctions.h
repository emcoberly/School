/****************************************************************************
 *
 * Hw11: Supporting functions for a program to print out the calendar
 *       for a given month and year.
 *
 * File Name:  calendarFunctions.h
 * Course:     CPTR 141
 *
 */

#include <string>
using namespace std;

// Precondition: month is the number of the month (1 = January, 2 = February, etc.)
// Postcondition: 
//   * if month is valid (1-12) returns the name of the month
//   * otherwise returns an empty string
string nameOfMonth(int month);


// Precondition: year is the four digit year (i.e. 2020)
// Postcondition: returns true if the year is a leap year
//   Note: leap years are divisible by 400 OR divisible by 4 and not by 100
bool isLeapYear(int year);


// Preconditions: 
//   * month is the number of the month (1 = January)
//   * year is the four digit year (i.e. 2020)
// Postcondition: 
//   * if month is valid (1-12) returns the number of days in that month
//   * otherwise returns -1
int daysInMonthAndYear(int month, int year);