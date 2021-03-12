/*************************************************************************
 *
 * In-Class Demo: Reading and averaging temperatures from a file
 *
 * File Name: averageTemp.cpp
 * Course:    CPTR 141
 *
 */

#include <fstream>  // for file input/output
#include <iostream> // for cin and cout
#include <sstream>  // for string stream
#include <string>   // for strings
using namespace std;

int main() {

  // declare variables
  ifstream fin;
  string currentline;
  string state;
  int temp;

  // open the file
  fin.open("temps.txt");
  if(! fin.is_open()) {
      cout << "Could not open temps.txt" << endl;
      return 1;
  }

  // read a line at a time and process it
  while (getline(fin,currentline)) {
      istringstream lineIn(currentline);
      int count = 0;
      double sum=0;

      lineIn >> state;
      while (lineIn>>temp) {
          sum += temp;
          count++;
      }
  cout << "State: " << state << ", Temp: " << (sum / count) << endl;
  }

}
