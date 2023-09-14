#include <string>

int main()
{
	std::string str{ "hasan" };

	str.assign("necati");

	auto f = [str]() {str.assign("ergin)"}; //gecersiz
}
