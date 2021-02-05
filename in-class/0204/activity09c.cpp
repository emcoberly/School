#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int numRows, numCols;
  cout << "Enter the number of rows: ";
  cin >> numRows;
  numCols = (numRows + 1) / 2;
  for (int j = 1; j <= numRows; j++) {
    for (int i = 1; i <= j; i++) {
        if(j <= numCols) {
            cout << i << " ";
        } else {
            cout << numCols - i << " ";
        }
    }
    cout << endl;
  }

// double score1, score2, score3, avgScore;
// string studentName;
// for(int i = 0; i < 3; ++i) {
//     cout << "Enter name of student " << i + 1 << ": ";
//     cin >> studentName;
//     cout << "Enter score 1: ";
//     cin >> score1;
//     cout << "Enter score 2: ";
//     cin >> score2;
//     cout << "Enter score 3: ";
//     cin >> score3;
//     avgScore = (score1 + score2 + score3) / 3;
//     cout << "Name: " << studentName << endl;
//     cout << "Average: " << fixed << setprecision(2) << avgScore << endl << endl;

// }

  return 0;
}
