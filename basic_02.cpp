#include <iostream>

int main()
{
	auto i = [](int x) {return x * x; }(5);
	
	std::cout << "i = " << i << '\n';
}
