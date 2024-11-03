#include <string>

class Generator {
public:
	int generate();
};

int main()
{
	Generator gen;

	//auto f = [gen] {return gen.generate(); };; //invalid. const member function
	std::string str{ "hasan" };
	str.assign("necati");
	//auto f = [str]() {str.assign("ergin)"}; //invalid  - const member function
}
