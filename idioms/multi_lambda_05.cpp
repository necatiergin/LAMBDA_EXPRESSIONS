#include <concepts>
#include <iostream>

template <typename... Ts>
struct Overload : Ts... {
    using Ts::operator()...;
};

int main()
{
    auto f = Overload{
        []<std::integral T>(T x) {
            std::cout << "integral: " << x << '\n';
        },
        []<std::floating_point T>(T x) {
            std::cout << "floating: " << x << '\n';
        },
        [](const auto&) {
            std::cout << "other\n";
        }
    };

    f(10);
    f(3.14);
    f("hello");
}
