#include <iostream>

int main(void)
{
	int x = 7;
	auto frx = [&]()  -> auto& { return x; };
	frx() = 9;

	std::cout << "x = " << x << '\n';
	auto& r = frx();
	++r;
	std::cout << "x = " << x << '\n';
}
