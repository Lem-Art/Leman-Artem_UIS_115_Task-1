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
	return Pair(this->a + other.a, this->b + other.b);
}


double Pair::get_a() const
{
	return this->a;
}

double Pair::get_b() const
{
	return this->b;
}

std::ostream& operator<<(std::ostream& out, Pair& F)
{
	return out << F.a << " | " << F.b;
}
