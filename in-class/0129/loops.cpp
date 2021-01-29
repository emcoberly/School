/*************************************************************************
 *
 * In-Class Exercise:  Use a while loop to count and accumulate.
 *
 * File Name: loops.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // define needed variables
  int counter = 0;
  int sum = 0;
  int start;
  int limit;

  // prompt the user for the maximum
  cout << "Enter a starting number: ";
  cin >> start;
  cout << "How far should I count? ";
  cin >> limit;

  // use the while loop to count
  counter = start - 1;
  do {
      cout << ++counter << " ";
      sum += counter;
  } while(counter < limit);
   
  // print out the final sum
  cout << endl
       << endl
       << "The sum of " << start << "-" << limit << " is " << sum << "." << endl;

  // finished!
  return 0;
}
