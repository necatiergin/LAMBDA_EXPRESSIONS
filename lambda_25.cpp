#include <memory>
#include <string>
#include <iostream>

int main()
{
	auto up = std::make_unique<std::string>("necati");
	auto f = [up = move(up)] { return *up + " ergin"; };

	std::cout << f() << '\n';

	if (up)
		std::cout << "not empty\n";
	else
		std::cout << "empty\n";

}
