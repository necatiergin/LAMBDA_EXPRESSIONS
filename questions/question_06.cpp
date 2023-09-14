// sentaks hatası olan yerleri işaretleyin.

int main()
{
	int a[10]{};

	auto f1 = [a]()mutable {a = nullptr; };
	auto f2 = [a = a](){a = nullptr; };
	auto f3 = [a = a]()mutable{a = nullptr; };
	auto f4 = [a]() {++* a; };
	auto f5 = [a]()mutable {++* a; };
	auto f6 = [a = a]() {++* a; };
}
