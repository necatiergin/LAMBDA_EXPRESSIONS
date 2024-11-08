// mutable

int main()
{
	int x{};

	auto f = [x]() {++x; }; //invalid - const member function
	auto g = [y = x + 1]() {++y; }; //invalid - const member function
}
