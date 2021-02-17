/*************************************************************************
 *
 * Demonstration/Exercise: A factorial function
 *
 * File Name: factorial.cpp
 * Course:    CPTR 141
 */

#include <cmath>
#include <iostream>
using namespace std;

// function definition
long factorial(int n);

// main program
int main() {
   
    int n = 0;
    cout << "Enter a number n: ";
    cin >> n;

    long val = factorial(n);
    cout << n << "! = " << val << endl;

    return 0;
}


