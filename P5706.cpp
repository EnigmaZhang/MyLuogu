#include <iostream>
#include <iomanip>

int main()
{
	double a;
	int b;

	std::cin >> a >> b;

	std::cout << std::fixed << std::setprecision(3) << a / b << std::endl << b * 2;

	return 0;
}
