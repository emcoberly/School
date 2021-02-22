#include <iomanip>
#include <iostream>
using namespace std;

double balance = 0;

char getChoice() {
  char userChoice;
  cout << "Balance: $" << balance << endl;
  cout << "(d)eposit, (w)ithdraw, (e)xit: ";
  cin >> userChoice;
  return userChoice;
}

void deposit(double amount) {
  balance += amount;
}

bool withdraw(double amount) {
  bool success = false;
  if (amount < balance) {
    balance -= amount;
    success = true;
  }
  return success;
}

int main() {
  char choice;
  double value;
  cout << "Balance Tracker v0.1" << endl 
      << endl << fixed << showpoint
      << setprecision(2);
  do {
    choice = getChoice();
    if (choice == 'd') {
      cout << "Enter amount to deposit $";
      cin >> value;
      deposit(value);
    } else if (choice == 'w') {
      cout << "Enter amount to withdraw $";
      cin >> value;
      if (!withdraw(value)) {
        cout << "Insuficient Funds!" << endl;
      }
    }
  } while (choice != 'e');
  cout << "Goodbye!" << endl;
}