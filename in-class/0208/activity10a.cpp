#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

  vector<int> quizScores = {8,6};
  vector<string> profNames(4);

  profNames.at(0) = "Carman";
  profNames.at(1) = "Foster";
  profNames.at(2) = "Duncan";

  cout << quizScores.size() << endl;
  cout << profNames.at(1) << endl;

  return 0;
}