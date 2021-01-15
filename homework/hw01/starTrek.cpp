/*************************************************************************
 *
 * hw01: A mad-libs introduction to StarTrek
 *
 * File Name: starTrek.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 *
 */

#include <iostream>  // included for cin and cout processing
using namespace std;

int main() {
    // define your variables below
    string userNoun1;
    string userNoun2;
    string userNum;
    string userTime;
    string userAdj1;
    string userAdj2;
    string userVerb;

    // gather user input using cin << variableName
    cout << "Enter a noun: ";
    cin >> userNoun1;
    cout << "Enter a second noun: ";
    cin >> userNoun2;
    cout << "Enter a number: ";
    cin >> userNum;
    cout << "Enter a measure of time: ";
    cin >> userTime;
    cout << "Enter an adjective: ";
    cin >> userAdj1;
    cout << "Enter a second adjective: ";
    cin >> userAdj2;
    cout << "Enter a verb: ";
    cin >> userVerb;

    // print out the intro
    cout << endl << userNoun1 << ", the final frontier" << endl;
    cout << "These are the voyages of the " << userNoun2 << " Enterprise" << endl;
    cout << "Its seven " << userTime << " mission" << endl;
    cout << "To explore " << userAdj1 << " new worlds" << endl;
    cout << "To seek out " << userAdj2 << " life" << endl;
    cout << "And " << userAdj2 << " civilizations" << endl;
    cout << "To boldly " << userVerb << " where no one has gone before" << endl;

    return 0;
}
