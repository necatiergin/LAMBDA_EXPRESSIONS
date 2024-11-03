// lambda init. capture

#include <iostream>

int main()
{
	auto f = [list = { 1, 3, 5, 7 }](int x) {
		int sum = 0;
		for (const auto i : list)
			sum += x * i;
		return sum;
		};
	
	std::cout << f(10);
}
