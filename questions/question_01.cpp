// ekran çıktısı ne olur?

#include <iostream>

int g = 99;

auto fx = [=] {return g + 1; };
auto fy = [g = g] {return g + 1; };

int main()
{
	g = 500;

	std::cout << fx() << '\n';
	std::cout << fy() << '\n';
}
