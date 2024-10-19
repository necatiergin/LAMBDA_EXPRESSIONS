#include <iostream>
#include <set>

using namespace std;

int main()
{
	//C++20
	set<int, decltype([](int x, int y) {return y < x; }) > myset{ 12, 5, 7, 3, 9, 1, 6 };

	for (int x : myset)
		cout << x << " ";
}
