#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  for (int x = 0; x < 10; x += 1) {
    cout << name << endl;
  }
  cout << "Nice to meet you!" << endl;
}
