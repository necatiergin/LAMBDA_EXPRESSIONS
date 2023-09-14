// ekran çıktısı ne olur?

#include <iostream>

int g = 5;

int main()
{
	auto f = [](int x = ++g) {return x * x; };

	auto x = f();
	auto y = f();

	std::cout << x << ' ' << y << ' ' << g << '\n';
}
