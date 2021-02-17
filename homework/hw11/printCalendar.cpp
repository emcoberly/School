/****************************************************************************
 *
 * Hw11: Supporting functions for a program to print out the calendar
 *       for a given month and year.
 *
 * File Name:  printCalendar.cpp
 * Course:     CPTR 141
 *
 */

#include <iostream>  //	cin & cout
#include <iomanip>   // formatting output
#include <string>
using namespace std;

#include "calendarFunctions.h"

//********************** local function prototypes

// Preconditions: 
//   * month is the number of the month (1 = January)
//   * year is the four digit year (i.e. 2020)
// Posticondition: a formatted calendar is printed
void calendar(int month, int year);

// Preconditions: 
//   * month is the number of the month (1 = January)
//   * year is the four digit year (i.e. 2020)
// Posticondition: the day of the week on which the first of the
//   month falls is returned (1 = Sunday, etc.)
int dayOfFirst(int month, int year);


//********************** the main program

int main(int argc, char* argv[]) {
    calendar(10,2020);
    return 0;
}

//********************** local function implementations

void calendar(int month, int year) {
    int daysInMonth = daysInMonthAndYear(month, year);
    int startingDay = dayOfFirst(month,year);
    string monthName = nameOfMonth(month);
    int space = (23 - monthName.length()) / 2 + monthName.length();
    cout << setw(space) << monthName << " " << year << endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
    for (int i = 1; i < startingDay; i++) {
        cout << "    ";
    }
    for (int i = 1; i <= daysInMonth; i++) {
        cout << setw(4) << i;
        if ((i + startingDay - 1) % 7 == 0 && i < daysInMonth) {
            cout << endl;
        }
    }
    cout << endl;
}


int dayOfFirst(int month, int year) {
    int x = 1 + year % 100;
    x += x / 4;
    switch (month) {
        case 1:  // January
            if ( isLeapYear(year) ) { x += 6; }
            break;
        case 2:  // February
            if ( isLeapYear(year) ) { x += 2; } else { x += 3; }
            break;
        case 3:  // March
            x += 3; 
            break;
        case 4:  // April
            x += 6;
            break;
        case 5:  // May
            x += 1;
            break;
        case 6:  // June
            x += 4;
            break;
        case 7:  // July
            x += 6;
            break;
        case 8:  // August
            x += 2;
            break;
        case 9:  // September
            x += 5;
            break;
        case 10: // October
            x += 0;
            break;
        case 11: // November
            x += 3;
            break;
        case 12: // December
            x += 5;
            break;
    }
    x += ((3 - ((year / 100) % 4)) * 2);
    return (x % 7 + 1);
}