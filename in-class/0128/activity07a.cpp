#include <iostream>
#include <string>
using namespace std;

int main() {
  // print a person's name 10 times
  string name;
  cout << "Enter your name: ";
  cin >> name;
  int x = 0;
  while (x < 10) {
    cout << name << endl;
    x = x + 1;
  }
  cout << "Nice to meet you!" << endl;
}