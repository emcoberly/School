/*************************************************************************
 *
 * hw03: Compute the gross pay, withholdings, and net pay for an
 *       employee given the number of hours worked and number of
 *       dependents.
 *
 * File Name: paycheck.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int dependents, hours;
  double pay, withholdings, payCheck;
  cout << "Enter the number of hours worked: ";
  cin >> hours;
  cout << "Enter the number of dependents: ";
  cin >> dependents;
  const int OT_HOURS = 40;
  // compute gross pay
  if (hours < OT_HOURS) {
    pay = hours * 18.50;
  } else {
    pay = (hours - OT_HOURS) * 18.50 * 1.5 + OT_HOURS * 18.50;
  }
  const double SOCIAL_SECURITY = pay * 0.062;
  const double MEDICARE = pay * 0.0145;
  const double FEDERAL_TAX = pay * (0.15 - 0.01 * dependents);
  const double HEALTH_CARE = 10.00;
  withholdings = SOCIAL_SECURITY + MEDICARE + FEDERAL_TAX + HEALTH_CARE;
  payCheck = pay - withholdings;
  cout << "\nYour gross pay is: $" << fixed << setprecision(2) << pay << endl;
  cout << "The withholdings are: $" << fixed << setprecision(2) << withholdings
       << endl;
  cout << "So that your net pay is: $" << fixed << setprecision(2) << payCheck
       << endl;

  return 0;
}
