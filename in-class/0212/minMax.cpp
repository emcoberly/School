/*************************************************************************
 *
 * In-Class Exercise: Define Minimum and Maximum Function
 *
 * File Name: minMax.cpp
 * Course:    CPTR 141
 */

#include <iostream>  // for cin and cout
using namespace std;


// Define Maximum Here
int myMax(int num1, int num2) {
    int maxNum = num1;
    if (num2 > num1) {
        maxNum = num2;
    }
    return maxNum;
}

// Define Minimum Here
int myMin(int num1, int num2) {
    int minNum = num1;
    if (num2 < num1) {
        minNum = num2;
    }
    return minNum;
}

// Stretch Goals:
// ==============
//   * Define a "maxThree" function that returns the maximum of three integers.
//     Can you do this using the existing myMax function?
//
//   * Define a "middle" function that returns the middle number in a list of
//     three integers.  Use the existing two-number myMax amd myMin functions
//     to help.

int maxThree(int num1, int num2, int num3) {
    int maxNum = num1;
    maxNum = myMax(myMax(num1,num2),num3);
    return maxNum;
}

int minThree(int num1, int num2, int num3) {
    int minNum = num1;
    minNum = myMin(myMin(num1,num2),num3);
    return minNum;
}

int midThree(int num1, int num2, int num3) {
    int midNum = num1;
    if (num2 > num1) {
        midNum = num2;
    }
    if (num3 < num2 && num3 > num1) {
        midNum = num3;
    }
    return midNum;
}


// Here is the main program
int main() {
   
    int userNum1, userNum2, userNum3;

    cout << "Enter three integers separated by spaces: ";
    cin >> userNum1 >> userNum2 >> userNum3;

    cout << "The maximum number is " << maxThree(userNum1, userNum2, userNum3) << "." << endl;
    cout << "The minimum number is " << minThree(userNum1, userNum2, userNum3) << "." << endl;
    cout << "The middle number is " << midThree(userNum1, userNum2, userNum3) << "." << endl;

    return 0;
}