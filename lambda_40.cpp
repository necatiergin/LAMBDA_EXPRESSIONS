#include <vector>
#include <algorithm>
#include <cstdio>

void func(int) { putchar('i'); }
void func(double) { putchar('d'); }
void func(long) { putchar('l'); }

using namespace std;

int main()
{
	vector<int> vec(20);

	//...
	//for_each(begin(vec), end(vec), func); //gecersiz
	for_each(begin(vec), end(vec), (void (*)(int))func);
	putchar('\n');
	for_each(begin(vec), end(vec), [](auto x) {return func(x); });
}
