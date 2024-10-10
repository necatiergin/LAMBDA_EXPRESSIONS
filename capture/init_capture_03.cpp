#include <iostream>

int main()
{
	int a[10]{};

	auto fx = [a]() {std::cout << typeid(a).name() << '\n'; };
	fx();

	auto fy = [a = a]() {std::cout << typeid(a).name() << '\n'; };
	fy();
}
