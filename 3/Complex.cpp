#include "Complex.h"

Complex::Complex()
{
	this->real = 0;
	this->imaginary = 0;
}

Complex::Complex(double real, double imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

Complex::Complex(Pair a)
{
	this->real = a.get_a();
	this->imaginary = a.get_b();
}

Complex Complex::operator*(const Complex& other)
{
	Complex temp;

	temp.real = ((this->real * other.real) - (this->imaginary * other.imaginary));

	temp.imaginary = ((this->real * other.imaginary) + (this->imaginary * other.real));

	return temp;
}

Complex Complex::operator/(const Complex& other)

{

	if ((other.real * other.real + other.imaginary * other.imaginary) != 0)

	{

		Complex temp;

		temp.real = (((this->real * other.real) + (this->imaginary * other.imaginary)) / (other.real * other.real + other.imaginary * other.imaginary));

		temp.imaginary = (other.real * this->imaginary - this->real * other.imaginary) / ((other.real * other.real + other.imaginary * other.imaginary));

		return temp;

	}

	else

	{

		throw std::invalid_argument("division is impossible");

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
