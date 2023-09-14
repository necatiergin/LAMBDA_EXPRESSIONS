#include <iostream>

int main()
{
	int ival{};

	auto f = [&v = ival](int x) 
	{
		v += x; 
	};

	f(20);

	std::cout << "ival = " << ival << '\n';
}
