/*************************************************************************
 *
 * Demonstration/Exercise: A factorial function
 *
 * File Name: factorialMain.cpp
 * Course:    CPTR 141
 */

#include "factorialFunction.h"
#include <cmath>
#include <iostream>
using namespace std;

// main program
int main() {
   
    int n = 0;
    cout << "Enter a number n: ";
    cin >> n;

    long val = factorial(n);
    cout << n << "! = " << val << endl;

    return 0;
}


