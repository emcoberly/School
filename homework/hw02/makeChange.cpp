/*************************************************************************
 *
 * hw02: A change computation program
 *
 * File Name: makeChange.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // define variables
  double userCost, userPaid;
  int centsCost, centsPaid, centsChange;
  int twentyDollar = 0, tenDollar = 0, fiveDollar = 0, oneDollar = 0;
  int quarter = 0, dime = 0, nickel = 0, penny = 0;

  // Loop ensure the user can pay for the item
  while (true) {
    // Prompt for and collect input
    cout << "Enter the cost in dollars and cents: $";
    cin >> userCost;
    cout << "Enter the amount paid in dollars and cents: $";
    cin >> userPaid;
    if (userCost > userPaid) {
      cout << "You must be able to pay for the item.\n" << endl;
    } else {
      break;
    }
  }

  // convert to cents and compute change
  centsCost = userCost * 100.00;
  centsPaid = userPaid * 100.00;
  centsChange = centsPaid - centsCost;
  twentyDollar = centsChange / 2000;
  tenDollar = centsChange % 2000 / 1000;
  fiveDollar = centsChange % 2000 % 1000 / 500;
  oneDollar = centsChange % 2000 % 1000 % 500 / 100;
  quarter = centsChange % 2000 % 1000 % 500 % 100 / 25;
  dime = centsChange % 2000 % 1000 % 500 % 100 % 25 / 10;
  nickel = centsChange % 2000 % 1000 % 500 % 100 % 25 % 10 / 5;
  penny = centsChange % 2000 % 1000 % 500 % 100 % 25 % 10 % 5;

  // now display number of dollars and coins
  cout << "\nYour change is:" << endl;
  cout << "  - twenty-dollar bills: " << twentyDollar << endl;
  cout << "  - ten-dollar bills: " << tenDollar << endl;
  cout << "  - five-dollar bills: " << fiveDollar << endl;
  cout << "  - one-dollar bills: " << oneDollar << endl;
  cout << "  - quarters: " << quarter << endl;
  cout << "  - dimes: " << dime << endl;
  cout << "  - nickels: " << nickel << endl;
  cout << "  - pennies: " << penny << endl;

  return 0;
}
