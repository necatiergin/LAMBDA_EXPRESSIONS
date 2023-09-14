

auto f1 = [](auto x) constexpr {return x * x; }; //since C++17
auto f2 = [](int x) constexpr -> int {return x * x; }; //since C++17

//aşağıdaki tanımlama geçersiz
//auto f3 = [](auto x) constexpr {
//	static int cnt = 0;
//	++cnt;
//	//...
//	return x * x; }; 

auto f1 = [](auto x) {return x * x; }; //implicitly constexpr since C++17

struct CompilerGeneratedName {
	template <typename T>
	constexpr auto operator() (T x) const
	{
		return x * x;
	}
};
