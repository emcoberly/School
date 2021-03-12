/****************************************************************************
 *
 * hw16: Read a file of Scrabble letter values, a file of words (based on a
 * filename provided on the command line), and output  each word and its
 * points to another file.
 *
 * File Name: scrabble.cpp
 * Name:      Eddie Coberly
 * Course:    CPTR 141
 *
 */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[3]) {
  ifstream finWRD, finLET, finPTS;
  ofstream foutPTS;
  string word;
  int wordVal = 0;

  if (argc != 3) {
    cerr << "ERRROR: You must supply two file names on the command line"
         << endl;
    return 1;
  }

  finWRD.open(argv[1]);
  if (!finWRD.is_open()) {
    cerr << "ERROR: Could not open file " << argv[1] << " for input" << endl;
    return 1;
  }

  finLET.open("letters.txt");
  if (!finLET.is_open()) {
    cerr << "Could not open file \"letters.txt\"" << endl;
    return 1;
  }

  foutPTS.open(argv[2]);
  if (!foutPTS.is_open()) {
    cerr << "ERROR: Could not open file " << argv[2] << " for output" << endl;
    return 1;
  }

  // Load arrays for letters and points
  char letter;
  char letterArray[26];
  int points;
  int pointsArray[26];
  for (int i = 0; i < 26; i++) {
    finLET >> letter >> points;
    letterArray[i] = tolower(letter);
    pointsArray[i] = points;
  }

  // Score words and output
  while (!finWRD.eof()) {
    finWRD >> word;
    wordVal = 0;
    for (int i = 0; i < word.size(); i++) {
      for (int j = 0; j < 26; j++) {
        if (word.at(i) == letterArray[j]) {
          wordVal += pointsArray[j];
        }
      }
    }
    foutPTS << word << " " << wordVal << endl;
  }

  finWRD.close();
  finLET.close();
  foutPTS.close();

  return 0;
}
