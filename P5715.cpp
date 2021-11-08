#include <iostream>
#include <algorithm>

int main()
{
	int n[3];

	for (int i = 0; i < 3; i++)
		std::cin >> n[i];

	std::sort(n, n + 3);

	for (int i = 0; i < 3; i++)
		std::cout << n[i] << ' ';

	return 0;
}