#include <iostream>
using namespace std;

// function header
int smallestNumber(int* list, int size)
{
	// store the first number
	int smallNumber = list[0];
	// loop through the rest and change only store the currently smallest number
	for (int i = 1; i < size; i++)
	{
		if (list[i] < smallNumber) // only changes smallNumber if the new number is smaller
		{
			smallNumber = list[i];
		}
	}
	return smallNumber;
}


int main()
{
	int* myArray = new int[8]{1,2,4,5,10,100,2,-22};
	// *myArray = { 1,2,4,5,10,100,2,-22 };
	cout << smallestNumber(myArray, 8)<< endl;
	delete myArray;
	return 0;
}