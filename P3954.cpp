#include <iostream>

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	std::cout << static_cast<int>(a * 0.2 + b * 0.3 + c * 0.5) << std::endl;

	return 0;
}