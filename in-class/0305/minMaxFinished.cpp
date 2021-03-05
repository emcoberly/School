/*************************************************************************
 *
 * In-Class Exercise and Demo: Reading and Writing Files
 *
 * File Name: minMax.cpp
 * Course:    CPTR 141
 *
 * Assignment:
 *   1. Prompt user for both an input and output file name
 *      and do error checking.
 *   2. Print the smallest and largest numbers to the console
 *      and the total number of integers to the output file
 *  
 *   Stretch Goal: After reading values from the input file,
 *     prompt the user to enter additional integers and
 *     process them until the user enters a non-integer value.
 */

#include <fstream>  // for file input/output
#include <iostream> // for cin and cout
#include <climits>  // for min/max integer
using namespace std;

int main() {

  // declare variables
  int min = INT_MAX;
  int max = INT_MIN;
  int number = 0;
  int count = 0;
  ifstream fin;
  ofstream fout;
  string filename;

  fin.open("data.txt");
   
  // prompt for output file
  do {        
    cout << "Enter output filename: ";
    cin >> filename;
    fout.open(filename);
    if (! fout.is_open())
       cerr << "Error! File could not be opened." << endl;
  } while (! fout.is_open());
   

  // read the numbers
  do {
    fin >> number;
    if (fin.fail()) {
      cerr << "Error! Invalid integer at count " << count << endl;
      fin.clear();
      fin.ignore(100, '\n');
    } else {
      count++;
      if (number > max) {
        max = number;
      }
      if (number < min) {
        min = number;
      }
    }
  } while (!fin.eof());
  fin.close();
   
  // print output to file
  fout << min << endl;
  fout << max << endl;
  fout.close();

  // print output to console
  cout << "Count: " << count << endl;
   
}
