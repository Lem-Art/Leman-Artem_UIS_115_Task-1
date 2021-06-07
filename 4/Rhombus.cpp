#include "Rhombus.h"

void Rhombus::set_diagonals(double d_1, double d_2)
{
	if (d_1 > 0 && d_2 > 0)
	{
		this->d_1 = d_1;
		this->d_2 = d_2;
	}
	else throw std::invalid_argument("error, diagonals must be greater than 0");
}

Rhombus::Rhombus(double d_1, double d_2)
{
	set_diagonals(d_1,d_2);
}

double Rhombus::get_perimeter()
{
	return (4.0 * sqrt((pow(d_1 / 2, 2)) + (pow(d_2 / 2, 2))));
}

double Rhombus::get_area()
{
	return ((d_1 * d_2) / (2));
}
