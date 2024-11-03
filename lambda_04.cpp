#include <type_traits>
#include <iostream>

int main()
{
	auto f1 = [](int i) {return i * 5; };
	auto f2 = [](int i) {return i * 5; };

	auto b1 = f1 == f2; //false - function pointers not equal
	boolalpha(std::cout);
	std::cout << "b1 = " << b1 << '\n';
	constexpr auto b2 = std::is_same_v<decltype(f1), decltype(f2)>; //false - different types
	std::cout << "b2 = " << b2 << '\n';
}
