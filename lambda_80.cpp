#include <iostream>

int main()
{
	auto f = [x = 0](auto val)mutable { std::cout << ++x << '\n'; return val * val; };

	auto x1 = f(1);
	auto x2 = f(1.3);
	auto x3 = f(1L);
}
