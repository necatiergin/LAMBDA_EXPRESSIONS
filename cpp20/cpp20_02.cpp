#include <iostream>

int main()
{
	decltype([](int x) {return 2 * x + 3; }) f;
	std::cout << "f(20) = " << f(20) << '\n';
}
