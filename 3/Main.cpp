#include <iostream>
#include "Pair.h"
#include "Complex.h"

int main()
{
	Pair pair_1(1, 1);
	Pair pair_2(10, 11);

	Complex complex_1(1, 1);
	Complex complex_2 (pair_2);

	Complex complex_composition = complex_1 * complex_2;

	Complex complex_sum = complex_1 + complex_2;
	Complex complex_difference = complex_1 - complex_2;
	Complex complex_quotient = complex_1 / complex_2;

	std::cout << complex_composition << std::endl;
	std::cout << complex_sum << std::endl;
	std::cout << complex_difference << std::endl;
	std::cout << complex_quotient << std::endl;

}