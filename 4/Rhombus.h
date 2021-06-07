#pragma once
#include "Geometric_figure.h"
#include <stdexcept>
#include <cmath>
class Rhombus : public Geometric_figure
{
private:
	/**
	*\brief диагональ 1
	*/
	double d_1;
	/**
	*\brief диагональ 2
	*/
	double d_2;
	/**
	*\brief сеттер для провертки отрицательности
	* \param диагональ 1
	* \param диагональ 2
	*/
	void set_diagonals(double d_1, double d_2);

public:
	/**
	*\brief конструктор с параметрами
	* \param диагональ 1
	* \param диагональ 2
	*/
	explicit Rhombus(double d_1, double d_2);

	/**
	*\brief деструктор по умолчанию
	*/
	~Rhombus() override = default;

	/**
	 \brief	Конструктор копирования
	*/
	Rhombus(const  Rhombus&) = default;
	/**
	 \brief	Конструктор присвоения
	*/
	Rhombus& operator=(const  Rhombus&) = default;

	/**
	*\brief периметр
	*/
	double get_perimeter() override;

	/**
	*\brief площадь
	*/
	double get_area() override;

};

