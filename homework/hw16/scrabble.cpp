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
  ifstream finWRD, finLET;
  ofstream foutPTS;
  char letter;
  string word;
  int points;
  int wordVal = 0;

  if (argc != 3) {
    cerr << "ERROR: You must supply two file names on the command line" << endl;
    return 1;
  }

  finWRD.open(argv[1]);
  if (!finWRD.is_open()) {
    cerr << "Could not open file " << argv[1] << endl;
    return 1;
  }

  finLET.open("letters.txt");
  if (!finLET.is_open()) {
    cerr << "Could not open file \"letters.txt\"" << endl;
    return 1;
  }

  foutPTS.open(argv[2]);
  if (!foutPTS.is_open()) {
    cerr << "Could not open file " << argv[2] << endl;
    return 1;
  }

  while (!finWRD.eof()) {
    finWRD >> word;
    for (int i = 0; i < word.size(); i++) {
      while (!finLET.eof()) {
        finLET >> letter;
        if (word.at(i) == letter) {
          finLET.ignore(1, ' ');
          wordVal += letter;
          finLET.clear();
          break;
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
