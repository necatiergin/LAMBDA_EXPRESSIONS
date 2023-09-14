#include <type_traits>

void foo_1()
{
	auto f1 = []() {};
	auto f2 = f1;

	constexpr auto b = std::is_same_v<decltype(f1), decltype(f2)>;
}

void foo_2()
{
	auto f1 = []() {};
	auto f2 = []() {};

	constexpr auto b = std::is_same_v<decltype(f1), decltype(f2)>;
}

void foo_3()
{
	auto f1 = []() {};
	decltype(f1) f2;

	constexpr auto b = std::is_same_v<decltype(f1), decltype(f2)>;
}

void foo_4()
{
	auto f1 = []() {};
	decltype(f1) f2;

	constexpr auto b = std::is_same_v<decltype(f1), decltype(f2)>;
}
