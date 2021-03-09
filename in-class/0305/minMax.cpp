/*************************************************************************
 *
 * In-Class Exercise and Demo: Reading and Writing Files
 *
 * File Name: minMax.cpp
 * Course:    CPTR 141
 *
 */

#include <climits>  // for min/max integer
#include <fstream>  // for file input/output
#include <iostream> // for cin and cout
using namespace std;

int main() {

  // declare variables (you may need to add)
  int min = INT_MAX;
  int max = INT_MIN;
  int count = 0;

  ifstream fin;
  int number = 0;

  ofstream fout;
  string filename;

  // open the file
  fin.open("data.txt");
  if (fin.is_open()) {

    // open output file
    do {
      cout << "Enter output file name: ";
      cin >> filename;
      fout.open(filename);
      if (!fout.is_open()) {
        cerr << "Error! File could not be opened." << endl;
      }
    } while (!fout.is_open());

    // read the numbers
    do {
      fin >> number;
      if (fin.fail()) {
        fin.clear();
        fin.ignore(100, '\n');
      } else {
        count++;
        if (number < min) {
          min = number;
        } else if (number > max) {
          max = number;
        }
      }
    } while (!fin.eof());
    fin.close();
    // output to file
    fout << min << endl;
    fout << max << endl;
    fout.close();

    // print the results
    // cout << "Smallest: " << min << endl;
    // cout << "Largest: " << max << endl;
    cout << "Count: " << count << endl;
  }
}
