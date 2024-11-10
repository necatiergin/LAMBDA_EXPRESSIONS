#include <tuple>
#include <iostream>

int main()
{
	auto [x, y, z] = std::make_tuple(3, 5, 8);
	auto val = [&y = y] { return y; }();
	std::cout << "val = " << val << '\n';
}
