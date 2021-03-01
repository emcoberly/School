/*************************************************************************
 *
 * In-Class Exercise: Arrays vs. Vectors
 *
 * File Name: trollArrays.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cin and cout
#include <string>   // for string variables
#include <vector>   // for vectors
using namespace std;

/*====================================================================
 * Main program
 */

int main() {

  // declare variables
  int numStores;
  char newStore = 'n';
  const int MAX_STORES = 100;
  double prices[MAX_STORES];
  string stores[MAX_STORES];
  int currentIndex = 0;
  string tmpStore;
  double tmpPrice;
  string junk;

  // get numStores of stores and prices
  cout << "How many prices do you wish to record? ";
  cin >> numStores;

  // consume extra endl
  getline(cin, junk);

  // loop to collect information
  for (int i = 0; i < numStores; i++) {

    // get store and price information for new entry
    cout << "Store " << (i + 1) << ": ";
    getline(cin, tmpStore);
    stores[currentIndex] = tmpStore;
    cout << "Price " << (i + 1) << ": ";
    cin >> tmpPrice;
    prices[currentIndex] = tmpPrice;

    // consume extra endl
    getline(cin, junk);
  }

  // do loop to allow new store entry
  do {

    // if this is a new-store instance, prompt
    if (newStore == 'y') {

      // get store and price info for new entry
      cout << endl << "Store " << (currentIndex + 1) << ": ";
      getline(cin, tmpStore);
      stores[currentIndex] = tmpStore;
      cout << "Price " << (currentIndex + 1) << ": ";
      cin >> tmpPrice;
      prices[currentIndex] = tmpPrice;
      currentIndex++;
      // consume extra endl
      getline(cin, junk);
    }

    // loop to find smallest price
    int where = 0;
    double min = prices[0];
    for (int i = 1; i < currentIndex; i++) {
      if (prices[i] < min) {
        where = i;
        min = prices[where];
      }
    }

    // print out cheapest price and store
    cout << endl
         << "The cheapest price is $" << prices[where] << " at "
         << stores[where] << "." << endl;

    // ask about new store
    cout << endl << "Enter a new store (y/n)?";
    cin >> newStore;

    getline(cin, junk);

  } while (newStore == 'y');

  // we are done!
  return 0;
}