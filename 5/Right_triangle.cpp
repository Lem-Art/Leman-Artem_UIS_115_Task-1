#include "Right_triangle.h"
#include <iostream>

double get_angle_alpha_1(double a, double b)
{
	return atan(a / b);
}
double get_angle_beta_1(double a, double b)
{
	return 180.0 - 90.0 - atan(a / b);
}

double get_angle_alpha_2(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return atan(a / b);
	}
	else throw 1;
}
double get_angle_beta_2(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return 180.0 - 90.0 - atan(a / b);
	}
	else throw 1;
}

double get_angle_alpha_3(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return atan(a / b);
	}
	else throw std::invalid_argument("error, b is less than 0 or is eaqual to 0");
}
double get_angle_beta_3(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return 180.0 - 90.0 - atan(a / b);
	}
	else throw std::invalid_argument("error, b is less than 0 or is eaqual to 0");
}

double get_angle_alpha_4(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return atan(a / b);
	}
	else throw empty_class();
}
double get_angle_beta_4(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return 180.0 - 90.0 - atan(a / b);
	}
	else throw empty_class();
}

double get_angle_alpha_5(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return atan(a / b);
	}
	else throw independent_class("error, b is less than 0 or is eaqual to 0");
}
double get_angle_beta_5(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return 180.0 - 90.0 - atan(a / b);
	}
	else throw independent_class("error, b is less than 0 or is eaqual to 0");
}

double get_angle_alpha_6(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return atan(a / b);
	}
	else throw successor_class("error, b is less than 0 or is eaqual to 0");
}
double get_angle_beta_6(double a, double b)
{
	if (b > 0 && a > 0)
	{
		return 180.0 - 90.0 - atan(a / b);
	}
	else throw successor_class("error, b is less than 0 or is eaqual to 0");
}