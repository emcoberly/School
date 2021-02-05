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
  int i = 1;
  while (i <= 4) {
    product *= i;
    ++i;
    count++;
  }
  cout << "product: " << product << ", count: " << count << endl;

  // Convert the following while loop to a do-while loop
  int a = 0, sum = 0;
  do {
    sum += a;
    a--;
  } while (a != -1000);
  cout << "a: " << a << ", sum: " << sum << endl;

  // Convert the following while loop to a for loop
  int x = 100, total = 0;
  for (x = 100; x >= 75; x--) {
    total += x;
  }
  cout << "x: " << x << ", total: " << total << endl << endl;

  return 0;
   
}