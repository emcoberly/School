#include <iostream>
using namespace std;

int main() {

  int numRows = 5;
  for (int j = numRows; j > 0; j--) {
    for (int i = 1; i <= j; i++) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
