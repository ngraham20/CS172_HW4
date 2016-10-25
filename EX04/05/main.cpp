#include <iostream>
#include "Course.h"

int main()
{
	Course course("mathematics", 5);

	course.addStudent("Samuel");
	course.addStudent("James");
	course.addStudent("Emily");
	course.dropStudent("James");

	cout << "The students are:" << endl;
	string* students = new string[course.getNumberOfStudents()];
	students = course.getStudents();
	for (int i = 0; i < course.getNumberOfStudents(); i++)
	{
		cout << i + 1 << ". " << students[i] << endl;
	}
	// delete students;
	return 0;
}