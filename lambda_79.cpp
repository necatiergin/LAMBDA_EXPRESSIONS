#include <iostream>

template <typename ...T>
auto func(T ... args)
{
	auto val = [args...]() {
		return (... + args);
		}();

	return ((val * args) + ...);
}

int main()
{
	std::cout << func(2, 3, 5);	  //100
}
