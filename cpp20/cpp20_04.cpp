#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int, decltype([](int* p) {
		std::cout << p; delete p;
		})> uptr;
	//...
}
