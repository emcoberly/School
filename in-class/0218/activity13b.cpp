#include <iostream>
using namespace std;

int addOneA(int x) {
  x = x + 1;
  return x;
}

int addOneB(int &x) {
  x = x + 1;
  return x;
}

int main() {
  int a = 1;
  cout << "Function: " << addOneA(a) << ", ";
  cout << "Argument: " << a << endl;

  int b = 1;
  cout << "Function: " << addOneB(b) << ", ";
  cout << "Argument: " << b << endl;
}