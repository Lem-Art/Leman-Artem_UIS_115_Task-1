#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction a(2, 4);
    Fraction b(2, 4);
    a.comparison_equally();
    cout << a.get_comparison(b) << endl;
    return 0;
}