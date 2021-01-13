/*************************************************************************
 *
 * In-Class Exercise:  Determine how large a number can be before its cube
 *                     overflows the variable range.
 * 
 * File Name: cubeWrap.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
   
   // try with "short int" & "int" types
   short int num;  
   
   // get the number
   cout << "Enter the Number: ";
   cin >> num;
   
   // cube it
   num = num * num * num;
   
   // and print out the result
   cout << "The cube is: " << num << endl;
   
   return 0;
}
