#include <iostream>

struct Nec {
	int mx;
	void func()
	{
		auto f1 = [=] {++mx; };  //deprecated in C++20
		auto f2 = [&] {++mx; };
		auto f3 = [this] {++mx; };
		//auto f4 = [*this]() {++mx; }; //gecersiz
		auto f5 = [*this]() mutable {++mx; }; //gecerli //C++17

		f1();
		f2();
		f3();
		f5();
	}
};

//.cpp file
std::ostream& operator<<(std::ostream& os, const Nec& n)
{
	return std::cout << n.mx;
}

int main()
{
	Nec nec{ 20 };
	std::cout << nec << '\n';
	nec.func();
	std::cout << nec << '\n';
}
