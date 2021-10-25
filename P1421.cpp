#include <iostream>

int main(void)
{
	int yuan, jiao;

	std::cin >> yuan >> jiao;
	std::cout << (yuan * 10 + jiao) / 19 << std::endl;

	return 0;
}