int main()
{
	int x{};

	auto f = [x]() {++x; }; //invalid
	auto g = [y = x + 1]() {++y; }; //invalid
}
