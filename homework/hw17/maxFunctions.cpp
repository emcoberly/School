/****************************************************************************
 * HW17: Functions for Max String Stream
 *
 * File Name:  maxFunctions.cpp
 * Name:       Eddie Coberly
 * Course:     CPTR 141
 */

#include "maxFunctions.h"
#include <iostream>
#include <sstream>
using namespace std;

int findMax(string userString) {
  istringstream sin(userString);
  string inputArray[1000];
  int max = 0;
  int i = 0;
  while (getline(sin, userString)) {
    inputArray[i] = userString;
    i++;
  }
  for (int j = 0; j < i; j++) {
    cout << inputArray[j] << ",";
  }
  return max;
}

string getSet(const int array[], int size) {
  string userString;
  return userString;
}