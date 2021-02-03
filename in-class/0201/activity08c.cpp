#include <iostream>
using namespace std;

int main() {

  // define our variable
  int x;

  // row one
  x = 5;
  cout << "Expression: Value " << (3 + 2 * (x++)) << endl;
  cout << "x Value: " << x << endl << endl;

  // row two
  x = 3;
  cout << "Expression: Value " << (5 - (++x) / 2) << endl;
  cout << "x Value: " << x << endl << endl;

  // row three
  x = 1;
  cout << "Expression: Value " << (6 * (--x)) << endl;
  cout << "x Value: " << x << endl << endl;

  // row four
  x = -3;
  cout << "Expression: Value " << (2 + (x--)) << endl;
  cout << "x Value: " << x << endl << endl;
}
