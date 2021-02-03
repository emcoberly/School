/*************************************************************************
 *
 * In-Class Exercises: Test the methods for exiting a loop:
 *                       continue, break, and exit(0)
 *
 * File Name: loopExit.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  int num=2, sum=0;
  while (num < 20) {
    num++;
    if (num == 10 || num == 11) {
      // exit the loop, but how?
    }
    sum += num;
  }
  cout << "The sum is " << sum << endl;

  return 0;
}
