/****************************************************************************
 *
 * Asgn.14:  A library of array functions
 *
 * File Name: functions.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 * Date:      6 March 2018
 *
 */

#include "arrayfun.h"
#include <bits/stdc++.h> // for sort() function
using namespace std;

double mean(int a[], int size) { // average = sum / count
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += a[i];
  }
  return sum / size;
}

double median(int a[], int size) { // middle value
  int midIndex = size / 2;
  sort(a, a + size); // Credit to https://www.geeksforgeeks.org/sort-c-stl/ for
                     // introducing me to the sort() function
  if (size % 2 == 0) {
    return (a[midIndex] + a[midIndex - 1]) / 2.0;
  } else {
    return a[midIndex];
  }
}

// int main() {

//     double meanVal;
//     double medianVal;
//     int a[] = {1,10,12,13,4,6,6,2};
//     meanVal = mean(a,8);
//     medianVal = median(a,8);
//     cout << "Mean: " << meanVal << endl;
//     cout << "Median: " << medianVal << endl;

// }