#include <iostream>
#include <iomanip>

int main() 
{
	int s;
	int v;
	int minute;
	int hour;

	std::cin >> s >> v;

	// ceil
	minute = s % v == 0 ? s / v : s / v + 1;
	minute += 10;

	hour = minute / 60;
	minute = minute % 60;

	hour = 8 - hour;
	minute = 0 - minute;
	hour = minute == 0 ?  hour: hour - 1;
	minute = minute == 0 ? minute : 60 + minute;
	hour = hour >= 0 ? hour : 24 + hour;

	std::cout << std::setw(2) << std::setfill('0') << hour;
	std::cout << ':';
	std::cout << std::setw(2) << std::setfill('0') << minute;
	std::cout << std::endl;

	return 0;
}