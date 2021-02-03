/*************************************************************************
 *
 * In-Class Exercise:  Allows the user to pick a type of problem and then
 *                     displays a random problem of that type, prompting
 *                     the user for an answer and giving feedback on it
 *
 * File Name: drill.cpp
 * Course:    CPTR 141
 */

#include <ctime>    // form time command to use for random seed
#include <iomanip>  // for setw command
#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // seed the random number generator
  srand(time(0));

  // generate two random numbers between 0 and 999 and answer variable
  int x = rand() % 1000;
  int y = rand() % 1000;

  // variables for the user's answer and the correct answer
  int ans, correct;

  // variable for menu choice
  int choice;

  // prompt the user for a type of problem
  cout << "Which type of problem would you like to try?" << endl;
  cout << "  1) Addition" << endl;
  cout << "  2) Subtraction" << endl;
  cout << "  3) Multiplication" << endl;
  cout << "====================" << endl;
  cout << "Enter 1, 2, or 3: ";
  cin >> choice;
  cout << endl;

  // add your switch statement here to display the correct
  //   type of problem and compute the correct answer

  char operation = ' ';

  switch (choice) {
  case 1:
    operation = '+';
    correct = x + y;
    cout << "Addition Problem" << endl;
    break;
  case 2:
    operation = '-';
    correct = x - y;
    cout << "Subtraction Problem" << endl;
    break;
  case 3:
    operation = 'x';
    correct = x * y;
    cout << "Multiplication Problem" << endl;
    break;
  default:
    operation = ' ';
    correct = 0;
    cout << "Invalid Problem Type";
  }

  if (operation != ' ') {
    cout << setw(6) << x << endl;
    cout << " " << operation << setw(4) << y << endl;
    cout << "------" << endl;
    cout << "= ";
    cin >> ans;
  }

  // check the answer and dsiplay result
  if (ans == correct) {
    cout << endl << "Congratulations! You got the right answer." << endl;
  } else {        
    cout << "The correct answer is: " << correct << endl;
  }   

  return 0;
}
