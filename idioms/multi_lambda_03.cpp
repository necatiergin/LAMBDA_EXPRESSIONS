#include <iostream>
#include <string>

template <typename... Ts>
struct Overload : Ts... {
    using Ts::operator()...;
};

int main()
{
    auto f = Overload{
        [](int) {
            std::cout << "int overload\n";
        },
        [](double) {
            std::cout << "double overload\n";
        },
        [](const auto&) {
            std::cout << "generic overload\n";
        }
    };

    f(10);
    f(3.14);
    f(std::string{ "hello" });
}
