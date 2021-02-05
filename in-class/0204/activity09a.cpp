#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "What is your name? ";
  cin >> name;
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 5; j++) {
      cout << name << " ";
    }
    cout << endl;
  }

  return 0;
}
