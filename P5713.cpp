#include <iostream>


int main()
{
	std::string s;
	int n;
	
	std::cin >> n;

	s = 5 * n < 11 + 3 * n ? "Local" : "Luogu";

	std::cout << s;

	return 0;
}