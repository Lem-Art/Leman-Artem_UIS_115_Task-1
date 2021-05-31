#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator, denominator, integer;
    /**
     \brief	функция делающая НОД.
     */
    int gcd(int a, int b);
    /**
        \brief	функция проверяющая знаменатель.
     */
    void set_fraction(int n, int d);
public:
    /**
     \brief	конструктор по умолчанию.
     */
    Fraction();
    /**
     \brief	конструктор с параметрами.
     */
    explicit Fraction(int n, int d);
    /**
     \brief	конструктор копирования по умолчанию.
     */
    Fraction(const  Fraction&) = default;
    /**
     \brief	конструктор присваивания по умолчанию.
     */
    Fraction& operator=(const  Fraction&) = default;
    /**
     \brief	оператор сложения.
     */
    Fraction operator+(Fraction& other);
    /**
     \brief	оператор вычитания.
     */
    Fraction operator-(Fraction& other);
    /**
     \brief	оператор умножения.
     */
    Fraction operator * (Fraction& other);
    /**
     \brief	оператор деления.
     */
    Fraction operator / (Fraction& other);
    /**
     \brief	сравнение дробей (Больше).
     */
    bool Fraction::comparison_larger(Fraction& other);
    /**
     \brief	сравнение дробей (Равно).
     */
    bool Fraction::comparison_equally(Fraction& other);
    /**
     \brief	сравнение дробей (Меньше).
     */
    bool Fraction::comparison_less(Fraction& other);
    /**
     \brief	получает дробь.
     */
    void get_fraction();
    /**
  \brief	конструктор сдвига по умолчанию.
  */
    friend std::ostream& operator<<(std::ostream& out, Fraction& F);
};
