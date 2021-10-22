#include <iostream>

int main(void)
{
	int hour_start, hour_end, minute_start, minute_end;
	int hour, minute;

	std::cin >> hour_start >> minute_start >> hour_end >> minute_end;

	minute = minute_end - minute_start;
	hour = hour_end - hour_start;
	hour = minute >= 0 ? hour : hour - 1;
	minute = minute >= 0 ? minute : 60 + minute;

	std::cout << hour << ' ' << minute << std::endl;
	return 0;
}