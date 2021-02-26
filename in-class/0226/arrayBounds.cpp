/*************************************************************************
 *
 * Exercise: Array Bounds
 *
 * File Name: arrayBounds.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> // for cin and cout
using namespace std;

int main() {
  const int MAX_SIZE = 3;
  int topPadding[MAX_SIZE];
  int scores[MAX_SIZE] = {0, 0, 0};
  int bottomPadding[MAX_SIZE];

  for (int i = 0; i < MAX_SIZE; ++i) {
    topPadding[i] = 0;
    bottomPadding[i] = 0;
  }
  cout << endl;

  for (int i = 0; i <= MAX_SIZE; i++) {
    scores[i] = i+1;
  }

  cout << "Top padding:    ";
  for (int i = 0; i < MAX_SIZE; ++i) {
    cout << topPadding[i] << ", ";
  }
  cout << endl;
  cout << "Bottom padding: ";
  for (int i = 0; i < MAX_SIZE; ++i) {
    cout << bottomPadding[i] << ", ";
  }
  cout << endl;

  return 0;
}
