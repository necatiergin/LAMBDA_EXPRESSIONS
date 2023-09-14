#include <utility>

template <typename ...Types>
void foo(Types && ...args);

int main()
{
	auto f = []<typename ...Args>(Args&& ...args) {
		foo(std::forward<Args>(args)...);
	};
}
