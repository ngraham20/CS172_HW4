#include <iostream>

int* doubleCapacity(const int* list, int size) // should double the size of an array
{
	int* newArray = new int[size*2]; // creates an array pointer variable with double the size of the previous array
	for (int i = 0; i < size; i++) // loops through the old array to fill the new array with its contents
	{
		newArray[i] = list[i];
	}
	return newArray; // returns the new array
}

int main()
{
	return 0;
}