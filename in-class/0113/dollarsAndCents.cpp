/*************************************************************************
 *
 * In-Class Demonstration:  Formatting the Output of a Floating-Point Var
 *
 * File Name: dollarsAndCents.cpp
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // define variables for user input
  double money;
  int children;

  // get the numbers
  cout << "How much money do you have in your pocket? $" << fixed
       << setprecision(2);
  cin >> money;
  cout << "How many children do you have? ";
  cin >> children;

  // compute the values
  int centsPerChild = money * 100 / children;
  double perChild = centsPerChild / 100.0;
  double leftOver = (money - perChild * children);

  // print out the results
  cout << endl;
  cout << "Give each child $" << fixed << setprecision(2) << perChild;
  cout << " and keep $" << leftOver << " for yourself." << endl;

  return 0;
}
