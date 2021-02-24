/*************************************************************************
 *
 * Demonstration: A Banking Example with Global Variables
 *
 * File Name: bankAccount.cpp
 * Course:    CPTR 141
 */

#include <iomanip>   // to control precision
#include <iostream>  // for cin and cout
using namespace std;

/*====================================================================
 * Global variables and functon prototypes
 */

// bank account balance
float balance = 0;
const float TAX_RATE = 0.098;

/*--------------------------------------------------------------------
 * Prints the menu to cout, prompts for input, and returns input char
 */
char menu();

/*--------------------------------------------------------------------
 * Adds the given amount to the balance after subtracting a tithe
 * of 10% of the deposit amount (non-taxable)
 */
void deposit(float amount);

/*--------------------------------------------------------------------
 * Subtracts the given amount (plus possibly a 9.8% sales tax) from
 * balance if there is enough in the account.  If there is not enough
 * in the account, return false and display an error.
 */
bool purchase(float amount, bool taxable);

/*--------------------------------------------------------------------
 * Adds the interest equal to the given rate times the account balance
 * to the account balance
 */
void interest(float rate);

/*--------------------------------------------------------------------
 * Prompts the user for an amount (if rate==false) or a rate (if
 * rate == true) and returns that amount
 */
float getAmount(bool rate);

/*====================================================================
 * Main program
 */

int main() {
    // local variable for choice
    char choice;
    char taxable;

    // set formatting for floating point output
    cout << fixed << showpoint << setprecision(2);

    // infinite loop (until X is pressed)
    while (true) {
        // display menu and get choice
        choice = menu();

        // exit the loop
        if (choice == 'E')
            break;

        // based on that choice...
        if (choice == 'D') {
            deposit(getAmount(false));
        } else if (choice == 'T') {
            if (!purchase(getAmount(false), true))
                cout << "You do not have enough money to make this purchase!"
                     << endl;
        } else if (choice == 'N') {
            if (!purchase(getAmount(false), false))
                cout << "You do not have enough money to make this purchase!"
                     << endl;
        } else if (choice == 'I') {
            interest(getAmount(true));
        } else {
            cout << "Invalid Entry -- Please try again." << endl;
        }

        // extra blank line before next menu
        cout << endl;
    }

    // print final balance and exit
    cout << "Your final balance is: $" << balance << endl;

    return 0;
}

/*====================================================================
 * Function Definitions
 */

char menu() {
    // local copy of choice
    char choice;

    // display menu
    cout << "Your balance is: $" << balance << endl;
    cout << "******************************" << endl;
    cout << "Transation Type:" << endl;
    cout << " (D)eposit" << endl;
    cout << " (T)axable Purchase" << endl;
    cout << " (N)on-taxable Purchase" << endl;
    cout << " (I)nterest" << endl;
    cout << " (E)xit" << endl;
    cout << "Your Choice: ";

    // collect input
    cin >> choice;

    // return input
    return choice;
}

void deposit(float amount) {
    balance += 0.9 * amount;
}

bool purchase(float amount, bool taxable) {
    if (taxable)
        amount += TAX_RATE * amount;
    if (amount <= balance) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

void interest(float rate) {
    balance += rate * balance / 100;
}

float getAmount(bool rate) {
    // temporary variable for amount
    float tmp;

    // collect input, checking for errors
    do {
       
        // clear and ignore 
        cin.clear();
        cin.ignore(1000,'\n');
       
        // print correct message based on rate flag
        cout << ((rate) ? "Enter rate (as percent): " : "Enter amount: $");
       
        // collect and return input
        cin >> tmp;
       
        // print error
        if(!cin) {
           cerr << "Error: Please enter a number" << endl;
        }
       
    } while(!cin);
   
    return tmp;
}