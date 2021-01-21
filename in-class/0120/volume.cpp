/*************************************************************************
 *
 * In-Class Exercise:  Compute the volumn of a right circular cylindar 
 *                     of a given radius and height
 * 
 * File Name: volume.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   
   // define constant
   const double PI = 3.141592653589;
   
   // define variables
   double radius, height;
   
   // prompt for input
   cout << "Enter Radius (in inches): ";
   cin >> radius;

   cout << "Enter Height (in inches): ";
   cin >> height;
   
   // print out the volume (use the pow function)
   cout << "The volume is: " << PI * pow(radius, 2) * height << " in^3" << endl;

   return 0;
}
