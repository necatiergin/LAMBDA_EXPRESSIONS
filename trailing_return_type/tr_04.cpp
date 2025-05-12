#include <iostream>

int main(void)
{
	int x = 7;
	auto f1 = [&]() { return x; };
	auto f2 = [&]()-> int& { return x; };
	auto f3 = [&]()-> auto&& { return x; };
	auto f4 = [&]()-> decltype(auto) { return x; };
	auto f5 = [&]()-> decltype(auto) { return (x); };

	//f1() = 10;  //error
	f2() = 3;
	f3() = 10;  
	//f4() = 10; //error 
	f5() = 10;  
}
