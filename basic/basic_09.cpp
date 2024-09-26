int main()
{
	auto f1 = [](int x) {return x * x; };
	constexpr bool b1 = noexcept(f1(10)); //b1 is false
	auto f2 = [](int x)noexcept {return x * x; };
	constexpr bool b2 = noexcept(f2(10)); //b2 is true
}
