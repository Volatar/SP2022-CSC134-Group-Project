// ClassRoom.h
// SP2022 CSC-134 Group Project
// Group 8

#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Student.h"

using namespace std;

class ClassRoom
{
private:
	string className;
	int numOfStudent;
	Student studentArray[24];

public:
	// constructor
	ClassRoom(string _className);
	// destructor
	~ClassRoom();
	// Get set func
	string getClassName();
	int getNumOfStudent();
	Student* getStudentArray();
	void setClassName(string _className);
	void setNumOfStudent(int _numOfStudent);
	void setStudentArray(Student _studentArray[], int _numStudent);

	void popArray(string _inFileName);
	void sortArrayByAvg();
	void sortArrayByLName();
	double calcAvg();
	void displayStudentData();
	int numOfStudentsInClass();
};

#endif
