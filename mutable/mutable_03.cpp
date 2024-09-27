#include <string>

int main()
{
	std::string str{ "hasan" };
	int x{};

	auto fx = [x]() mutable {++x; }; //valid
	auto fy = [str]() mutable {str.assign("ergin"); }; //valid
}
