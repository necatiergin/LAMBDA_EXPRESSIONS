#include <iostream>

int main(void)
{
	int x = 7;
	auto fvx = [&]() { return x; };
	//auto& r = fvx(); //error;

	std::cout << fvx() << '\n';
}
