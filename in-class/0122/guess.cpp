#include <cstdlib> // for rand and srand commands
#include <ctime>   // form time command to use for random seed
#include <iostream>
using namespace std;

int main() {
  int theNumber;
  int guess1, guess2, guess3;
  bool success = false;

  // pick a random number between 1 and 10
  srand(time(0));
  theNumber = rand() % 10 + 1;

  // prompt for the user guesses
  cout << "I'm thinking of a number between 1 and 10." << endl;
  cout << "You have three guesses: ";
  cin >> guess1 >> guess2 >> guess3;
  cout << endl;

  // set a flag based on comparing the guesses with our number
  //   if(guess1 == theNumber) {
  //       success = true;
  //   }
  //   if(guess2 == theNumber) {
  //       success = true;
  //   }
  //   if(guess3 == theNumber) {
  //       success = true;
  //   }
  if ((guess1 == theNumber) || (guess2 == theNumber) || (guess3 == theNumber)) {
    success = true;
  }

  // respond to the user
  if (success) {
    cout << "You are correct! ";
  } else {
    cout << "You are wrong! ";
  }
  cout << "The number was " << theNumber << "." << endl;

  return 0;
}
