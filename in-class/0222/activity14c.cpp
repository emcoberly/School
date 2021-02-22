#include <iostream>
#include <string>
using namespace std;

string str = "Global Scope";

void myFunc() {
  cout << str << endl;
  string str = "myFunc Scope";
  cout << str << endl;
}

int main() {
  string str = "Main Scope";
  if (true) {
    cout << str << endl;
    string str = "If Scope";
    myFunc();
    cout << str << endl;
  }
  cout << str << endl;
}