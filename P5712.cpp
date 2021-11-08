#include <iostream>


int main()
{
	int n;
	
	std::cin >> n;

	if (n == 0 || n == 1)
		std::cout << "Today, I ate " << n <<  " apple.";
	else
		std::cout << "Today, I ate " << n << " apples.";

	return 0;
}