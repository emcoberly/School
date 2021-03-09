/*************************************************************************
 *
 * In-Class Exercise and Demo: Building a Gradebook
 *
 * File Name: gradeBook.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream> // for cin and cout
using namespace std;
const int STUDENTS = 5;
const int SCORES = 4;

// Pre: data is an array of length size
// Post: returns the average of those numbers
double average(int data[], int size);

/*====================================================================
 * Main program
 */

int main() {

  // define a 2D array of scores
  int grades[STUDENTS][SCORES] = {
      {73, 62, 42, 59}, // grades for student 1
      {91, 97, 83, 81}, // grades for student 2
      {78, 82, 91, 90}, // grades for student 3
      {83, 74, 69, 72}, // grades for student 4
      {95, 74, 83, 89}  // grades for student 5
  };

  // Find and display the lowest score for each student
  cout << "Lowest Scores" << endl;
  for (int student = 0; student < STUDENTS; student++) {
    int min = 100;
    for (int score = 0; score < SCORES; score++) {
      if (grades[student][score] < min) {
        min = grades[student][score];
      }
    }
    cout << "  Studnet " << (student + 1) << ": " << min << endl << endl;
  }

  // Find and display the highest overall score
  cout << "Highest Overall Score: ";
  int max = 0;
  for (int student = 0; student < STUDENTS; student++) {
    for (int score = 0; score < SCORES; score++) {
      if (max < grades[student][score]) {
        max = grades[student][score];
      }
    }
  }
  cout << max << endl << endl;

  // Print averages
  for (int student = 0; student < STUDENTS; student++) {
    cout << "Average for student " << student + 1 << ": "
         << average(grades[student], SCORES) << endl;
  }

  // end program
  return 0;
}

double average(int data[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += data[i];
  }
  return sum / size;
}