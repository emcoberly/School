/*************************************************************************
 *
 * In-Class Demonstration: Generate a random addition problem with a given
 *                         number of digits
 *
 * File Name: addition.cpp
 * Course:    CPTR 141
 *
 */

#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // define variables
  int /*seed,*/ digits, num1, num2;

  // prompt for and set seed
  // cout << "Enter Random Seed: ";
  // cin >> seed;
  srand(time(0));

  // prompt for and get number of digits
  cout << "Enter Number of Digits: ";
  cin >> digits;

  // generate random numbers
  num1 = rand() % static_cast<int>(pow(10, digits) - pow(10, digits - 1)) +
         pow(10, digits - 1);
  num2 = rand() % static_cast<int>(pow(10, digits) - pow(10, digits - 1)) +
         pow(10, digits - 1);

  // print out problem
  cout << endl;
  cout << setw(8) << num1 << endl;
  cout << "+" << setw(7) << num2 << endl;
  cout << "--------" << endl;
  cout << setw(8) << num1 + num2 << endl;

  return 0;
}
