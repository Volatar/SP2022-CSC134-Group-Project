// Student.cpp
// SP2022 CSC-134 Group Project
// Group 8

#include "Student.h"
#include <iomanip>
#include <iostream>

using namespace std;

// Taylor Sanderson

// Instructions from instructor:

// Define the member functions of class Student in Student.cpp:

// Initialize static variable number of students to 0 before defining any function. 
static int numStudent = 0;

// Constructor without parameter
Student::Student()
{
    // Initialize non-static data members to default initial value (string – “”, double – 0.0) 
    fName = "";
    lName = "";
    ssn = "";
    for (int i = 0; i < 4; i++)
        scores[i] = 0.0;
    
    // Update the static number of students by increasing 1.
    numStudent++;
}



// Constructor with parameters
Student::Student(string _fName, string _lName, string _ssn, double _scores[4])
{
    // Initialize non-static data members with the parameters. 
    fName = _fName;
    lName = _lName;
    ssn = _ssn;
    for (int i = 0; i < 4; i++)
        scores[i] = _scores[i];

    // Update the static number of students by increasing 1.
    numStudent++;
}



// Destructor
Student::~Student()
{
    // Update the static number of students by decreasing 1.
    numStudent--;
}



// Getter and setter function for each non-static data member.
string Student::getLName()
{
    return lName;
}

string Student::getFName()
{
    return fName;
}

string Student::getSSN()
{
    return ssn;
}

double* Student::getScores()
{
    double *ptr;
    ptr = scores;
    return ptr;
}

void Student::setLName(string _lName)
{
    lName = _lName;
}

void Student::setFName(string _fName)
{
    fName = _fName;
}

void Student::setSSN(string _ssn)
{
    ssn = _ssn;
}

void Student::setScores(double _scores[])
{
    for (int i = 0; i < 4; i++)
        scores[i] = _scores[i];
}


// Value-returning function to calculate and return the average of 4 exam scores.
double Student::averageScore()
{
    double totalScore = 0.0;
    for (int i = 0; i < 4; i++)
        totalScore += scores[i];
    return totalScore / 4;
}


// Void function to display student’s last name, first name, 4 exam scores and average score.
void Student::display()
{
    cout << setw(15) << left << lName;
    cout << setw(15) << left << fName;
    cout << setw(15) << left << ssn;
    for (int i = 0; i < 4; i++)
        cout << setw(10) << right << showpoint << fixed << setprecision(1) << scores[i];
    cout << setw(10) << right << showpoint << fixed << setprecision(1) << Student::averageScore();
}

// Value-returning function which returns the number of student object created.
static int getNumStudent()
{
    return numStudent;
}

// Instructions unclear, made 2000 yew longbows on Oldschool Runescape. Can I turn these in for school credit?
