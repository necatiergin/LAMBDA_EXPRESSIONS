#include <cstdint>
#include <iostream>

using namespace std;

int main()
{
    auto fib = [](int64_t x, const auto& lambda)->int64_t
    {
        if (x == 0 || x == 1)
            return 1;
        else return lambda(x - 1, lambda) + lambda(x - 2, lambda);
    };

    cout << fib(22, fib) << "\n";
}
