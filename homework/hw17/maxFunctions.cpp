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
#include <vector>
using namespace std;

int findMax(string userString) {
  istringstream sin(userString);
  vector<int> inputArray;
  int userNum;
  int max = 0;
  int count = 0;
  while (sin >> userString) {
    bool trueInt = true;
    if (userString.at(userString.size() - 1) == '.') {
      userString.erase(
          userString.begin() + userString.size() -
          1); // Looked up erase() function from
              // http://www.cplusplus.com/reference/string/string/erase/
    }
    for (int i = 0; i < userString.size(); i++) {
      if (!isdigit(userString.at(i))) {
        trueInt = false;
        break;
      }
    }
    if (trueInt) {
      userNum = stoi(
          userString); // stoi() came from
                       // https://www.geeksforgeeks.org/converting-strings-numbers-cc/
      inputArray.push_back(userNum);
    }
    count++;
  }
  for (int i = 0; i < inputArray.size() - 1; i++) {
    if (inputArray.at(i + 1) > inputArray.at(i)) {
      inputArray.push_back(inputArray.at(i + 1));
    }
  }
  max = inputArray.at(inputArray.size() - 1);
  return max;
}

string getSet(const int array[], int size) {
  ostringstream sout;
  sout << "{";
  if (size > 0) {
    for (int i = 0; i < size - 1; i++) {
      sout << " " << array[i] << ",";
    }
    sout << " " << array[size - 1];
  }
  sout << " }" << endl;

  return sout.str();
}