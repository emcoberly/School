/*************************************************************************
 *
 * hw06: Determine if a password meets the required specifications.
 *
 * File Name: pwordChecker.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  // define variables
  string userPass;
  char passCheck, passCheck2;
  int passIndex = 0, passIndex2 = 1;
  bool belowTen = true, missingDigit = true, missingLower = true,
       missingUpper = true, missingChar = true, isConsecutive = false;

  // prompt for input
  cout << "Please enter a password with the following characteristics:" << endl;
  cout << "  - at least 10 characters long" << endl;
  cout << "  - contains at least one digit" << endl;
  cout << "  - contains at least one lower-case letter" << endl;
  cout << "  - contains at least one upper-case letter" << endl;
  cout << "  - contains at least one non-alphanumeric character" << endl;
  cout
      << "  - does not contain any consecutive duplicate characters (e.g. 'aa')"
      << endl
      << endl;

  // collect input
  cout << "Password: ";
  cin >> userPass;

  // loop to check password characters
  do {
    passCheck = userPass.at(passIndex);
    if (passCheck==passCheck2) {
        isConsecutive = true;
    }
    if (userPass.length() >= 10) {
      belowTen = false;
    }
    if (isdigit(passCheck)) {
      missingDigit = false;
    }
    if (islower(passCheck)) {
      missingLower = false;
    }
    if (isupper(passCheck)) {
      missingUpper = false;
    }
    if (!isalnum(passCheck)) {
      missingChar = false;
    }
    passCheck2 = passCheck;
    passIndex += 1;
  } while (passIndex < userPass.length());

  // display result
  if(!(belowTen || missingDigit || missingLower || missingUpper || missingChar || isConsecutive)) {
      cout << "Your password has been accepted." << endl;
  } else {
      cout << "Your password does not meet the above criteria." << endl;
  }

  // end the program

  return 0;
}