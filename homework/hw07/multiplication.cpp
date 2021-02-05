/****************************************************************************
 *
 * hw07: Create a multiplication table and save it to a file.
 *
 * File Name:  multiplication.cpp
 * Name:       Eddie Coberly
 * Course:     CPTR 141
 *
 */

#include <iomanip>  // for setw
#include <iostream> // for cout and cin
using namespace std;

int main() {

  int numCol, numRow;
  do {
    cout << "Enter desired number of columns and rows: ";
    cin >> numCol >> numRow;
    if (numCol > 10 || numCol < 1 || numRow > 10 || numRow < 1) {
      cout << "Please enter two integers in the range of 1-10 separated by a "
              "space."
           << endl;
    }
  } while (numCol > 10 || numCol < 1 || numRow > 10 || numRow < 1);

  cout << "   *  ";
  for (int i = 1; i <= numCol; ++i) {
    cout << setw(4) << i;
  }
  cout << endl << "  ____";
  for (int j = 1; j <= numCol; ++j) {
    cout << " ___";
  }
  cout << endl;
  for (int k = 1; k <= numRow; ++k) {
    cout << setw(4) << k << " |";
    for (int l = 1; l <= numCol; ++l) {
      cout << setw(4) << k * l;
    }
    cout << endl;
  }

  return 0;
}