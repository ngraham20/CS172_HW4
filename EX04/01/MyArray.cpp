#include "MyArray.h"
#include <iostream>
using namespace std;

// int MyArray::getArray() { return myArray[]; }

MyArray::MyArray()
{
}

bool MyArray::setArray()
{
	int arrayLength;
	cout << "How long is the Array? (1-10)\n>>";
	cin >> arrayLength;
	int* myArray = new int[arrayLength];
	for (int i = 0; i < arrayLength; i++)
	{
		cout << "Enter number for slot (" << i << "): ";
		int appendNumber;
		cin >> appendNumber;
		myArray[i] = appendNumber;
	}
	return true;
}

int MyArray::getAboveAverage()
{
	return 0;
}
