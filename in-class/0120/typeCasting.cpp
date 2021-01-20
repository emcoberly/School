/*************************************************************************
 *
 * In-Class Quiz:  Can you determine the output of each block without 
 *                 running this program?
 * 
 * File Name: typeCasting.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   
   // block #1
   int a = 4, b = 8;
   cout << a / b << endl;
   cout << static_cast<double>(a) / b << endl;
   cout << a / static_cast<double>(b) << endl;
   cout << static_cast<double>(a / b) << endl;
   cout << "---------------------------" << endl << endl;
   
   // block #2
   // int myInt = 2;
   // double myDouble = 2.5;
   // cout << myDouble / myInt << endl;
   // cout << static_cast<int>(myDouble / myInt) << endl;
   // cout << "---------------------------" << endl << endl;

   // block #3
   // myInt = 2;
   // myDouble = 2.5;
   // myDouble = myInt;
   // cout << myDouble << endl;   
   // myDouble = 2.5;
   // myInt = myDouble;
   // cout << myInt << endl;
   // cout << "---------------------------" << endl << endl;
   
   // block #4 (recall that a short int has range -32768 to 32767)
   // cout << static_cast<char>(97) << endl;
   // cout << static_cast<short>(100000) << endl;

   return 0;
}
