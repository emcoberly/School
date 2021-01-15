/*************************************************************************
 *
 * In-Class Demonstration:  Compute the slope between two points.
 * 
 * File Name: slope.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
   
   // define variables
   double x1, y1, x2, y2;
   char tmp;
   
   // prompt for input   
   cout << "Enter point one (x,y): ";
   cin >> tmp >> x1 >> tmp >> y1 >> tmp;
   cout << "Enter point two (x,y): ";
   cin >> tmp >> x2 >> tmp >> y2 >> tmp;


   // print out the slope
   cout << endl;
   cout << "The slope between these points is: ";
   cout << (y2 - y1)/(x2 - x1) << endl;
   
   return 0;
}
