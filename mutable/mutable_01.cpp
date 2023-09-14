int main()
{
	int x{};

	auto f = [x]() {++x; }; //gecersiz
	auto g = [y = x + 1]() {++y; }; //gecersiz
}
