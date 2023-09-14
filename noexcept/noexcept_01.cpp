int main()
{
	auto fx = [](int x) {return x + 1; };
	auto fy = [](int x)noexcept {return x + 1; };

	constexpr auto bx = noexcept(fx(1));  //b is false
	constexpr auto by = noexcept(fy(1));  //b is true
}
