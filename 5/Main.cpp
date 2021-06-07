#include <iostream>
#include "Right_triangle.h"

int main()
{
	std::cout << get_angle_alpha_1(1, 2) << std::endl;
	std::cout << get_angle_beta_1(1, 2) << std::endl;

	try
	{
		std::cout << get_angle_alpha_2(-1, -2) << std::endl;
		std::cout << get_angle_alpha_3(-1, -2) << std::endl;
		std::cout << get_angle_alpha_4(-1, -2) << std::endl;
		std::cout << get_angle_alpha_5(-1, -2) << std::endl;
		std::cout << get_angle_alpha_6(-1, -2) << std::endl;

		std::cout << get_angle_beta_2(1, 2) << std::endl;
		std::cout << get_angle_beta_3(1, 2) << std::endl;
		std::cout << get_angle_beta_4(1, 2) << std::endl;
		std::cout << get_angle_beta_5(1, 2) << std::endl;
		std::cout << get_angle_beta_6(1, 2) << std::endl;

	}
	catch (int)
	{
		std::cerr << "Error! One side or more is equal to 0 or less than 0! (specifier twrow)";
	}
	catch (invalid_argument error)
	{
		std::cerr << error.what() << std::endl;
	}
	catch (empty_class)
	{
		std::cerr << "Error!One side or more is equal to 0 or less than 0! (Empty class)" << std::endl;
	}
	catch (independent_class error)
	{
		std::cerr << error.message << std::endl;
	}
	catch (successor_class error)
	{
		std::cerr << error.what() << std::endl;
	}
}