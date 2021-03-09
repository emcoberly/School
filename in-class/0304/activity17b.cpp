#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin;
  int number;
  int sum;

  fin.open("numbersTwo.txt");
  do {
    fin >> number;
    if( fin.fail() ) {
        fin.clear();
        fin.ignore(100,'\n');
    } else {
        cout << "Number: " << number << endl;
        sum += number;
    }
  } while( number != 6 );
  cout << "The sum is: " << sum << endl;
  fin.close(); 
}