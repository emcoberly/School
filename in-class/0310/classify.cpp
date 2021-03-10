#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  ostringstream letterList;
  char letter;
  int count = 0;
  cout << "Enter one letter at a time, '!' to quit" << endl;
  do {
    cout << "Letter " << ++count << ": ";
    cin >> letter;
    if (letter == '!')
      break;
    letterList << letter << " ";
  } while (true);
  string theList = letterList.str();
  cout << "Your list is: " << theList << endl;
}
