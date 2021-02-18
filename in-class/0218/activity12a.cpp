#include <iostream>
using namespace std;

int getSmaller(int num1, int num2) {
  int smaller;
  if (num1 < num2) {
    smaller = num1;
  } else {
    smaller = num2;
  }
  return smaller;
}

int main() {
  int userNum1, userNum2;
  cout << "Enter two numbers separated by a space: ";
  cin >> userNum1 >> userNum2;
  int smallerNum = getSmaller(userNum1, userNum2);
  cout << "The smaller number is " << smallerNum << endl;
}
