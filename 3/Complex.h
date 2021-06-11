#pragma once
#include "Pair.h"
#include <cmath>
class Complex : public Pair
{
private:
	/**
	*\brief действительная часть
	*/
	double real;
	/**
	*\brief мнимая часть
	*/
	double imaginary;
public:

	/**
	*\brief конструктор по умолчанию
	*/
	Complex();

	/**
	*\brief конструктор с параметрами
	* \param дейстивтельная часть
	* \param мнимая часть
	*/
	Complex(const double real,const double imaginary);

	/**
	*\brief конструктор с параметрами
	* \param пара чисел
	*/
	Complex(Pair& pair);

	/**
	*\brief деструктор по умолчанию
	*/
	~Complex() = default;

	/**
	*\brief конструтор перемещения
	*/
	Complex(Complex&& other) = default;

	/**
	 \brief	Конструктор копирования
	 */
	Complex(const Complex&) = default;

	/**
	 \brief	Конструктор присвоения
	 */
	Complex& operator=(const  Complex&) = default;

	/**
	*\brief оператор <<
	*/
	friend std::ostream& operator<<(std::ostream& out, Complex& F);

	/**
	*\brief оператор *
	*/
	Complex operator*(const Complex& other);

	/**
	*\brief оператор /
	*/
	Complex operator/(const Complex& other);

	/**
	*\brief оператор +
	*/
	Complex operator+(const Complex& other);

	/**
	*\brief оператор -
	*/
	Complex operator-(const Complex& other);


};

