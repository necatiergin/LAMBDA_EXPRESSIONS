#include <memory>
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	auto up = make_unique<string>("necati");
	auto f = [up = move(up)]{ return *up + " ergin"; };

	cout << f() << "\n";

	if (up)
		std::cout << "up dolu\n";
	else
		std::cout << "up bos\n";

}
