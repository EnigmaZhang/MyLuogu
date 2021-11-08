#include <iostream>
#include <iomanip>

int main()
{
	double m, h, bmi;

	std::cin >> m >> h;

	bmi = m / (h * h);

	if (bmi < 18.5)
		std::cout << "Underweight";
	else if (bmi >= 18.5 && bmi < 24)
		std::cout << "Normal";
	else
		std::cout << std::setprecision(6) << bmi << std::endl << "Overweight";

	return 0;
}