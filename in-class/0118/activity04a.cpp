#include <iostream>
using namespace std;

int main() {

  // variable for testing
  unsigned short int test;

  // assign the largest value possible
  test = 65535;

  // then add one
  test += 1;

  // then output the result
  cout << "The value is: " << test << endl;

  return 0;
}
