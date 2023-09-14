#include <iostream>

int main()
{
	auto x = [] {static int x{}; return ++x; };
	auto y = x;
	auto z = x;

	std::cout << y() << y() << y();
	std::cout << z() << z() << z();
}
