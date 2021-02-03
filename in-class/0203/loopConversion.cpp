/*************************************************************************
 *
 * In-Class Exercises:  Conversion between types of loops
 *
 * File Name: loopConversion.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // Convert the following for loop to a while loop
  int count = 0, product = 1;
  for (int i = 1; i <= 4; i++) {
    product *= i;
    count++;
  }
  cout << "product: " << product << ", count: " << count << endl;

  // Convert the following while loop to a do-while loop
  int a = 0, sum = 0;
  while (a != -1000) {
    sum += a;
    a--;
  }
  cout << "a: " << a << ", sum: " << sum << endl;

  // Convert the following while loop to a for loop
  int x = 100, total = 0;
  while (x >= 75) {
    total += x;
    x--;
  }
  cout << "x: " << x << ", total: " << total << endl << endl;

  return 0;
   
}