#include <utility>

int main()
{
	auto [x, y] = std::pair{ 10, 20 };

	//valid in C++17
	auto f1 = [first = x, second = y] {
		return first + second;
		};

	//valid in C++17
	auto f2 = [x = x, y = y] {
		return x + y;
		};
}
