#include <iostream>

int main(void)
{
	int x = 7;
	auto f1 = [&]() { return x; };
	auto f2 = [&]()-> int& { return x; };
	auto f3 = [&]()-> decltype(auto) { return x; };

	//f1() = 10;  //error
	f2() = 3;  
	//f3() = 10;  //error
	
	std::cout << f1() << f2() << f3() << '\n';
}
