//overload resolution with lambda

#include <vector>
#include <algorithm>
#include <cstdio>

void func(int) { std::putchar('i'); }
void func(double) { std::putchar('d'); }
void func(long) { std::putchar('l'); }

int main()
{
	std::vector<int> vec(20);

	//...
	//for_each(begin(vec), end(vec), func); //invalid
	for_each(begin(vec), end(vec), (void (*)(int))func);
	std::putchar('\n');
	for_each(begin(vec), end(vec), [](auto x) {return func(x); });
}
