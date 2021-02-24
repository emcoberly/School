#include <iostream>
using namespace std;

int a = 0;

void myFunc(int b = 4) {
  int c = 5;
  cout << "Value: " << /* OUTPUT 1 */;
}

int main() {
  int d = 5;
  if (d > 2) {
    int e = 3;
    if (e < 10) {
      int f = 7;
      cout << "Value: " << /* OUTPUT 2 */;
    }
    cout << "Value: " << /* OUTPUT 3 */;
  }
  cout << "Value: " << /* OUTPUT 4 */;
}
