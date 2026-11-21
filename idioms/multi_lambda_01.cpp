#include <iostream>

template <typename... Ts>
struct Overload : Ts... {
    using Ts::operator()...;
};

int main()
{
    auto f = Overload{
        [](int x) {
            std::cout << "int: " << x << '\n';
        },
        [](double x) {
            std::cout << "double: " << x << '\n';
        },
        [](const char* str) {
            std::cout << "string: " << str << '\n';
        }
    };

    f(10);
    f(3.14);
    f("hello");
}
