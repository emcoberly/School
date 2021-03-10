#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin;
  int number;

  fin.open("numbers.txt");
  do {
    fin >> number;
    cout << "Number: " << number << endl;
  } while( number != 6 && ! fin.eof() );
  fin.close();
}