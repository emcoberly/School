#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void printArea(double radius){
   double area = 3.14159 * pow(radius,2);
   cout << fixed << setprecision(2);
   cout << "The area of a circle with radius "
        << radius << " is " << area << endl;
}

void printDiameter(double radius){
    double diameter = 2.0 * radius;
    cout << fixed << setprecision(2);
    cout << "The diameter of a circle with radius " << radius << " is " << diameter << endl;
}

int main() {
//    printArea(3);
//    printArea(4.5);
    double userRadius;
    cout << "Enter the radius of a circle: ";
    cin >> userRadius;
    printArea(userRadius);
    printDiameter(userRadius);
}