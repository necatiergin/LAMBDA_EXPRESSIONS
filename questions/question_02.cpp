#include <iostream>

int main()
{
	auto x = [] {static int x{}; return ++x; };
	auto y = [] {static int x{}; return ++x; };

	std::cout << x() << x() << x() << '\n';
	std::cout << y() << y() << y() << '\n';
}
