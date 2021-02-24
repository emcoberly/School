/****************************************************************************
 *
 * Asgn.13: Three functions for computing area
 *
 * File Name:  areaFunctions.h
 * Course:     CPTR 141
 */

extern const double PI;

/*=====================================================================================
 * FUNCTION: area(radius)
 *   Return the area of a circle of a given radius, using the global costant PI
 *   as part of the computaton
 *    - Precondition: radius is a number representing the radius of a circle
 *    - Postcondition: returns the area of a circle of the given radius or -1 if no such
 *      circle exists (i.e. negative radius)
 */
double area(double);

/*=====================================================================================
 * FUNCTION: area(length, width)
 *   Returns the area of a rectangle of the given length and width
 *    - Precondition: length and width represent the dimensions of a rectangle
 *    - Postcondition: returns the area of a rectangle of the given length and width or  
 *      -1 if no such rectangle exists (i.e. negative lengths)
 */
double area(double,double);

/*=====================================================================================
 * FUNCTION: area(side1, side2, side3)
 *   Returns the area of triangle of side length side1, side2, and side3
 *    - Precondition: side1, side2, and side3 lengths of the triangle sides
 *    - Postcondition: returns the area of a triangle with the given side lengths or 
 *      returns -1 if no such triangle exists (i.e. one or more negative lengths or
 *      the sum of the two smaller lengths is less than the larger legnth)
 */
double area(double,double,double);