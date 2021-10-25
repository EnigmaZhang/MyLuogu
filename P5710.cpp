#include <iostream>

int main()
{
	int n;
	bool one, two;

	std::cin >> n;

	one = n % 2 == 0;
	two = n > 4 && n <= 12;

	std::cout << (one & two) << ' ' << (one | two) << ' ' << (one ^ two) << ' ' << !(one | two);

	return 0;
}