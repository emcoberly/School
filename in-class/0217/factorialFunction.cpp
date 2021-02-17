/*************************************************************************
 *
 * Demonstration/Exercise: A factorial function
 *
 * File Name: factorialFunction.cpp
 * Course:    CPTR 141
 */

#include "factorialFunction.h"

// function definition
long factorial(int n) {
    long result = 1;
    while (n>0) {
        result *= n--;
    }
    return result;
}