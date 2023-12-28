#pragma once
class Circle
{
private:
	int r;
public:
	Circle(int radius)
	{
		r = radius;
	}
	void setRadius(int radius)
	{
		this->r = radius;
	}
	int getRadius()
	{
		return r;
	}
};