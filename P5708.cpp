#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	double a, b, c;
	double p;

	std::cin >> a >> b >> c;

	p = (a + b + c) / 2.0;

	std::cout << std::fixed << std::setprecision(1) << sqrt(p * (p - a) * (p - b) * (p - c));

	return 0;
}