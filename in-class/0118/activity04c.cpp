#include <iostream>
using namespace std;

int main() {
  // ----------------------------------------- declare variables
  double floatOne,floatTwo;
  int integer = 35;  
  // ----------------------------------------- part I
  floatOne = integer;
  cout << "original number: " << integer << endl;
  cout << "after conversion: " << floatOne << endl << endl;   
  // ----------------------------------------- part II
  floatOne = 3.9;
  floatTwo = static_cast<int>(floatOne);
  cout << "second number: " << floatOne << endl;
  cout << "after conversion: " << floatTwo << endl;
}