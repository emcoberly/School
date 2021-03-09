#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string sport;
  string file;
  ifstream fin;
  int count = 1;

  cin >> file;
  fin.open(file);
  if (!fin.is_open()) {
    cout << "Could not open file" << endl;
    return 1;
  }

  while (getline(fin, sport)) {
    sport.at(0) = toupper(sport.at(0));
    cout << "Sport " << count 
         << ": " << sport << endl;
    count++;
  }
  fin.close();
}