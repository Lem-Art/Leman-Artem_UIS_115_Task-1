#pragma once
#include "Geometric_figure.h"
#include <stdexcept>
class Rectangle : public Geometric_figure
{
private:
	/**
	*\brief сторона a
	*/
	double a;
	/**
	*\brief сторона b
	*/
	double b;
	/**
	*\brief сеттер для провертки отрицательности
	* \param сторона a
	* \param сторона b
	*/
	void set_sides(double a, double b);
public:
	/**
	*\brief конструктор с параметрами
	* \param сторона a
	* \param сторона b
	*/
	explicit Rectangle(double a, double b);

	/**
	*\brief деструктор по умолчанию
	*/
	~Rectangle() override = default;

	/**
	\brief	Конструктор копирования
	*/
	Rectangle(const  Rectangle&) = default;
	/**
	 \brief	Конструктор присвоения
	*/
	Rectangle& operator=(const  Rectangle&) = default;

	/**
	*\brief периметр
	*/
	double get_perimeter() override;

	/**
	*\brief площадь
	*/
	double get_area() override;
};
