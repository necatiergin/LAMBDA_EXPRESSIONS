#include <string>
#include <iostream>

struct Neco
{
	auto func()
	{
		return [str = str] { std::cout << str << '\0'; };
	}

	std::string str;
};

int main()
{
	auto f1 = Neco{ "necati" }.func();
	auto f2 = Neco{ "ergin" }.func();

	f1();
	f2();
}
