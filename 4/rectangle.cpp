#include "rectangle.h"

void Rectangle::set_sides(double a, double b)
{
	if (a > 0 && b > 0)
	{
		this->a = a;
		this->b = b;
	}
	else throw std::invalid_argument("error, sides must be greater than 0");
}


Rectangle::Rectangle(double a, double b)
{
	set_sides(a, b);
}

double Rectangle::get_perimeter()
{
	return a * 2.0 + b * 2.0;
}

double Rectangle::get_area()
{
	return a * b;
}
