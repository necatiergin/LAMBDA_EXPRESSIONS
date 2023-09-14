#include <string>
#include <iostream>

auto get_fn(char left, char right)
{
	return [left, right](int val) {;
	return left + std::to_string(val) + right; };
}

int main()
{
	auto f1 = get_fn('(', ')');
	auto f2 = get_fn('[', ']');
	auto f3 = get_fn('{', '}');
	auto f4 = get_fn('<', '>');
	auto f5 = get_fn('|', '|');

	for (auto val : { 1, 3, 5, 7, 9 }) {
		for (const auto f : { f1, f2, f3, f4, f5}) {
			std::cout << f(val) << "  ";
		}
		std::cout << "\n";
	}
}
