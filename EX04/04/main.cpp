#include <iostream>
#include "Rectangle2D.h"
using namespace std;


int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "R1's area is: " << r1.getArea() << endl;
	cout << "R1's perimeter is: " << r1.getPerimeter() << endl;

	cout << "Does r1 contain (3,3)?: ";
	if (r1.contains(3, 3)) { cout << "yes" << endl; }
	else { cout << "no" << endl; }

	cout << "Does r1 contain r2?: ";
	if (r1.contains(r2)) { cout << "yes" << endl; }
	else { cout << "no" << endl; }

	cout << "Does r1 overlap r3?: ";
	if (r1.overlaps(r3)) { cout << "yes" << endl; }
	else { cout << "no" << endl; }

	return 0;
}