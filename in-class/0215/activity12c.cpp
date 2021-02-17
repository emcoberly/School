#include <iostream>
#include <string>
using namespace std;

string getMessage(int num1, int num2) {
    string messageGotten;
    if (num1 == num2) {
        messageGotten = "Congratulations! You guessed it.\n";
    } else if (num1 < num2) {
        messageGotten =  "I'm sorry, your number is smaller.\n";
    } else {
        messageGotten = "I'm sorry, your number is larger.\n";
    }
    return messageGotten;
}

int main() {
  int userNum, compNum;
  char tryAgain;
  srand(time(0));
  do {
    do {
      cout << "Enter a number from 1 to 5: ";
      cin >> userNum;
      if (userNum < 1 || userNum > 5) {
        cout << "Invalid Number!" << endl;
      }
    } while (userNum < 1 || userNum > 5);
    compNum = rand() % 5 + 1;
    cout << "Computer number: "
         << compNum << endl;
    cout << "Your number: " 
         << userNum << endl;
    cout << getMessage(userNum, compNum);
    cout << "Try again (y/n)? ";
    cin >> tryAgain;
  } while (tryAgain == 'y');
}