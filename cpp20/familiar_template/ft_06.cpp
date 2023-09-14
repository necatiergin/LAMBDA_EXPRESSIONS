#include <vector>
#include <utility>

template <typename ...Args>
void foo(Args && ...args);


int main()
{
	auto fpush = []<typename T>(std::vector<T> &x, const T & val)
	{
		x.push_back(val);
	};

	auto call_foo = []<typename ...Args>(Args && ...args) { foo(std::forward<Args>(args)...); };
}
