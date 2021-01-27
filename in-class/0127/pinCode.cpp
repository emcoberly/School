/*************************************************************************
 *
 * In-Class Exercise:  Check to see if a user-entered PIN code is valid
 *                     (four characters long, contains only digits).
 *
 * File Name: pinCode.cpp
 * Course:    CPTR 141
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

   // collect user input
   string pinCode;
   cout << "Please enter a four digit PIN code: ";
   cin >> pinCode;

   // check to ensure code is valid
   bool pinValid;

   /* YOUR CODE GOES HERE */
   
   // print out results
   if (pinValid) {
      cout << "Your PIN code is valid." << endl;
   } else {
      cout << "ERROR: PIN codes must contain four digits." << endl;
   }

   return 0;
}