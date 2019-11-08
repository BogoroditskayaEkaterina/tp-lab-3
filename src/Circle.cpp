#pragma once
#include "Circle.h"
#define pi 3.1415
#include <math.h>

Circle::Circle(double radius){
	Circle::setRadius(radius);
}

void Circle::setRadius(double radius){
	this->radius = radius;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setFerence(double ference){
	this->ference = ference;
	radius = ference / (2 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(double area){
	this->area = area;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}

double Circle::getRadius(){
	return radius;
}
double Circle::getFerence(){
	return ference;
}
double Circle::getArea(){
	return area;
}