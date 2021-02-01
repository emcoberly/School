#include <iostream>
using namespace std;

int main() {
  int number;
  int total = 0;
  for (int i = 0; i < 5; i += 1) {
    cout << "Enter a number: ";
    cin >> number;
    total += number;
  }
  cout << "The total is: " << total << endl;
}
