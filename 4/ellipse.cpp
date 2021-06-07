#include "Ellipse.h"

void Ellipse::set_ellipse(double a, double b)
{
	if (a > 0 && b > 0)
	{
		this->a = a;
		this->b = b;
	}
	else throw std::invalid_argument("error, things must be greater than 0");
}

Ellipse::Ellipse(double a, double b)
{
	set_ellipse(a, b);
}

double Ellipse::get_perimeter()
{
	return (4.0 * ((M_PI * a * b + (a - b)) / (a + b)));
}

double Ellipse::get_area()
{
	return M_PI * a * b;
}
