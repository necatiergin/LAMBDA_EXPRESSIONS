#include <iostream>
#include <typeinfo>

int main()
{
	int a[10]{};

	auto f1 = [a]() {std::cout << typeid(a).name() << '\n'; };
	f1();

	auto f2 = [a = a]() {std::cout << typeid(a).name() << '\n'; };
	f2();

	//auto f3 = [a]()mutable {a = nullptr; }; //invalid. a is an array not pointer

	auto f4 = [a = a]()mutable {a = nullptr; }; //valid
}
