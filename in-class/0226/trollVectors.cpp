/*************************************************************************
 *
 * In-Class Exercise: Arrays vs. Vectors
 *
 * File Name: trollVectors.cpp
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
  vector<double> prices;
  vector<string> stores;
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
    stores.push_back(tmpStore);
    cout << "Price " << (i + 1) << ": ";
    cin >> tmpPrice;
    prices.push_back(tmpPrice);

    // consume extra endl
    getline(cin, junk);
  }

  // do loop to allow new store entry
  do {

    // if this is a new-store instance, prompt
    if (newStore == 'y') {

      // get store and price info for new entry
      cout << endl << "Score " << (stores.size() + 1) << ": ";
      getline(cin, tmpStore);
      stores.push_back(tmpStore);
      cout << "Price " << (stores.size() + 1) << ": ";
      cin >> tmpPrice;
      prices.push_back(tmpPrice);

      // consume extra endl
      getline(cin, junk);
    }

    // loop to find smallest price
    int where = 0;
    double min = prices.at(0);
    for (int i = 1; i < prices.size(); i++) {
      if (prices.at(i) < min) {
        where = i;
        min = prices.at(where);
      }
    }

    // print out cheapest price and store
    cout << endl
         << "The cheapest price is $" << prices.at(where) << " at "
         << stores.at(where) << "." << endl;

    // ask about new store
    cout << endl << "Enter a new store (y/n)?";
    cin >> newStore;

    getline(cin, junk);

  } while (newStore == 'y');

  // we are done!
  return 0;
}