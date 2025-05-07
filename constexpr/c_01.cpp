#include <array>
#include <iostream>

int main()
{
	auto fsquare = [](auto val) { return val * val; };
	std::array<int, fsquare(5)> a1;  //1

	std::cout << a1.size() << "\n";

	auto f1 = [](int x) {  //2
		static int cnt = 0;
		++cnt;
		return x * cnt;
		};
	//std::array<int, f1(10)> a2; //gecersiz
	std::cout << f1(20) << "\n";

	auto f2 = [](int x)constexpr { //invalid
		static int cnt = 0;
		++cnt;
		return x * cnt;
		};

}

// since C++17 fsquare(5) expression is constexpr by default

// f1 lambda function definition doesn't satisfy constexpr requirements. f1(10) is not a constant expression

// the definition of lambda function f2 is invalid because of constexpr specifier.
