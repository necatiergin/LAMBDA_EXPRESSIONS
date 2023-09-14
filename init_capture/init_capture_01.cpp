#include <iostream>


int main() 
{
	int ival{ 17 };
	const auto fn = [&r = ival]() { std::cout << r << '\n'; };
	fn();

	ival = 0;
	fn();
}
