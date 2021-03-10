#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string sport;
  ifstream fin;
  int count = 1;

  fin.open("sports.txt");
  if (!fin.is_open()) {
    cout << "Could not open file" << endl;
    return 1;
  }

  while (fin >> sport) {
    sport.at(0) = toupper(sport.at(0));
    cout << "Sport " << count 
         << ": " << sport << endl;
    count++;
  }
  fin.close();
}