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
	*\brief конструтор перемещения
	*/
	Pair(Pair&& other) = default;

	/**
	*\brief оператор сложения
	*/
	Pair operator+(const Pair& other);


	/**
	 \brief	Конструктор копирования
	 */
	Pair(const Pair&) = default;


	/**
	 \brief	Конструктор присвоения
	 */
	Pair& operator=(const  Pair&) = default;

	/**
	*\brief оператор <<
	*/
	friend std::ostream& operator<<(std::ostream& out, Pair& F);

	/**
	*\brief геттер для a
	*/
	double get_a() const;

	/**
	*\brief геттер для b
	*/
	double get_b() const;
};

