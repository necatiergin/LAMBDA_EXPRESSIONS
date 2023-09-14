auto createMulLambda(int x)
{
	return [x](int param) { return x * param; };
}

#include <iostream>

int main()
{
	auto f1 = createMulLambda(20);
	auto f2 = createMulLambda(70);

	std::cout << f1(10) << '\n';
	std::cout << f2(10) << '\n';
}
