/****************************************************************************
 * HW17: Functions for Max String Stream
 *
 * File Name:  maxTest.cpp
 * Name:       ?
 * Course:     CPTR 141
 */

#include <iostream>
#include <string>
#include "maxFunctions.h"
using namespace std;

int main() {

  // get maximum value
  string test1 = "The numbers 23 and 45 appear in this string along with 37.";
  cout << "The max value is: " << findMax(test1) << endl;

  // print out set notation
  int values[] = { 4,8,12,9 };
  cout << "The set is: " << getSet(values,4) << endl;

}