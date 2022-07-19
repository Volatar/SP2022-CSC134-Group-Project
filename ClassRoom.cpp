// ClassRoom.cpp
// SP2022 CSC-134 Group Project
// Group 8

#include "ClassRoom.h"
#include <iostream>

using namespace std;

// Mason Scarbro:

// Instructions from instructor:

// Define the member functions of class ClassRoom in ClassRoom.cpp:

// Constructor with 1parameter 
// Requests classroom’s name as parameter.
ClassRoom::ClassRoom(string _className)
{
	className = _className; // Initialize classroom name with parameter value.
	numOfStudent = 0; // Initialize number of students as 0.
}

// Getter and setter function for each data member.

string ClassRoom::getClassName()
{
	return className;
}

int ClassRoom::getNumOfStudent()
{
	return numOfStudent;
}

Student* ClassRoom::getStudentArray()
{
	Student* ptr;
	ptr = studentArray;
	return ptr;
}

void ClassRoom::setClassName(string _className)
{
	className = _className;
}

void ClassRoom::setNumOfStudent(int _numOfStudent)
{
	numOfStudent = _numOfStudent;
}

void ClassRoom::setStudentArray(Student _studentArray[], int _numStudent)
{
	for (int i = 0; i < _numStudent; i++) studentArray[i] = _studentArray[i];
}

// Void function which creates an array of Student objects by reading student data from input data file. 
void ClassRoom::popArray(string _inFileName) 
{
	string fName, lName, ssn;
	double scores[4];
	fstream _inFile;
	_inFile.open(_inFileName, ios::in);
	while (_inFile)
	{
		// Create a Student object by reading student record from the data file.
		_inFile >> fName >> lName;
		for (int i = 0; i < 4; i++) _inFile >> scores[i];
		Student student(fName, lName, ssn, scores);
		
		// Add the student object in an array of Student.
		studentArray[numOfStudent] = student;
		
		// Count the number of student objects created.
		numOfStudent = student.getNumStudent();
	}
}

// Norma Hernandez-Cruz from this point:

// Void function which sorts array of student objects by student average score.
// Need to compare each student’s average score.
// May use the selection sorting code or other sorting algorithm.

void ClassRoom::sortArrayByAvg()
{
	int index;
	Student tempStudent;

	for (int i = 0; i < numOfStudent; i++)
	{
		for (int n = 0; n < numOfStudent; n++)
		{
			if (studentArray[i].averageScore() < studentArray[n].averageScore())
				{
					tempStudent = studentArray[i];
					studentArray[i] = studentArray[n];
					studentArray[n] = tempStudent;
				}
		}
	}
}

// Void function which sorts array of student objects by student last name.
// Need to compare each student’s last name.
// May use the selection sorting code or other sorting algorithm.
void ClassRoom::sortArrayByLName()
{
	int index;
	Student tempStudent;

	for (int i = 0; i < numOfStudent; i++)
	{
		for (int n = 0; n < numOfStudent; n++)
		{
			if (studentArray[i].getLName() < studentArray[n].getLName())
				{
					tempStudent = studentArray[i];
					studentArray[i] = studentArray[n];
					studentArray[n] = tempStudent;
				}
		}
	}
}

// Value-returning function which calculates and returns the average score of all students.
// average score = total of student’s average score / number of students 
double ClassRoom::calcAvg()
{
	return -1; // TODO
}

// Void function which displays last name, first name, 4 exam scores and average score for all students.
// All students’ information should be displayed using this format:
// An image is included in the original document, please refer there for it
void ClassRoom::displayStudentData()
{
	cout << "DEBUG"; // TODO
}


int ClassRoom::numOfStudentsInClass()
{
	return numOfStudent;
}