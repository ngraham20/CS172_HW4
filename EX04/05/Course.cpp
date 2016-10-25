#include <iostream>
#include "Course.h"
using namespace std;

int Course::numberOfObjects = 0;

Course::Course(const string& courseName, int capacity)
{
	// initializes variable names and pointers
	numberOfObjects++;
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
// copy constructor takes all items in the original class and makes a new object out of them
Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = course.students[i];
	}
}

Course::~Course()
{
	// destructs students
	delete[] students;
	numberOfObjects--;
}
string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	// triggers the doubleCapacity function if the array is already full
	if (numberOfStudents == capacity)
	{
		students = doubleCapacity(students, numberOfStudents);
	}
	// either way, it then adds the student
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	//// loops through all students until the desired student is found
	//for (int i = 0; i < numberOfStudents; i++)
	//{
	//	if (students[i] == name)
	//	{
	//		// then it sets the student's name to ""
	//		students[i] = "";
	//	}
	//}
	// the following creates a new array and fills it with all students who aren't named ""
	string* students = new string[numberOfStudents];
	int errorCount = 0;
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (this->students[i] != name)
		{
			students[i-errorCount] = this->students[i];
			// cout << i << endl << students[i] << endl << this->students[i] << endl; *commented this out for testing purposes*
		}
		else
		{
			errorCount++;
		// cout << this->students[i] << endl; *commented this for testing purposes*
		}
	}
	// this sets the original 'students' to the new one, then deletes it
	this->students = students;
	// delete students;... not sure why this doesnt work, but "delete students" causes a crash...
	numberOfStudents--;
}

void Course::clear()
{
	string* students = new string[numberOfStudents];
	this->students = students;
	// delete students;
	numberOfStudents = 0;
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

string* Course::doubleCapacity(const string* list, int size) // should double the size of an array
{
	string* newArray = new string[size * 2]; // creates an array pointer variable with double the size of the previous array
	for (int i = 0; i < size; i++) // loops through the old array to fill the new array with its contents
	{
		newArray[i] = list[i];
	}
	return newArray; // returns the new array
}

int Course::getNumberOfObjects()
{
	return numberOfObjects;
}
