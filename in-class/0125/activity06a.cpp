#include <iostream>
using namespace std;

int main() {
  float originalPrice, salePrice;
  cout << "Enter the original cost of the item: ";
  cin >> originalPrice;
  cout << "Enter the sale price: ";
  cin >> salePrice;
  int percentOff = ((originalPrice - salePrice) / originalPrice) * 100;
  cout << "Percent off: " << percentOff << "%" << endl;
  if (percentOff >= 50) {	
    cout << "You found a great deal!" << endl;
  }   
}