#include <iostream>
using namespace std;

int main() {
  int number;
  string name;
  cout << "Enter Number: ";
  cin >> number;
  cout << "Enter Name: ";
  cin >> name;
  for (int i = 0; i < number; i++) {
    cout << name << endl;
  }
}