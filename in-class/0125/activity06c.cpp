#include <iostream>
using namespace std;

int main() {
  int grade;
  cout << "Enter your grade: ";
  cin >> grade;
  if (grade >= 90) {
    cout << "Very Good!" << endl;
  } else {
    if (grade >= 60) {
      cout << "Satisfactory." << endl;
    } else {
      cout << "Poor." << endl;
    }
  }
}