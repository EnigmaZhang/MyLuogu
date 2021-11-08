#include <iostream>

int main()
{
	int n;
	
	std::cin >> n;

	std::cout << (n % 400 == 0 || n % 4 == 0 && n % 100);

	return 0;
}