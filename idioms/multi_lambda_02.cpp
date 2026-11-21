#include <iostream>
#include <string>
#include <variant>

template <typename... Ts>
struct Overload : Ts... {
    using Ts::operator()...;
};

int main()
{
    std::variant<int, double, std::string> v = 3.14;

    std::visit(
        Overload{
            [](int x) {
                std::cout << "int: " << x << '\n';
            },
            [](double x) {
                std::cout << "double: " << x << '\n';
            },
            [](const std::string& s) {
                std::cout << "string: " << s << '\n';
            }
        },
        v
    );
}
