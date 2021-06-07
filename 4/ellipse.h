#pragma once
#define _USE_MATH_DEFINES
#include "Geometric_figure.h"
#include <stdexcept>
#include <math.h>

class Ellipse : public Geometric_figure
{
private:
	/**
	*\brief полуось 1
	*/
	double a;
	/**
	*\brief полуось 2
	*/
	double b;
	/**
	*\brief сеттер для провертки отрицательности
	* \param  полуось 1
	* \param полуось 2
	*/
	void set_ellipse(double a, double b);
public:
	/**
	*\brief конструктор с параметрами
	* \param  полуось 1
	* \param полуось 2
	*/
	explicit Ellipse(double a, double b);

	/**
	*\brief деструктор по умолчанию
	*/
	~Ellipse() override = default;

	/**
	\brief	Конструктор копирования
	*/
	Ellipse(const  Ellipse&) = default;
	/**
	 \brief	Конструктор присвоения
	*/
	Ellipse& operator=(const  Ellipse&) = default;

	/**
	*\brief периметр
	*/
	double get_perimeter() override;

	/**
	*\brief площадь
	*/
	double get_area() override;
};

