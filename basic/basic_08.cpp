int main()
{
	auto f3 = [](int x) {
		if (x > 10)
			return 1;
		else
			return 3.4; //error - different return types
		};
}
