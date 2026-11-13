#include <iostream>
#include <utility>

template<typename... Ts>
auto foo(Ts&&... args)
{
    return [...xs = std::forward<Ts>(args)]
    (auto&&... ys) {
        std::cout << "Captured: ";
        ((std::cout << xs << ' '), ...);

        std::cout << "\nArguments: ";
        ((std::cout << ys << ' '), ...);
        };
}

int main()
{
    auto f = foo(10, 20, 30);

    f(1.5, 2.5);
}
