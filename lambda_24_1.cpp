#include <type_traits>
#include <iostream>

int main()
{
	int a[10]{};

	auto f = [a]() {
		std::cout << std::boolalpha <<
			"is array ? " << std::is_array_v<decltype(a)> << '\n' <<
			"is pointer ? " << std::is_pointer_v<decltype(a)> << '\n';
		};
	f();
}
