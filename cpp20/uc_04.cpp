// lambda in unevaluated context

#include <iostream>
#include <set>

int main()
{
	//C++20
	std::set<int, decltype([](int x, int y) {return y < x; }) > myset{ 12, 5, 7, 3, 9, 1, 6 };

	for (int x : myset)
		cout << x << " ";
}
