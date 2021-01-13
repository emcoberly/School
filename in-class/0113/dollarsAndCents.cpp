/*************************************************************************
 *
 * In-Class Demonstration:  Formatting the Output of a Floating-Point Var
 * 
 * File Name: dollarsAndCents.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
   // define variables for user input
   double money;
   int children;
   
   // get the numbers
   cout << "How much money do you have in your pocket? $";
   cin >> money;
   cout << "How many children do you have? ";
   cin >> children;
   
  // compute the values
  double perChild = money / children;
  double leftOver = money;

  // print out the results
  cout << endl;
   cout << "Give each child $" << perChild;
   cout << " and keep $" << leftOver << " for yourself." << endl;
   
   return 0;
}
