#include <iostream>
using namespace std;

void swap(int first, int second) {
  int temp = first;
  first = second;
  second = temp;
}

int main() {
  int x = 6, y = 7;
  swap(x, y);
  cout << "x = " << x << ", y = " << y << endl;
}
