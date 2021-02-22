#include <iostream>
using namespace std;

// Functon prototypes
int Maximum(int, int);
int Maximum(int, int, int);
double Maximum(double, double);
double Maximum(double, double, double);
int Maximum(int, double, double);
short int Maximum(short int, int, int);

// Main Program
int main() {
  cout << Maximum(5, 1, 3) << endl;
  cout << Maximum(5, 1.5, 3) << endl;
  cout << Maximum(5, 3) << endl;
  cout << Maximum(2.3, 4.7) << endl;
}

// Function Definitions
int Maximum(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}

int Maximum(int num1, int num2, int num3) {
  return Maximum(Maximum(num1, num2), Maximum(num2, num3));
}

double Maximum(double num1, double num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}

double Maximum(double num1, double num2, double num3) {
  return Maximum(Maximum(num1, num2), Maximum(num2, num3));
}