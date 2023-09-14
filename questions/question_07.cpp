//sentaks hatasıu olan yerleri işaretleyiniz.

int main()
{
	const int x = 10;

	auto f = [x]()mutable {++x; };
	auto g = [x = x]() {++x; };
	auto h = [x = x]()mutable {++x; };
}
