#include <iostream>

int main()
{
	int x = 5, y = 9, z = 11;
	auto f = [x, &y, &z](int a) {
		y *= 10;
		z *= 10;
		return a * (x + y + z); };

	std::cout << f(2) << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "z = " << z << '\n';
	//...
}
