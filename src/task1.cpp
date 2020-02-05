#include "task1.h"
#include <cmath>
#include "Circle.h"


double calcDelta()
{
	double rad = 6378100;
	Circle Earth(rad);
	Earth.setFerence(Earth.getFerence() + 1);
	double result = round((Earth.getRadius() - rad)*1000)/1000;
	return result;
}

double calcCost()
{
	Circle Pool(3);
	Circle Pool_road(4);
	double cost_road = (Pool_road.getArea() - Pool.getArea()) * 1000;
	double cost_fence = Pool_road.getFerence() * 2000;
	double result = round((cost_road + cost_fence)*100)/100;
	return result;
}
