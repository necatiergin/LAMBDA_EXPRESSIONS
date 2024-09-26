int main()
{
	auto f1 = [](int x) {return x + 5; };
	auto x1 = f1(10); // x1 is int

	auto f2 = [](int x)->double {return x + 5; };
	auto x2 = f1(10); // x2 is double
}
