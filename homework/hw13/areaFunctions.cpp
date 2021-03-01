/****************************************************************************
 *
 * Asgn.13: Three functions for computing area
 *
 * File Name:  area.cpp
 * Course:     CPTR 141
 */

#include <cmath> // for sqrt
using namespace std;

#include "areaFunctions.h"

/* implement your functios here */
double area(double radius) {
  if (radius > 0) {
    return M_PI * pow(radius, 2);
  } else {
    return -1;
  }
}

double area(double length, double width) {
  if (length > 0 && width > 0) {
    return length * width;
  } else {
    return -1;
  }
}

double area(double side1, double side2, double side3) {
  bool validTriangle = ((side1 + side2 > side3) | (side1 + side3 > side2) |
                        (side2 + side3 > side1));
  double h = (side1 + side2 + side3) /
             2; // h is for Heron's formula, used for area when only given sides
  if (side1 > 0 && side2 > 0 && side3 > 0 && validTriangle) {
    return sqrt(h * (h - side1) * (h - side2) * (h - side3));
  } else {
    return -1;
  }
}