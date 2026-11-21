#include <iostream>
#include <string>

template <typename... Ts>
struct Overload : Ts... {
    using Ts::operator()...;
};

int main()
{
    int total = 0;
    std::string prefix = "Value: ";

    auto f = Overload{
        [&total](int x) {
            total += x;
        },
        [prefix](double x) {
            std::cout << prefix << x << '\n';
        }
    };

    f(10);
    f(20);
    f(3.14);

    std::cout << "total = " << total << '\n';
}
