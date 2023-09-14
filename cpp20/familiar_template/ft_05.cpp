#include <iostream>

int main()
{
	auto f = []<class T, int n>(T(&a)[n]) {
		for (auto& x : a) {
			x *= n;
		}
	};
	
	int a[] = { 1, 2, 3, 4 };
	f(a);

	for (auto i : a)
		std::cout << i << " ";
}
