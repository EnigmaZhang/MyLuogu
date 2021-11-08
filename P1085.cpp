#include <iostream>

int main()
{
	int inclass, outclass;
	int day{ 0 }, max_unhappy{ 0 };

	for (int i{ 1 }; i <= 7; i++)
	{
		std::cin >> inclass >> outclass;
		if (max_unhappy < inclass + outclass - 8)
		{
			max_unhappy = inclass + outclass - 8;
			day = i;
		}
	}

	std::cout << day << std::endl;

	return 0;
}