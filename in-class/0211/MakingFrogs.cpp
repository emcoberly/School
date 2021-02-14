#include <iostream>
#include <iomanip>
using namespace std;

void makeFroggie(){
    int userFrogs;
    cout << "How many frogs would you like to have? ";
    cin >> userFrogs;
    for(int i = 1; i <= userFrogs; i++) {
        cout << "Frog " << i << "..." << endl;
        cout << "\t  @..@  " << endl;
        cout << "\t (----) " << endl;
        cout << "\t( >__< )" << endl;
        cout << "\t^^ ~~ ^^" << endl;
    }
}

int main() {
    makeFroggie();
}