// lambda init. capture

;#include <iostream>

int main()
{
	int ival{};

	std::cout << "ival = " << ival << '\n';

	auto f = [&v = ival](int x)
		{
			v += x;
		};

	f(20);

	std::cout << "ival = " << ival << '\n';
}
