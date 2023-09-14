//lambdalarin varsayilan arguman almasi C++14 ile dile eklendi

#include <iostream>

int main()
{
	auto f = [](int x = 0) {std::cout << '(' << x << ")\n"; };

	f(10);
	f();
}
