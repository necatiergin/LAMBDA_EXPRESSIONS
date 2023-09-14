#include <iostream>
#include <type_traits>

double i{};

int main()
{
	auto f = [i = 0]() -> decltype(i){ return 1; }();
	std::cout << std::is_same_v<decltype(f), int>;
}
