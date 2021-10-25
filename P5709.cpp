#include <iostream>


int main()
{
	int m, t, s;

	std::cin >> m >> t >> s;

	int remain{ static_cast<int>(m - s * 1.0 / t) };

	if (remain <= 0)
		remain = 0;

	std::cout << remain;

	return 0;
}