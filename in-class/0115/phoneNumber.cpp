/*************************************************************************
 *
 * In-Class Exercise: Write a phone number parser that accepts a 10-digit
 *                    number of the form DDDDDDDDDD, and prints out:
 *                       a. number of digits
 *                       b. formatted (DDD) DDD-DDDD version
 *                       c. area code only
 *                       e. local number only
 *
 * File Name: phoneNumber.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  // We use a single string variable in this exercise
  string phone;

  // Prompt the user for input
  cout << "Enter a phone number: ";
  cin >> phone;

  // Display information
  cout << "You entered " << phone.length() << " digits. The first digit was  \""
       << phone.at(0) << "\"." << endl;

  // Format the phone number
  cout << "Formatted: (" << phone.substr(0, 3) << ") " << phone.substr(3, 3)
       << "-" << phone.substr(6, 4) << endl;

  // Display the various parts
  cout << "Area Code: (" << phone.substr(0, 3) << ")" << endl;
  cout << "Local Number: " << phone.substr(3, 3) << "-" << phone.substr(6, 4)
       << endl;

  return 0;
}
