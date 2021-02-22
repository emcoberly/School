/****************************************************************************
 *
 * Hw11: Supporting functions for a program to print out the calendar
 *       for a given month and year.
 *
 * File Name:  calendarFunctions.cpp
 * Course:     CPTR 141
 *
 */

#include <string>
using namespace std;

#include "calendarFunctions.h"

// implement your functions here
string nameOfMonth(int month) {
  switch (month) {
  case 1:
    return "January";
    break;
  case 2:
    return "February";
    break;
  case 3:
    return "March";
    break;
  case 4:
    return "April";
    break;
  case 5:
    return "May";
    break;
  case 6:
    return "June";
    break;
  case 7:
    return "July";
    break;
  case 8:
    return "August";
    break;
  case 9:
    return "September";
    break;
  case 10:
    return "October";
    break;
  case 11:
    return "November";
    break;
  case 12:
    return "December";
    break;
  default:
    return "";
    break;
  }
}

bool isLeapYear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}

int daysInMonthAndYear(int month, int year) {
  if ((month % 2 == 1 && month < 8) || (month % 2 == 0 && month >= 8)) {
    return 31;
  } else if (month == 2) {
    if (isLeapYear(year)) {
      return 29;
    } else {
      return 28;
    }
  } else {
    return 30;
  }
}