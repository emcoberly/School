#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  ostringstream odd,even;
  string oddList, evenList;
  int theNumber;

  int count = 0;
  cout << "Enter a list of integers to classify. A negative number quits" << endl;
  cin >> theNumber;

  even << "Even numbers: ";
  odd << "Odd numbers: ";
  while (theNumber >= 0) {
    if (theNumber%2==0) {
      even << theNumber  << " ";
    } else {
        odd << theNumber << " ";
    }
    cin >> theNumber;
  }
  
  cout << even.str() << endl;
  cout << odd.str() << endl;
}
