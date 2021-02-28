#include <iostream>
#include <string>
using namespace std;

int main() {
  string homeworkNames[5] = {"Variables", "If-Else", "Loops", "Vectors", "Arrays"};
  int pointsPossible[5] = {25, 35, 15, 20, 30};
  int numStudents = 40;

  for (int i = 0; i < 5; i++) {
    cout << homeworkNames[i] << ": " << pointsPossible[i] << endl;
  }
  cout << pointsPossible[5] << endl;
}