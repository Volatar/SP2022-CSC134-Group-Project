// ClassRoom.cpp
// SP2022 CSC-134 Group Project
// Group 8

#include "ClassRoom.h"

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
void ClassRoom::popArray(ifstream _inFile) 
{
	string fName, lName, ssn;
	int scores[4];
	while (_inFile)
	{
		// Create a Student object by reading student record from the data file.
		_inFile >> fName >> lName;
		for (int i = 0; i < 4; i++) _inFile >> scores[i];
		Student student(fName, lName, ssn, scores);
		
		// Add the student object in an array of Student.
		studentArray[numOfStudent] = student;
		
		// Count the number of student objects created.
		numOfStudent = student.getNumStudent()s;
	}
}

// Norma Hernandez-Cruz from this point:

// Void function which sorts array of student objects by student average score.
// Need to compare each student’s average score.
// May use the selection sorting code or other sorting algorithm.

//here is what i have for basically both the sorting things, I can post the rest of my part when i have this done so i can just copy/paste the whole thing
//from VS since thats where i'm testing it
//smh i rlly dont know what im doing

void sortArrayByAvg()
	{
	
		void swapping(int& a, int& b)						 //swap the content
		{									//error, says "expected a ';' 	wtf				
			int temp;
			temp = a;
			a = b;
			b = temp;
		}
											//can i even do this? like putting a void in a void lol
		void selectionSort(ClassRoom *popArray, int size) 			//this doesnt work i think
		{									//I think i'm making this a lot more difficult than it should be :/
			int i, j, imin;
			for (i = 0; i < size - 1; i++) 
			{
				imin = i;   //get index of minimum score
				for (j = i + 1; j < size; j++)
					if (popArray[j] < popArray[imin])
						imin = j;
				//placing them in the correct position
				swap(popArray[i], popArray[imin]);
			}
		}

	}


// Void function which sorts array of student objects by student last name.
// Need to compare each student’s last name.
// May use the selection sorting code or other sorting algorithm.

// Value-returning function which calculates and returns the average score of all students.
// average score = total of student’s average score / number of students 

// Void function which displays last name, first name, 4 exam scores and average score for all students.
// All students’ information should be displayed using this format:
// An image is included in the original document, please refer there for it
