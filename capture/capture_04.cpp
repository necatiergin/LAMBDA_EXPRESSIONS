#include <iostream>

int main()
{
	int x = 10;
	auto f = [&x] {++x; };

	std::cout << "x = " << x << "\n";

	f();

	std::cout << "x = " << x << "\n";
}
