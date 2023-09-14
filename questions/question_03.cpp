#include <iostream>

int main()
{
	auto x = [] {static int x{}; return ++x; };
	decltype(x) y;
	decltype(x) z;

	std::cout << y() << y() << y();
	std::cout << z() << z() << z();
}
