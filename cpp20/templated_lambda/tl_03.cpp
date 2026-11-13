// templated lambda

#include <iostream>

int main()
{
	auto f1 = [](int x, int y) {return x + y; };
	auto f2 = [](auto x, auto y) {return x + y; };
	auto f3 = [](auto x, decltype(x)y) {return x + y; };
	auto f4 = []<typename T>(T x, T y) { return x + y; };

	std::cout << f1(2, 1.5) << '\n'; //3
	std::cout << f2(2, 1.5) << '\n'; //3.5
	std::cout << f3(2, 1.5) << '\n'; //3
	//std::cout << f4(2, 1.5) << '\n'; //invalid
	std::cout << f4(2., 1.5) << '\n'; //valid 3.5
	std::cout << f4(3, 5) << '\n'; //valid 8
}
