#include "Rectangle2D.h"
#include <cmath>

Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}
Rectangle2D::Rectangle2D(double X, double Y, double Width, double Height)
{
	x = X;
	y = Y;
	width = Width;
	height = Height;
}

double Rectangle2D::getX() const { return x; }

double Rectangle2D::getY() const { return y; }

double Rectangle2D::getWidth() const { return width; }

double Rectangle2D::getHeight() const { return height; }

double Rectangle2D::getArea() const { return width*height; }

double Rectangle2D::getPerimeter() const { return (2*width + 2*height); }


bool Rectangle2D::setX(double X) { x = X; return false; }

bool Rectangle2D::setY(double Y) { y = Y; return false; }

bool Rectangle2D::setWidth(double Width) { width = Width; return false; }

bool Rectangle2D::setHeight(double Height) { height = Height; return false; }

bool Rectangle2D::contains(double X, double Y) const
{
	double rightEdge = x + width / 2;
	double leftEdge = x - width / 2;
	double top = y + height / 2;
	double bottom = y - height / 2;
	if (X <= rightEdge && X >= leftEdge && Y >= bottom && Y <= top)
	{
		return true;
	}
	else { return false; }
}

bool Rectangle2D::contains(const Rectangle2D &r) const
{
	double rightEdge = x + width / 2;
	double leftEdge = x - width / 2;
	double top = y + height / 2;
	double bottom = y - height / 2;

	double rightEdgeR = r.getX() + r.getWidth() / 2;
	double leftEdgeR = r.getX() - r.getWidth() / 2;
	double topR = r.getY() + r.getHeight() / 2;
	double bottomR = r.getY() - r.getHeight() / 2;

	if (rightEdgeR <= rightEdge && leftEdgeR >= leftEdge && topR <= top && bottomR >= bottom)
	{
		return true;
	}
	else { return false; }
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	double rightEdge = x + width / 2;
	double leftEdge = x - width / 2;
	double top = y + height / 2;
	double bottom = y - height / 2;

	double rightEdgeR = r.getX() + r.getWidth() / 2;
	double leftEdgeR = r.getX() - r.getWidth() / 2;
	double topR = r.getY() + r.getHeight() / 2;
	double bottomR = r.getY() - r.getHeight() / 2;

	if (rightEdge > leftEdgeR && leftEdge < rightEdgeR && top > bottomR && bottom < topR)
	{
		return true;
	}
	else { return false; }
}
