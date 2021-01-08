/*************************************************************************
 *
 * In-Class Demonstration:  Prompt for two numbers and display their sum
 *
 * File Name: firstExample.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {

  // Define variables
  int num1;
  int num2;

  // Prompt user and input first integer
  cout << "Enter First Number: ";
  cin >> num1;

  // Prompt user and input second integer
  cout << "Enter Second Number: ";
  cin >> num2;

  // Display the sum of the two integers
  cout << "Your Sum is: " << num1 << " + " << num2 << " = " << num1 + num2
       << endl;

  return (0);
}
