#include "Circle.h"
#include "task1.h"
#include <math.h>

const double pi = 3.1415;

Circle::Circle(double rad)
{
	setRadius(rad);
}

void Circle::setRadius(double rad)
{
	radius = rad;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setFerence(double fer)
{
	ference = fer;
	radius = ference / (2 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(double ar)
{
	area = ar;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getFerence()
{
	return ference;
}

double Circle::getArea()
{
	return area;
}