#include <iostream>
#include <ctime>
using namespace std;

// Print celebratory rocket

/* ANSWER A */ printRocket() {
  cout << "Blast-off!" << endl;
  cout << "  ^"    << endl;
  cout << " /*\\"  << endl;
  cout << "/***\\" << endl;
  cout << "|***|"  << endl;
  cout << "|***|"  << endl;
  cout << "|#|#|"  << endl;
  /* ANSWER B */
}

// give problem and check answer
bool giveProblem(/* ANSWER C */) {
  int studentAns;
  int correctAns = num1 + num2;
  cout << num1 << "+" << num2 << "=";
  cin >> studentAns;
  /* ANSWER D */
}

int main() {
  srand(time(0)); // seed random num
  int numCorrect = 0;
  for (/* ANSWER E */) {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    if (/* ANSWER F */) {
      cout << "Correct!" << endl;
      numCorrect++;
    } else {
      cout << "Incorrect! It is " << (num1 + num2) << endl;
    }
  }
  if (/* ANSWER G */) {
    /* ANSWER H */
  } else {
    cout << "You got " << numCorrect << " correct." << endl;
  }
}