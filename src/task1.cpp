#include "task1.h"
#include "Circle.h"


double calcDelta()
{
	double rad = 6378100.0;
	Circle Earth(rad);
	Earth.setFerence(Earth.getFerence() + 1.0);
	return (Earth.getRadius() - rad);
}

double calcCost()
{
	Circle Pool(3.0);
	Circle Pool_road(4.0);
	double cost_road = (Pool_road.getArea() - Pool.getArea()) * 1000.0;
	double cost_fence = Pool_road.getFerence() * 2000.0;
	return cost_road + cost_fence;
}
