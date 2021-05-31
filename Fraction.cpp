#include "Fraction.h"
int Fraction::gcd(int a, int b) {
    for (;;)
    {
        a %= b;
        if (!a) return b;
        b %= a;
        if (!b) return a;
    }
}
void Fraction::set_fraction(int n, int d)
{
    if (d > 0 && n > 0)
    {
        numerator = n;
        denominator = d;
    }
    else
    {
        throw invalid_argument("«наменатель не может равн¤тьс¤ нулю");
    }
}

Fraction::Fraction()
{
    numerator = 1;
    denominator = 1;
    integer = 0;
}
Fraction::Fraction(int n, int d)
{
    set_fraction(n, d);
}
Fraction Fraction::operator+(Fraction& other)
{

    const int numerator = numerator * other.denominator + other.numerator * denominator;
    const int denominator = denominator * other.denominator;
    return Fraction(numerator, denominator);
}
Fraction Fraction::operator-(Fraction& other)
{
    const int numerator = numerator * other.denominator - other.numerator * denominator;
    const int denominator = denominator * other.denominator;
    return Fraction(numerator, denominator);
}
Fraction Fraction::operator * (Fraction& other)
{
    const int numerator = numerator * other.numerator;
    const int denominator = denominator * other.denominator;
    return Fraction(numerator, denominator);
}
Fraction Fraction::operator / (Fraction& other)
{
    const int denominator = numerator * other.denominator;
    const int denominator = denominator * other.numerator;
    return Fraction(numerator, denominator);
}
bool Fraction::comparison_larger(Fraction& other)
{
    const int denominator = numerator;
    const int denominator = denominator;
    return (numerator, denominator) > gcd(other.numerator, other.denominator);
}
bool Fraction::comparison_equally(Fraction& other)
{
    const int denominator = numerator;
    const int denominator = denominator;
    return (numerator, denominator) == gcd(other.numerator, other.denominator);
}
bool Fraction::comparison_less(Fraction& other)
{
    const int denominator = numerator;
    const int denominator = denominator;
    return (numerator, denominator) < gcd(other.numerator, other.denominator);
}
void Fraction::get_fraction()
{
    if (numerator > denominator)
    {
        gcd(numerator, denominator);
        integer = numerator / denominator;
        numerator = numerator % denominator;
        cout << integer << " " << numerator << "/" << denominator << endl;
    }
    else
    {
        gcd(numerator, denominator);
        cout << numerator << "/" << denominator << endl;
    }
}

std::ostream& operator<<(std::ostream& out, Fraction& F)
{
    out << F.numerator << " / " << F.denominator;
    return out;
}
