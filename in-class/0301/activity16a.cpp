#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
//   vector<string> homeworkNames = {"Variables", "If-Else", "Loops", "Vectors", "Arrays"};
//   vector<int> pointsPossible = {25, 35, 15, 20, 30};
//   int numStudents = 40;

//   for (int i = 0; i < 5; i++) {
//     cout << homeworkNames.at(i) << ": " << pointsPossible.at(i) << endl;
//   }
//   cout << pointsPossible.at(5) << endl;

  int tableTwo[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
  int row = 4;
  int k;
  cin >> k;
  for (int i = 0; i < row; i++) {
      cout << tableTwo[i][k-1] << endl;
  }
}