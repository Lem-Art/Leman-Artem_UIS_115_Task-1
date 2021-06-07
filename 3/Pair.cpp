#include "Pair.h"

Pair::Pair()
{
	this->a = 0;
	this->b = 0;
}

Pair::Pair(double a, double b)
{
	this->a = a;
	this->b = b;
}

Pair Pair::operator+(const Pair& other)
{
	Pair temp;
	temp.a = this->a + other.a;
	temp.b = this->b + other.b;
	return temp;
}

double Pair::get_a()
{
	return this->a;
}

double Pair::get_b()
{
	return this->b;
}

std::ostream& operator<<(std::ostream& out, Pair& F)
{
	return out << F.a << " | " << F.b;
}
