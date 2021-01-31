/*************************************************************************
 *
 * hw05: Implement the classic game "Rock-Paper-Scissors-Lizard-Spock"
 *
 * File Name: rockPaperScissorsLizardSpock.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 *
 */

#include <cstdlib>  // for rand and srand commands
#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // Declaring variables
  int seed, userChoice, computerChoice;
  string compChoice2;
  bool userWin = false;

  // Gathering seed
  cout << "Enter a random seed: ";
  cin >> seed;
  srand(seed);
  computerChoice = rand() % 5;

  // Prompt User input
  cout << "\nThe computer has chosen and so must you." << endl;
  cout << "0) Rock\n1) Paper\n2) Scissors\n3) Lizard\n4) Spock" << endl;

  // Verify User chose appropriate number
  do {
    cout << "Make your choice: ";
    cin >> userChoice;
    if (!isdigit(userChoice) && (userChoice > 4 || userChoice < 0)) {
      cout << "Your answer must be a digit 0-4." << endl;
    }
  } while (!isdigit(userChoice) && (userChoice > 4 || userChoice < 0));

  // Determine if User won
  switch (userChoice) {
  case 0:
    if (computerChoice == 2 || computerChoice == 3) {
      userWin = true;
    }
    break;
  case 1:
    if (computerChoice == 0 || computerChoice == 4) {
      userWin = true;
    }
    break;
  case 2:
    if (computerChoice == 1 || computerChoice == 3) {
      userWin = true;
    }
    break;
  case 3:
    if (computerChoice == 1 || computerChoice == 4) {
      userWin = true;
    }
    break;
  case 4:
    if (computerChoice == 0 || computerChoice == 2) {
      userWin = true;
    }
    break;
  default:
    break;
  }

  // Convert Computer choice from integer to string
  switch (computerChoice) {
  case 0:
    compChoice2 = "Rock";
    break;
  case 1:
    compChoice2 = "Paper";
    break;
  case 2:
    compChoice2 = "Scissors";
    break;
  case 3:
    compChoice2 = "Lizard";
    break;
  case 4:
    compChoice2 = "Spock";
    break;
  default:
    break;
  }

  // Victory/Tie/Loss message
  if (userWin) {
    cout << "The computer chose " << compChoice2 << " -- you win!" << endl;
  } else if (userWin == false && userChoice == computerChoice) {
    cout << "The computer chose " << compChoice2 << " -- it's a tie!" << endl;
  } else {
    cout << "The computer chose " << compChoice2 << " -- you lose!" << endl;
  }

  return 0;
}