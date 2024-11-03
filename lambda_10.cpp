int main()
{
	auto f1 = [](int x)noexcept{return x + 1; };
	auto f2 = [](int x){return x + 1; };
	
	static_assert(noexcept(f1(12)), "noexcept false");
	static_assert(noexcept(f2(12)), "noexcept false");
}
