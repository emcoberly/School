#include <iostream>
using namespace std;

int main() {

  int rows = 8, cols = 10;
   
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 5; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}