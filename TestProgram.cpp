// TestProgram.cpp
// SP2022 CSC-134 Group Project
// Group 8

#include "Student.h"
#include "ClassRoom.h"
#include <iostream>
#include <iomanip>


using namespace std;

// Dustin Smith

// Instructions from instructor:

// Note 
// No global non-constant variables should be used. 
// You can add more data members or member functions for Student and ClassRoom Class if needed.
// There should be NO stand-alone function, all functions should be member functions of class student or ClassRoom. 

// Define code to perform object-oriented programming in main () function of TestProgram.cpp:
int main() 
{
     // Create a ClassRoom Object.  
    ClassRoom classRoom("CSC-134");
    cout << "Classroom created. " << endl;

    // Use the ClassRoom Object to create student object by reading student records from the input file “students.txt” 
    //    and put the student objects in the array of Students which is the data member of ClassRoom object.
    string file = "studentinfo.txt";
    classRoom.popArray(file);
    cout << "studentinfo.txt opened. " << endl;
    cout << endl;

    //displaying the unsorted data
    classRoom.displayStudentData();

    // Use the ClassRoom Object to sort the array of students by student average score.
    classRoom.sortArrayByAvg();

    // Use the ClassRoom Object to display the students sorted by student average score.
    cout << "Sorted by avgerage scores: " << endl;
    classRoom.displayStudentData();

    // Use the ClassRoom Object to sort the array of students by student last name.
    classRoom.sortArrayByLName();

    // Use the ClassRoom Object to display the students sorted by student last name.
    cout << "Sorted by last name: " << endl;
    classRoom.displayStudentData();

    // Use the ClassRoom Object to display the number of Student objects created.
    cout << "Number of students in class: " << classRoom.getNumOfStudent() << endl;

    // Use the ClassRoom Object to calculate and display the average score of all students. 
    cout << "Average score of all students: " << classRoom.calcAvg() << endl;

    return 0;
}
