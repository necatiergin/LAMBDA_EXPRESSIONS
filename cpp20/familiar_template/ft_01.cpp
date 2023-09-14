#include <iostream>

int main()
{
	auto f = []<typename T>(T x, T y) { return x + y; };

	std::cout << f(34, 39) << '\n';
	std::cout << f(.22, .34) << '\n';
	//std::cout << f(55, .34) << '\n';  //gecersiz
}
