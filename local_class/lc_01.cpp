// local classes

#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	int val = 5;

	class DivPred {
	public:
		DivPred(int x) : mx{x} {}
		bool operator()(int x)const 
		{
			return x % mx == 0;
		}
	private:
		int mx;
	};

	std::vector ivec{ 7, 3, 10, 2, 8, 20 };
	auto iter = std::find_if(ivec.begin(), ivec.end(), DivPred(val)); //error before C++11

	if (iter != ivec.end()) {
		std::cout << *iter << '\n';
	}
	else {
		std::cout << "not found\n";
	}
}
