#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:

	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();

private:

	double  radius;
	double  ference;
	double  area;

};


#endif