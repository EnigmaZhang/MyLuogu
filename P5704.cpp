#include <iostream>
#include <cctype>


int main()
{
	char a;
	char b;

	std::cin >> a;

	b = toupper(a);

	std::cout << b;

	return 0;
}

