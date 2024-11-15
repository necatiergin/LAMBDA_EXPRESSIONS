#include <utility>
#include <iostream>

std::pair<int, double> foo();

int main()
{
	auto [i, d] = foo();

	auto f1 = [i, d]() {return i + d; }; //invalid in C++17 valid since C++20
	auto f2 = [=]() {return i + d; };	//invalid in C++17 valid since C++20
	auto f3 = [=]() {return i + d; };	//invalid in C++17 valid since C++20
}
