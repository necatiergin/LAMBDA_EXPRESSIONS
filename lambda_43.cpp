#include <functional>
#include <iostream>


int main()
{
    std::function<int(int, int)> gcd = [&](int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    };

    std::cout << gcd(40, 72) << "\n";
}
