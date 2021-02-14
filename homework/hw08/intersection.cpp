/****************************************************************************
 *
 * hw08: Prompt the user to enter two sets of lowercase alphabet characters,
 *       store them in vectors, and then display the intersection.
 *
 * File Name: intersection.cpp
 * Course:    CPTR 141
 *
 */

#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // define variables
  bool invalidElement = true;
  char userElement;
  char doAgain;
  int setIndex;

  // welcome message
  cout << "Welcome to the Intersection Calculator(TM)" << endl;
  cout << "==========================================" << endl;
  cout << "Please enter two sets of lowercase alphabet characters." << endl
       << endl;
  do {
    // get set one
    vector<char> userSet1 = {};
    setIndex = -1;
    cout << "Set One (enter ! when done):" << endl;
    cout << "----------------------------" << endl;
    do {

      invalidElement = true;
      setIndex++;
      userSet1.resize(setIndex + 1);
      while (invalidElement) {
        cout << "  Element: ";
        cin >> userElement;
        if (islower(userElement)) {
          userSet1.at(setIndex) = userElement;
          invalidElement = false;
        } else if (userElement == '!') {
          userSet1.pop_back();
          invalidElement = false;
        } else {
          cout << "Error: Only lower case alphabet letters are allowed."
               << endl;
        }
      }

    } while (userElement != '!');

    // get set two
    vector<char> userSet2 = {};
    setIndex = -1;
    cout << "\nSet Two (enter ! when done):" << endl;
    cout << "----------------------------" << endl;
    do {

      invalidElement = true;
      setIndex++;
      userSet2.resize(setIndex + 1);
      while (invalidElement) {
        cout << "  Element: ";
        cin >> userElement;
        if (islower(userElement)) {
          userSet2.at(setIndex) = userElement;
          invalidElement = false;
        } else if (userElement == '!') {
          userSet2.pop_back();
          invalidElement = false;
        } else {
          cout << "Error: Only lower case alphabet letters are allowed."
               << endl;
        }
      }

    } while (userElement != '!');

    // find and display the intersection of sets one and two
    vector<char> userIntersect = {};
    setIndex = -1;
    for (int i = 0; i < userSet1.size(); i++) {
      for (int j = 0; j < userSet2.size(); j++) {
        if (userSet2.at(j) == userSet1.at(i)) {
          setIndex++;
          userIntersect.resize(setIndex + 1);
          userIntersect.at(setIndex) = userSet1.at(i);
        }
      }
    }

    cout << "\nThe intersection of { ";
    for (int i = 0; i < userSet1.size(); i++) {
      cout << userSet1.at(i);
      if (i < userSet1.size() - 1) {
        cout << ", ";
      }
    }
    cout << " } and { ";
    for (int i = 0; i < userSet2.size(); i++) {
      cout << userSet2.at(i);
      if (i < userSet2.size() - 1) {
        cout << ", ";
      }
    }
    cout << " } is { ";
    for (int i = 0; i < userIntersect.size(); i++) {
      cout << userIntersect.at(i);
      if (i < userIntersect.size() - 1) {
        cout << ", ";
      }
    }
    cout << " }." << endl << endl;

    // prompt the user to see if they want to do another
    cout << "Would you like to compute another intersection (y/n)? ";
    cin >> doAgain;
  } while (doAgain == 'y');

  // end the program
  return 0;
}