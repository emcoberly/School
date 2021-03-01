/****************************************************************************
 *
 * hw13: A line information program
 *
 * File Name:  twoPoint.cpp
 * Name:       Eddie Coberly
 * Course:     CPTR 141
 *
 */

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

/*---------------------------------------------------------------------------
 * Prompts the user for a numbered point, in the first parameter, in the form
 *  (x,y) and validates the input before returning it in second and third
 *  parameters.
 */
void getPoint(int, double &, double &);

/*--------------------------------------------------------------------------
 * Takes points (x1,y1), from the first two parameters, and (x2,y2), from the
 *  second two parameters, and computes the x and y coordinates of the
 *  midpoint returning them in the fifth and sixth parameter.  The finds
 *  the length of the line segment and returns it as the function value.
 */
double lineInfo(double, double, double, double, double &, double &);

// The main program
int main() {

  int pointNum = 1;
  double x1, y1, x2, y2, xMid, yMid;
  getPoint(pointNum, x1, y1);
  pointNum++;
  getPoint(pointNum, x2, y2);

  cout << fixed << setprecision(3);
  cout << "The line segment length is: " << lineInfo(x1, y1, x2, y2, xMid, yMid)
       << endl;
  cout << fixed << setprecision(3);
  cout << "The midpoint is: (" << xMid << "," << yMid << ")" << endl;

  return 0;
}

// define functions
void getPoint(int point, double &x, double &y) {
  bool success = true;
  char junk;
  do {
    cout << "Enter a point number " << point << " in the form (x,y): ";
    cin >> junk >> x >> junk >> y >> junk;
    if (cin.fail()) {
      cerr << "Invalid Input.  Please try again." << endl;
      cin.clear();
      cin.ignore(1000, '\n');
    }
  } while (!success);
}

double lineInfo(double x1, double y1, double x2, double y2, double &xMid,
                double &yMid) {
  double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  xMid = (x1 + x2) / 2;
  yMid = (y1 + y2) / 2;
  return length;
}