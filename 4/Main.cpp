#include <iostream>
#include "ellipse.h"
#include "rectangle.h"
#include "Rhombus.h"
using namespace std;

void main()
{
	Rectangle rectangle(10, 23);
	Ellipse ellipse(12, 87);
	Rhombus rhumbus(2, 94);

	cout << "area of the ractangle is: " <<rectangle.get_area() << endl;
	cout << "perimeter of the ractangle is: " << rectangle.get_perimeter() << endl;

	cout << "area of the ellipse is: " << ellipse.get_area() << endl;
	cout << "perimeter of the ellipse is: " << ellipse.get_perimeter() << endl;

	cout << "area of the rhumbus is: " << rhumbus.get_area() << endl;
	cout << "perimeter of the rhumbus is: " << rhumbus.get_perimeter() << endl;
}