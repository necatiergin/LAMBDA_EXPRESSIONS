#include <utility> 
#include <iostream>
#include <string>

int main(void)
{
	const auto prn = [](const auto& first, const auto & ...args) {
		std::cout << first;
		((std::cout << ", " << args), ...);
		std::cout << '\n';
		};

	std::string name{ "necati" };
	prn(1, name, "ergin", 4.5);
}
