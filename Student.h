// Student.h
// SP2022 CSC-134 Group Project
// Group 8

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

// Taylor Sanderson

// Instructions from instructor:

// Declare the following data members and member function prototypes of class Student in Student.h:
class Student
{
private:
    // Data members:
    string fName;  // First name (string)
    string lName;  // Last name (string)
    string ssn;  // Social Security Number (string)
    double scores[4];  // Array of 4 exam scores (double)
    static int numStudent;// Number of student (static int) 

public:
    // Member functions:
    // Constructor without parameter
    Student();

    // Constructor with parameters
    Student(string fName, string lName, string ssn, double scores[4]);

    // Destructor
    ~Student();

    // Getter and setter function for each non-static data member.
    string getLName();
    string getFName();
    string getSSN();
    void getScores(double scoresIO[4]);
    void setLName(string _lName);
    void setFName(string _fName);
    void setSSN(string _ssn);
    void setScores(double scoresIO[4]);

    // Value-returning function which calculates and returns the average of 4 exam scores.
    double averageScore();

    // Void function which displays a student’s last name, first name, 4 exam scores and average score.
    void display();

    // Value-returning function which returns the number of student object created.
    static int getNumStudent();
};


#endif