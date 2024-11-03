//lambda functions may have default arguments since C++14

#include <iostream>

int main()
{
	auto f = [](int x = 0) {std::cout << '(' << x << ")\n"; };

	f(10);
	f();
}
