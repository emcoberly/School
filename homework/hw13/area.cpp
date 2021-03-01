/****************************************************************************
 *
 * Asgn.13: Three functions for computing area
 *
 * File Name:  area.cpp
 * Course:     CPTR 141
 */

#include <iostream>  // for cout and cin
using namespace std;

#include "areaFunctions.h"
#include "areaFunctions.cpp"
const double PI = 3.14159;

int main() {
    char proceed = 'y';
    do {
        double sl1 = 0.0, sl2 = 0.0, sl3 = 0.0;
        cout << "Enter side length 1: ";
        cin >> sl1;
        cout << "Enter side length 2: ";
        cin >> sl2;
        cout << "Enter side length 3: ";
        cin >> sl3;
        cout << "The area of the triangle is: " << area(sl1,sl2,sl3) << endl;
        cout << "Would you like to try again? ";
        cin >> proceed;
    } while (proceed == 'y');
    return 0;
}
