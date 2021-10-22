#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	int T;
	std::cin >> T;
	if (T == 1) 
	{
		std::cout << "I love Luogu!";
	}
	else if (T == 2) 
	{
		std::cout << 2 + 4 << " " << 10 - 2 - 4;
	}
	else if (T == 3) 
	{
		int ave{ 14 / 4 };
		std::cout << ave << std::endl << ave * 4 << std::endl << 14 - ave * 4;
	}
	else if (T == 4) 
	{
		std::cout << std::setprecision(6) << 500 / 3.0;
	}
	else if (T == 5)
	{
		std::cout << (260 + 220) / (12 + 20);
	}
	else if (T == 6) 
	{
		std::cout << sqrt(6 * 6 + 9 * 9);
	}
	else if (T == 7) 
	{
		std::cout << 100 + 10 << std::endl << 100 + 10 - 20 << std::endl << 0;
	}
	else if (T == 8) 
	{
		double pi{ 3.141593 };
		int r{ 5 };

		std::cout << 2 * pi * r << std::endl << pi * r * r << std::endl << 4 / 3.0 * pi * r * r * r;
	}
	else if (T == 9) 
	{
		std::cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2;
	}
	else if (T == 10) 
	{
		std::cout << 9;
	}
	else if (T == 11) 
	{
		std::cout << 100 / 3.0;
	}
	else if (T == 12) 
	{
		char c{ 'A' + 18 - 1 };
		std::cout << 'M' - 'A' + 1 << std::endl << c;
	}
	else if (T == 13) {
		double pi{ 3.141593 };
		std::cout << static_cast<int>(pow(4 / 3.0 * pi * (pow(4, 3) + pow(10, 3)), 1 / 3.0));
	}
	else if (T == 14) 
	{
		std::cout << static_cast<int>((120 - sqrt(120 * 120 - 4 * 1 * 3500)) / 2.0);
	}
	return 0;
}