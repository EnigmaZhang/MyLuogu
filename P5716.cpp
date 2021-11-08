#include <iostream>
#include <set>

int main()
{
	int year, month;
	std::set<int> long_month { 1,3,5,7,8,10,12 };

	std::cin >> year >> month;

	if (month == 2)
		std::cout << (year % 400 == 0 || (year % 4 == 0 && year % 100) ? 29 : 28) << std::endl;
	else
	{
		if (long_month.count(month) == 1)
		{
			std::cout << 31 << std::endl;
		}
		else
		{
			std::cout << 30 << std::endl;
		}
	}

	return 0;
}