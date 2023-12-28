#include <iostream>
using namespace std;
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

class Utility
{
public:
	double calculateArea(Circle c)
	{
		int r = c.getRadius();
		return 3.14 * r * r;
	}
};

int main() 
{
	int radius;
	Utility util;
	cout << "Enter radius: ";
	cin >> radius;
	cout << endl;
	Circle c1(radius);
	//c1.setRadius();
	std::cout << "radius: " << c1.getRadius() << std::endl;
	std::cout <<"area: " << util.calculateArea(c1);
	return 0;
}