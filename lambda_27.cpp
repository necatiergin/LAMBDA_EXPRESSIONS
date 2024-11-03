// lambda init capture

#include <iostream>
#include <utility>

int main()
{
	int x = 10;
	auto f1 = [&x] {++x; };
	auto f2 = [&x = x] {++x; };
	//auto f3 = [&x = std::as_const(x)] {++x; }; //invalid
	//auto f4 = [&x = static_cast<const int&>(x)] {++x; }; //invalid
}
