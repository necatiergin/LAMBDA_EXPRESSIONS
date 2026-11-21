#include <iostream>

void process(int (*fp)(int))
{
    std::cout << "function pointer\n";
}

template <typename F>
void process(F f)
{
    std::cout << "function object\n";
}

int main()
{
    process([](int x) { return x * x; });

    process(+[](int x) { return x * x; });
}
