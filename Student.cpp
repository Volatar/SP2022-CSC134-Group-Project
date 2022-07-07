// Student.cpp
// SP2022 CSC-134 Group Project
// Group 8

#include "Student.h"

// Instructions from instructor:

// Define the member functions of class Student in Student.cpp:


// Initialize static variable number of students to 0 before defining any function. 


// Constructor without parameter
// Initialize non-static data members to default initial value (string – “”, double – 0.0)


// Constructor with parameters
// Initialize non-static data members with the parameters. 
// Update the static number of students by increasing 1.


// Destructor
// Update the static number of students by decreasing 1.


// Getter and setter function for each non-static data member.
// The getter function for scores array getScores() should return a doble array of scores, the return type could be a pointer to double: 
double* Student::getScores()
// The setter function for scores array setScores should request a double array as parameter:
void Student::setScores(double _scores[])


// Value-returning function to calculate and return the average of 4 exam scores.
// Use for loop to iterate the scores array to access each exam score.
// average score = total of 4 score / 4


// Void function to display student’s last name, first name, 4 exam scores and average score.
// Each student’s information should be displayed as this format:
// An image is included in the original document, please refer there for it