// default ctor. & assignment operator function are deleted until C++20

int main()
{
	auto f1 = [](int i) {return i * 5; };
	auto f2 = f1;
	decltype(f1) f3; // valid since C++20

	f3 = f1; // valid since C++20

	int x{ 4 };
	auto f4 = [x](int a) {return a * x; };
	//decltype(f4) f5; // invalid - stateful lambda
}
