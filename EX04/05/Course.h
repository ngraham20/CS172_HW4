#pragma once
#include <string>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity); // constructor
	Course(const Course&); // copy constructor
	~Course(); // destructor
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	void clear(); // clears the students array of all students
	string* getStudents() const;
	int getNumberOfStudents() const;
	string* doubleCapacity(const string* list, int size);

	static int getNumberOfObjects();

private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;

	static int numberOfObjects;
};