//argument to algorithms

#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

int main()
{
	std::vector vec{ 7, 1, -9, 3, 6, -2, 8, -4, 5 };
	sort(vec.begin(), vec.end(), [](int a, int b) {return std::abs(a) < std::abs(b); });

	for_each(vec.begin(), vec.end(), [](int i) {std::cout << i << ' '; });
}
