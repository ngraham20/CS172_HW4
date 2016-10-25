#pragma once
class Rectangle2D
{
public:
	Rectangle2D(); // constructor
	Rectangle2D(double, double, double, double); // constructor overloaded +1

	// all get functions
	double getX() const;
	double getY() const;
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;

	// all set functions
	bool setX(double);
	bool setY(double);
	bool setWidth(double);
	bool setHeight(double);

	// test functions
	bool contains(double, double) const;
	bool contains(const Rectangle2D&) const;
	bool overlaps(const Rectangle2D&) const;

private:
	// initialize class variables as pointer doubles
	double x; // these two variables
	double y; // define the center of the rect
	double width;
	double height;
};

