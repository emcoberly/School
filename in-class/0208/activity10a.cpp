#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

  vector<int> quizScores = {10,10};
  vector<string> profNames(4);
  vector<double> homeworkAvg = {91.6,79.3,82.4};
  int quizAvg = (quizScores.at(0) + quizScores.at(1)) / 2;

  profNames.at(0) = "Carman";
  profNames.at(1) = "Foster";
  profNames.at(2) = "Duncan";

  profNames.at(3) = profNames.at(2);
  profNames.at(2) = profNames.at(1);
  profNames.at(1) = profNames.at(0);
  profNames.at(0) = "Aamodt";

  cout << quizScores.size() << endl;
  cout << profNames.at(1) << endl;
  cout << "There are " << profNames.size() << " CS professors at WWU." << endl;
  cout << "Total number of quiz points:  " << quizScores.at(0) + quizScores.at(1) << endl;

  return 0;
}