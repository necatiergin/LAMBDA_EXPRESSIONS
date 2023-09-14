#include <utility>
#include <iostream>

template <typename F, typename ...Args>
auto make_task(F&& f, Args ...args)
{
	return[f = std::forward<F>(f), ...args = std::forward<Args>(args)]()mutable {
		return std::forward<F>(f)(std::forward<Args>(args)...); };
}

int main()
{
	auto f = [](const auto& ...s) {((std::cout << s << " "), ...); };

	auto task = make_task(f, "ali", 12, 5.6);

	task();
}
