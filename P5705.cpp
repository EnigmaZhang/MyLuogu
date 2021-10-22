#include <iostream>
#include <string>

int main()
{
	std::string s;

	std::cin >> s;

	for (int i = static_cast<int>(s.length() - 1); i >= 0; i--)
	{
		std::cout << s[i];
	}

	return 0;
}