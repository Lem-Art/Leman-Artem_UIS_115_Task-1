#pragma once
#include <ostream>
class Pair
{
private:
	/**
	*\brief число a
	*/
	double a;
	/**
	*\brief число b
	*/
	double b;
public:

	/**
	*\brief конструктор по умолчанию
	*/
	Pair();

	/**
	*\brief конструктор с параметрами
	* \param число a
	* \param число b
	*/
	Pair(double a, double b);

	/**
	*\brief деструктор по умолчанию
	*/
	~Pair() = default;

	/**
	*\brief оператор сложени¤
	*/
	Pair operator+(const Pair& other);


	/**
	 \brief	 онструктор копировани¤
	 */
	Pair(const Pair&) = default;


	/**
	 \brief	 онструктор присвоени¤
	 */
	Pair& operator=(const  Pair&) = default;

	/**
	*\brief оператор <<
	*/
	friend std::ostream& operator<<(std::ostream& out, Pair& F);

	/**
	*\brief геттер дл¤ a
	*/
	double get_a();

	/**
	*\brief геттер дл¤ b
	*/
	double get_b();
};

