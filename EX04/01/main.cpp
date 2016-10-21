#include <iostream>
// #include "MyArray.h"
using namespace std;

int main()
{
	// creates the array with length as specified by user
	int arrayLength;
	cout << "How long is the Array? (1-10)\n>>";
	cin >> arrayLength;
	int* myArray = new int[arrayLength]; // TODO delete int*

	// fills the array with numbers as specified by the user
	for (int i = 0; i < arrayLength; i++)
	{
		cout << "Enter number for slot (" << i << "): ";
		int appendNumber;
		cin >> appendNumber;
		myArray[i] = appendNumber;
	}

	// looks at the values inside the array, averages them, and shows how many of the numbers are above the average
	double average = 0;
	for (int i = 0; i < arrayLength; i++)
	{
		average += myArray[i];
	}
	average /= arrayLength;

	cout << "Average: " << average << endl;

	// looks at all the values inside the array and counts how many are above average
	int count = 0;
	for (int i = 0; i <= arrayLength; i++)
	{
		if (myArray[i] >= average)
		{
			count++;
		}
	}
	cout << "Number of ints greater than average: " << count << endl;
	return 0;
}