#include <iostream>
using namespace std;

int product(int a=1, int b=1, int c=1, int d=1);

int main() {
  cout << "Test One: " << product(2, 2, 2, 3) << endl;
  cout << "Test Two: " << product(3, 3, 5) << endl;
  cout << "Test Three: " << product(5, 5) << endl;
}

int product(int a, int b, int c, int d) { return a * b * c * d; }
