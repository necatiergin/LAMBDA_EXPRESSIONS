#include <functional>
#include <iostream>

int main()
{
	int i = 7;

	auto f1 = [](int x) { return x * 5; };
	auto f2 = [i](int x) { return x * i; };
	std::function<int(int)> f3{ f1 };
	std::function<int(int)> f4{ f2 };

	std::cout << "sizeof(f1) = " << sizeof(f1) << '\n';
	std::cout << "sizeof(f2) = " << sizeof(f2) << '\n';
	std::cout << "sizeof(f3) = " << sizeof(f3) << '\n';
	std::cout << "sizeof(f4) = " << sizeof(f4) << '\n';
}

/*
	sample output:

	sizeof(f1) = 1
	sizeof(f2) = 4
	sizeof(f3) = 40
	sizeof(f4) = 40
*/

