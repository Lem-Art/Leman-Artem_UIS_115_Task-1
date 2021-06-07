#pragma once
class Geometric_figure
{
public:

	/**
	*\brief виртуальный метод для вычисления объёма
	*/
	virtual double get_perimeter() = 0;

	/**
	*\brief виртуальный метод для вычисления площади поверхности
	*/
	virtual double get_area() = 0;

	/**
	*\brief виртуальный деструктор
	*/
	virtual ~Geometric_figure() = 0;
};

