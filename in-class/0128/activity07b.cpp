#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string word;
    char doAgain = 'y';
    while(doAgain == 'y') {
        cout << "Enter a word: ";
        cin >> word;
        cout << "The first letter is: " << word.at(0) << endl;
        cout << "Type 'y' to enter another word, anything else to quit. ";
        cin >> doAgain;
    }
    cout << "Done!" << endl;
//   int number;
//   cout << "Enter an integer between 1 and 10: ";
//   cin >> number;
//   while(number > 10 || number < 1) {
//       cout << "That is not between 1 and 10.\nPlease try again: ";
//       cin >> number;
//   }
//   cout << "You have entered a valid number!\nYour number is: " << number << endl;

//   return 0;
}