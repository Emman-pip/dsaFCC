#pragma once
#include "Circle.h"

class Utility
{
public:
	double calculateArea(Circle c)
	{
		int r = c.getRadius();
		return 3.14 * r * r;
	}
};



