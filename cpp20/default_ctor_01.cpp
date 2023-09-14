int main()
{
	auto f1 = [](int x) {return x * x; };
	auto f2 = f1; 
	decltype(f1) f3; //C++20
	f1 = f3; //C++20

	int x{ 20 };
	auto f4 = [x](int a) {return a * x; };
	//decltype(f4)f5; //gecersiz (stateless lambda değil)
	auto f6 = f4;
	//f6 = f4;  //gecersiz (stateless lambda değil)
}
