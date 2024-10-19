#include <iostream>
#include <vector>

int main()
{
	auto f = []<typename T>(const std::vector<T> &x, const std::vector<T> &y) {
		//...
	};

	std::vector<int> vx;
	std::vector<int> vy;

	f(vx, vy);
}
