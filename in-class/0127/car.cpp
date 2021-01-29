/*************************************************************************
 *
 * In-Class Exercise:  Display different messages depending on the age of
 *                     a car.
 *
 * File Name: car.cpp
 * Course:    CPTR 141
 */

#include <iostream>
using namespace std;

int main() {

  // get the car year from the user
  int carYear;
  cout << "Enter car year: ";
  cin >> carYear;

  cout << "Your car:\n";

  if (carYear < 1967) {
    cout << "Probably has few safety features.\n";
  } else {
    if (carYear > 1970) {
      cout << "Probably has head rests." << endl;
    }
    if (carYear > 1991) {
      cout << "Probably has anti-lock brakes." << endl;
    }
    if (carYear > 2001) {
      cout << "Probably has airbags." << endl;
    }
  }

  /* NEW CODE GOES HERE */

  return 0;
}