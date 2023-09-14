#include <string>

int main()
{
	std::string str{ "hasan" };
	int x{};

	auto fx = [x]() mutable {++x; }; //gecerli
	auto fy = [str]() mutable {str.assign("ergin"); }; //gecerli
}
