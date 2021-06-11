#include "Complex.h"

Complex::Complex()
{
	this->real = 0;
	this->imaginary = 0;
}

Complex::Complex(const double real, const double imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

Complex::Complex(Pair& pair)
{
	this->real = pair.get_a();
	this->imaginary = pair.get_b();
}

Complex Complex::operator*(const Complex& other)
{
	return Complex(((this->real * other.real) - (this->imaginary * other.imaginary)), ((this->real * other.imaginary) + (this->imaginary * other.real)));
}

Complex Complex::operator/(const Complex& other)

{

	if (std::fabs(this->real - other.real) < std::numeric_limits<double>::epsilon() && std::fabs(this->imaginary - other.imaginary) < std::numeric_limits<double>::epsilon())

	{
		throw std::invalid_argument("division is impossible");
	}

	else
	{
		return Complex((((this->real * other.real) + (this->imaginary * other.imaginary)) / (other.real * other.real + other.imaginary * other.imaginary)),
			(other.real * this->imaginary - this->real * other.imaginary) / ((other.real * other.real + other.imaginary * other.imaginary)));
	}

}

Complex Complex::operator+(const Complex& other)
{
	Complex temp;
	temp.real = this->real + other.real;
	temp.imaginary = this->imaginary + other.imaginary;
	return temp;
}
Complex Complex::operator-(const Complex& other)

{

	Complex temp;

	temp.real = this->real - other.real;

	temp.imaginary = this->imaginary - other.imaginary;

	return temp;

}

std::ostream& operator<<(std::ostream& out, Complex& F)
{
	return out << F.real << " | " << F.imaginary;
}
