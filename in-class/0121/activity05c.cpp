#include <iostream>
using namespace std;

int main() {
  // ----------------------------------------- declare variables
  int a = 5, b = 2, c = 0;
  // ----------------------------------------- print output
  cout << "Line 8:  " << (a == b) << endl;
  cout << "Line 9:  " << (a != b) << endl;
  cout << "Line 10: " << (a = b) << endl;
  cout << "Line 11: " << ( (a > c) || ((b / c) == 1) ) << endl;
  cout << "Line 12: " << ( (a > c) && ((b / c) == 1) ) << endl;
}