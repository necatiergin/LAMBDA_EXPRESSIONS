#include <string>

class Generator {
public:
	int generate();
};

int main()
{
	Generator gen;

	//auto f1 = [gen] {return gen.generate(); }; //invalid. const member function
	auto f2 = [gen] () mutable {return gen.generate(); }; //valid. non- const member function
	std::string str{ "hasan" };
	str.assign("necati");
	//auto f3 = [str]() {str.assign("ergin)";}; //invalid  - const member function
	auto f4 = [str]() mutable {str.assign("ergin"); }; // valid  - non-const member function
}
